#include "ObjectBar/bar.h"
#include "ui_bar.h"

Bar::Bar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Bar)
    , progressBarIndex(0)
    , currentLevel(0)
    , menu(new Menu())
    , rest(new Rest())
    , isHideObjectBar(false)
    , workTimer(new QTimer(this))
    , breakTimer(new QTimer(this))
    , eatingTimer(new QTimer(this))
    , intervalTimer(new QTimer(this))
    , backpack(new Backpack())
    , tips(new Tips())
    , isAlwaysOnTop(false)
    , trayIcon(new QSystemTrayIcon(this))
{
    ui->setupUi(this);
    // 设置窗口属性
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::FramelessWindowHint);
    installEventFilter(this);
    // 接受焦点
    setFocusPolicy(Qt::StrongFocus);

    // 获取当前设备的 DPI 倍数
    dpiRatio = devicePixelRatio();

    // 加载方块框
    createAndSetupCustomFrames();

    // 创建图片
    createPixmap();
    this->heartIndex = heartLabels.length() - 1;
    this->hungryIndex = hungryLabels.length() - 1;
    // 点击工具栏
    connect(ui->toolButton, &QPushButton::clicked,this,&Bar::toggleFullScreen);
    // 关闭菜单
    connect(menu,&Menu::closeMenu,[=]{
        menu->close();
    });

    // 连接工作/休息信号
    changeHeart();
    // 连接饥饿/饱腹信号
    changeHungry();
    // 连接更新经验条信号
    connect(&SignalManager::instance(),&SignalManager::upDateLevel,this,&Bar::upDateProgressBar);

    // 获取当前目录路径
    QString currentPath = QDir::currentPath();
    // 构建 save 文件夹的路径
    QString saveFolderPath = currentPath + "/save";
    if (!QDir(saveFolderPath).exists()) {
        QDir().mkdir(saveFolderPath);
    }

    // 设置系统托盘图标
    trayIcon->setToolTip("HMCW");  // 设置工具提示文本
    trayIcon->setIcon(QIcon(":/Image/AchievementIcon/GeneralIcon/HelloWorld.png"));
    connect(trayIcon, &QSystemTrayIcon::activated, this, [=](QSystemTrayIcon::ActivationReason reason) {
        if(reason == QSystemTrayIcon::Trigger)
        {
            // 单击时恢复窗口显示
            this->showNormal();
        }
    });
    trayIcon->show();

    QMenu *trayIconMenu = new QMenu(this);
    trayIconMenu->setStyleSheet("border-image:url(:/Image/TextBillboardUp.png);");

    QAction *restoreAction = new QAction("正常显示", trayIconMenu);
    QAction *hideAction = new QAction("最小化显示", trayIconMenu);
    QAction *quit = new QAction("退出",trayIconMenu);

    trayIconMenu->addAction(restoreAction);
    trayIconMenu->addAction(hideAction);
    trayIconMenu->addAction(quit);

    trayIcon->setContextMenu(trayIconMenu);

    connect(restoreAction, &QAction::triggered, this, [=](){
        ui->health_bar->show();
        for(QFrame* frame:frames) frame->show();
        setFixedSize(BarWidget);
        this->isHideObjectBar = false;
        this->showNormal();  // 恢复显示窗口

    });
    connect(hideAction, &QAction::triggered, this, [=]() {
        this->hide();  // 隐藏当前窗口
    });
    // 退出信号的连接
    connect(&SignalManager::instance(),&SignalManager::Exit,this,&QCoreApplication::quit);

    connect(quit, &QAction::triggered, this, [=](){
        // 所有窗口销毁
        emit SignalManager::instance().Exit();
    });
    ui->toolButton->installEventFilter(this);

    // 重置饱食度图片
    connect(&SignalManager::instance(),&SignalManager::resetHungryState,this,&Bar::resetHungryState);
    // 重置爱心图片
    connect(&SignalManager::instance(),&SignalManager::resetHeartState,this,&Bar::resetHeartState);
}


bool Bar::eventFilter(QObject *obj, QEvent *event)
{
    // 处理自定义窗口拖动逻辑
    if(obj == this) {
        switch (event->type()) {
        case QEvent::MouseButtonPress: {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
            QPoint pos = mouseEvent->pos();
            QRect rect = this->rect();
            // 检查鼠标是否在窗口的边框区域
            if(pos.x() <= rect.left() + 550 || pos.x() >= rect.right() - 30 ||
                pos.y() <= rect.top() + 60 || pos.y() >= rect.bottom() - 30) {
                mousePressed = true;
                mousePressPos = pos;
                return true;
            }
            break;
        }
        case QEvent::MouseMove:
            if (mousePressed) {
                int dx = static_cast<QMouseEvent*>(event)->pos().x() - mousePressPos.x();
                int dy = static_cast<QMouseEvent*>(event)->pos().y() - mousePressPos.y();
                move(x()+dx, y()+dy);
                return true;
            }
            break;
        case QEvent::MouseButtonRelease:
            mousePressed = false;
            return true;
        default:
            break;
        }
    }
    if (obj == ui->toolButton && event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if (mouseEvent->button() == Qt::RightButton) {
            hideObjectBar();
            return true; // 表示事件已处理，不再传递
        }
    }
    return QObject::eventFilter(obj, event);
}

// 鼠标按下事件
void Bar::mousePressEvent(QMouseEvent *event)
{
    // 点击右键或者 H 键物品栏切换显示隐藏
    if (event->button() == Qt::RightButton && childAt(event->pos()) == ui->tool)
    {
        hideObjectBar();
    }
    QWidget::mousePressEvent(event);
}

void Bar::keyPressEvent(QKeyEvent *event)
{
    // 按下 H 键时,隐藏窗口,只显示 toolButton
    switch(event->key())
    {
        case Qt::Key_H:
            hideObjectBar();
            break;
        case Qt::Key_E:
            backpack->show();
            break;
        case Qt::Key_Escape:
            toggleFullScreen();
            break;
        case Qt::Key_Up:
            move(x(), y() - MOVESTEP);
            break;
        case Qt::Key_Down:
            move(x(), y() + MOVESTEP);
            break;
        case Qt::Key_Left:
            move(x() - MOVESTEP, y());
            break;
        case Qt::Key_Right:
            move(x() + MOVESTEP, y());
            break;
        default:
            break;
    }

    QWidget::keyPressEvent(event);
}

void Bar::closeEvent(QCloseEvent *event)
{
    if (trayIcon->isVisible())
    {
        hide();  // 隐藏窗口
        event->ignore();  // 忽略关闭事件
    }
}

void Bar::createPixmap(){
    // 图片初始化加载
    half_pixmap = QPixmap(":/Image/half_health.png"); // 半个爱心图片
    emptyHeart_pixmap = QPixmap(":/Image/empty_health.png"); // 空的爱心图片
    whiteBorder_pixmap = QPixmap(":/Image/whiteBorder.png"); // 白边框爱心图片
    darkWhiteBorder_pixmap = QPixmap(":/Image/darkWhiteBorder.png"); // 淡色白边框爱心图片
    darkWhiteBorderHalf_pixmap = QPixmap(":/Image/darkWhiteBorder_half.png"); // 淡色白边框半个爱心图片
    whiteBorderEmpty_health = QPixmap(":/Image/whiteBorderEmpty_health.png"); // 白边框的空爱心图片
    whiteBorderHalf_health = QPixmap(":/Image/whiteBorderHalf_health.png"); // 白边框的半个爱心图片
    emptyHungry_pixmap = QPixmap(":/Image/empty_hungry.png"); // 空的饱食度图片

    half_pixmap = half_pixmap.scaled(heartSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    emptyHeart_pixmap = emptyHeart_pixmap.scaled(heartSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    whiteBorder_pixmap = whiteBorder_pixmap.scaled(heartSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    darkWhiteBorder_pixmap = darkWhiteBorder_pixmap.scaled(heartSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    darkWhiteBorderHalf_pixmap = darkWhiteBorderHalf_pixmap.scaled(heartSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    whiteBorderEmpty_health = whiteBorderEmpty_health.scaled(heartSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    whiteBorderHalf_health = whiteBorderHalf_health.scaled(heartSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    emptyHungry_pixmap = emptyHungry_pixmap.scaled(heartSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    //创建爱心
    // 添加10个爱心图片到 hp_bar
    for (quint8 i = 0; i < 10; ++i) {
        //最左边是第1个
        QLabel *heartLabel = new QLabel(ui->hp_bar);
        heartLabel->setFixedSize(heartSize);
        health_pixmap = QPixmap(":/Image/health.png");
        health_pixmap = health_pixmap.scaled(heartSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        heartLabel->setPixmap(health_pixmap);
        // 设置爱心图片的位置
        qint8 x = i * heartSize.width(); // 爱心之间没有间距
        qint8 y = (ui->hp_bar->height() - heartSize.height()) / 2; // 垂直居中
        heartLabel->move(x, y);
        // 添加的顺序是从左到右
        heartLabels.append(heartLabel);// 将 QLabel 添加到向量中
    }

    //创建饥饿度
    // 添加10个饥饿图片到 hungry_bar
    int x;
    int y;
    for (quint8 i = 9; i >= 0; --i) {
        // 最右边是第1个
        QLabel *hungryLabel = new QLabel(ui->hungry_bar);
        hungryLabel->setFixedSize(hungrySize);
        hungry_pixmap = QPixmap(":/Image/hungry.png");
        hungry_pixmap = hungry_pixmap.scaled(hungrySize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        hungryLabel->setPixmap(hungry_pixmap);
        // 设置饥饿图片的位置
        if(i == 9) x = ui->hungry_bar->size().width() - hungrySize.width();//305-30是ui->hungry的宽度减去图片的宽
        else x = x - hungrySize.width() + 6;//6是间距
        y = (ui->hungry_bar->height() - hungrySize.height()) / 2; // 垂直居中
        hungryLabel->move(x, y);
        // 添加的顺序是从右到左
        hungryLabels.append(hungryLabel);// 将 QLabel 添加到向量中
    }

    // 添加进度条
    // 遍历 ui->exp_bar 中的子部件按顺序添加 progressBarLabel
    for (quint8 i = 1; i <= 16; ++i) {
        QString labelObjectName = QString("label_%1").arg(QString::number(i).rightJustified(2, '0')); // 构建子部件的对象名称，例如 label_01
        QLabel* parentLabel = ui->exp_bar->findChild<QLabel*>(labelObjectName);
        if (parentLabel) {
            QRect parentGeom = parentLabel->geometry();
            QLabel* progressBarLabel = new QLabel(parentLabel);
            progressBarLabel->setStyleSheet(progressBar_styleSheet);
            progressBarLabel->setGeometry(0, parentGeom.height() - 15, 0, 0);
            progressBarLabel->show();
            progressBarLabels.append(progressBarLabel);
        }
    }

}

void Bar::createAndSetupCustomFrames(){
    // 创建9个CustomFrame实例
    frames[0] = ui->frame_1;
    frames[1] = ui->frame_2;
    frames[2] = ui->frame_3;
    frames[3] = ui->frame_4;
    frames[4] = ui->frame_5;
    frames[5] = ui->frame_6;
    frames[6] = ui->frame_7;
    frames[7] = ui->frame_8;
    frames[8] = ui->frame_9;
    //样式
    panes_styleSheet = QStringLiteral(// 图标方格
        "   border-left:5px solid rgba(22, 24, 10,0.7);"
        "   border-top:5px solid rgba(22, 24, 10,0.7);"
        "   border-right:0;"
        "   border-bottom:0;"
        "   background-color:rgba(46, 44, 27,0.6);"
        "   border-radius: 0;"
        "}"
        "QFrame:hover {"
        "   background-color: rgb(66, 66, 50);"
        "   border-left:5px solid rgba(22, 24, 10,0.7);"
        "   border-top:5px solid rgba(22, 24, 10,0.7);"
        "   border-right:0;"
        "   border-bottom:0;"
        );
    frames_styleSheet = QStringLiteral(// 图标父元素
        "   background-color: rgba(105, 106, 101,0.8);"
        "   border-left: 1px solid rgba(45, 45, 45,0.5);"
        "   border-top: 1px solid rgba(45, 45, 45,0.5);"
        );
    progressBar_styleSheet = QStringLiteral(// 进度条
        "QLabel{"
        "   background-color: rgba(80, 180, 88,1);"
        "   border-left:4px solid rgb(0, 0, 0);"
        "   border-top:4px solid rgb(0, 0, 0);"
        "   border-right:4px solid rgb(0, 0, 0);"
        "   border-bottom:4px solid rgb(0, 0, 0);"
        "}"
        );

    for (int i = 0; i < 9; ++i) {
        frames[i]->setStyleSheet(frames_styleSheet);
        customPanes[i] = new CustomFrame(frames[i]);
        customPanes[i]->setObjectBarName(QStringLiteral("objectFrame_%1").arg(i + 1));
        customPanes[i]->setStyleSheet(panes_styleSheet);
        customPanes[i]->readConfigFile(); // 读取配置文件
        int fixedWidth = 50; // 设置固定宽度
        int fixedHeight = 50; // 设置固定高度
        customPanes[i]->setGeometry(4,4,fixedWidth,fixedHeight);
        // 连接点击信号
        connect(customPanes[i],&CustomFrame::frameClicked,this,&Bar::onFrameClicked);
        // 为 customPanes[i] 绑定右键点击事件
        customPanes[i]->setContextMenuPolicy(Qt::CustomContextMenu);
        // 右键事件
        connect(customPanes[i], &QWidget::customContextMenuRequested, this, [this, i](const QPoint &pos) {
            // 处理右键点击事件的逻辑
            // 创建菜单栏
            QMenu menu(this);
            menu.setStyleSheet(
                "QMenu {"
                "    padding: 5px;"
                "    font-size: 18px;"
                "    font-weight:550;"
                "    border-image:url(:/Image/BillboardUp.png);"
                "}"
                "QMenu::item {"
                "    padding: 5px 20px;"
                "    background-color: transparent;"
                "}"
                "QMenu::item:selected {"
                "    border-image:url(:/Image/TextBillboardUp.png);"
                "}"
                );

            QAction *openObjectBar = menu.addAction("背包");
            QAction *pinToTopAction = menu.addAction("置顶");
            QAction *smallWindowDisplay = menu.addAction("小窗显示");
            QAction *showTrayIcon = menu.addAction("最小化");
            QAction *deleteAction = menu.addAction("删除");

            pinToTopAction->setCheckable(true); // 设置菜单项为可选中状态
            if (this->isAlwaysOnTop) { // 根据 isAlwaysOnTop 标志设置菜单项的选中状态
                pinToTopAction->setChecked(true);
            }

            // 打开背包
            connect(openObjectBar, &QAction::triggered, this, [=]() {
                backpack->show();
            });
            // 置顶
            connect(pinToTopAction, &QAction::toggled, this, [this](bool checked) {
                this->isAlwaysOnTop = checked;
                this->setWindowFlag(Qt::WindowStaysOnTopHint, checked);
                this->show();
            });
            // 小窗显示
            connect(smallWindowDisplay, &QAction::triggered, this,[=]{
                hideObjectBar();
            });
            // 最小化显示
            connect(showTrayIcon, &QAction::triggered, this,[=]{
                this->hide();  // 隐藏当前窗口
            });
            // 点击删除选项删除对应的exe文件
            connect(deleteAction, &QAction::triggered, this,[=]{
                // 清空信息后重新加载
                customPanes[i]->clearInfo();
            });


            // 显示菜单栏
            menu.exec(customPanes[i]->mapToGlobal(pos));
        });
    }
}

void Bar::onFrameClicked(CustomFrame *frame)
{
    QString frames_newStyleSheet;
    if (frame->property("isLaunched").toBool()) {//改变的是父元素的样式
        frames_newStyleSheet = QStringLiteral(
            "   background-color:  rgba(203, 216, 200,1);"
            "   border-left: 2px solid rgba(203, 218, 199,0.4);"
            "   border-top: 2px solid rgba(203, 218, 199,0.4);"
            "   border-right: 2px solid rgba(203, 218, 199,0.4);"
            );
    }
    else {
        frames_newStyleSheet = frames_styleSheet;
    }
    QFrame* parentFrame = frame->getParentFrame();
    if (parentFrame) {
        parentFrame->setStyleSheet(frames_newStyleSheet);
    }
}

void Bar::toggleFullScreen(){
    // isHideObjectBar == false时 切换到显示状态
    // 使用左键点击时 显示设置页面
    if(!this->isHideObjectBar)// 切换到模式 如果在显示的情况下
    {
        menu->show();
    }
    else//如果隐藏了 就把整个物品栏窗口显示
    {
        ui->health_bar->show();
        for(QFrame* frame:frames) frame->show();
        setFixedSize(BarWidget);
        this->isHideObjectBar = false;
    }
}

void Bar::changeHeart(){
    // 根据工作和休息的时长来判断此时是否更新图片
    connect(&SignalManager::instance(),&SignalManager::breakingUpdataHealth,this,&Bar::updataHealth_UP);
    connect(&SignalManager::instance(),&SignalManager::workingUpdataHealth,this,&Bar::updataHealth_DOWN);
    // 增加生命值
    connect(breakTimer, &QTimer::timeout, [this](){
        if(this->heartIndex <= 0)
        {
            this->heartIndex = 0;
            workTimer->stop(); // 停止定时器
        }

        if (this->heartIndex < heartLabels.length())
        {
            QImage currentPixmap = heartLabels[heartIndex]->pixmap().toImage();
            // heartIndex后的图片置为白边框爱心图片
            for(qint8 i = heartIndex + 1;i < heartLabels.length();i++){
                heartLabels[i]->setPixmap(whiteBorderEmpty_health);
            }

            if(currentPixmap == emptyHeart_pixmap.toImage())
            {
                // 先显示白色边框的空爱心图片等待一段时间后再显示半个爱心图片
                heartLabels[heartIndex]->setPixmap(whiteBorderEmpty_health);
                QTimer::singleShot(100, [this]() {
                    for(qint8 i = heartIndex + 1;i < heartLabels.length();i++){
                        heartLabels[i]->setPixmap(emptyHeart_pixmap);
                    }
                    // 如果当前图片是空的的爱心图片，切换到半个爱心图片
                    heartLabels[heartIndex]->setPixmap(half_pixmap);
                });

            }
            else if (currentPixmap == half_pixmap.toImage())
            {
                // 先显示白色边框的半个爱心图片
                heartLabels[heartIndex]->setPixmap(whiteBorderHalf_health);
                QTimer::singleShot(100, [this]() {
                    for(qint8 i = heartIndex + 1;i < heartLabels.length();i++){
                        heartLabels[i]->setPixmap(emptyHeart_pixmap);
                    }
                    // 如果当前图片是半个爱心图片，切换到完整的爱心图片
                    heartLabels[heartIndex]->setPixmap(health_pixmap);
                    // 如何开始操作下一张图片了
                    if(heartIndex == heartLabels.length() - 1)
                    {
                        // 防止索引溢出
                        breakTimer->stop(); // 停止定时器
                    }
                    else{
                        heartIndex++;
                    }
                });
            }

        }
    });
    // 减少生命值
    connect(workTimer, &QTimer::timeout, [this](){
        if (heartIndex >= 0)
        {
            QImage currentPixmap = heartLabels[heartIndex]->pixmap().toImage();
            // heartIndex之前的图片置为白边框爱心图片
            for(qint8 i = heartIndex - 1;i>=0;i--){
                heartLabels[i]->setPixmap(whiteBorder_pixmap);
            }// 其余已扣过的变成淡色爱心图片
            if(heartIndex != heartLabels.length()-1){
                for(qint8 i = heartIndex+1;i<=heartLabels.length()-1;i++){
                    heartLabels[i]->setPixmap(darkWhiteBorder_pixmap);
                }
            }
            if(currentPixmap == health_pixmap.toImage())
            {
                // 如果当前图片是完整的爱心图片，切换到半个爱心图片
                heartLabels[heartIndex]->setPixmap(darkWhiteBorderHalf_pixmap); // 淡色的
                QTimer::singleShot(100, [this]() {
                    // 等待一段时间后再显示半个爱心图片
                    heartLabels[heartIndex]->setPixmap(half_pixmap);
                    if(heartIndex != 0){
                        for(qint8 i = heartIndex - 1;i>=0;i--){
                            heartLabels[i]->setPixmap(health_pixmap);
                        }
                    }
                    if(heartIndex != heartLabels.length()-1){
                        for(qint8 i = heartIndex+1;i<=heartLabels.length()-1;i++){
                            heartLabels[i]->setPixmap(emptyHeart_pixmap);
                        }
                    }
                });

            }
            else if (currentPixmap == half_pixmap.toImage())
            {
                // 如果当前图片是半个爱心图片，切换到空的爱心图片
                heartLabels[heartIndex]->setPixmap(darkWhiteBorder_pixmap);
                QTimer::singleShot(100, [this]() {
                    heartLabels[heartIndex]->setPixmap(emptyHeart_pixmap);
                    // 恢复heartIndex前面的图片
                    for(qint8 i = heartIndex - 1;i>=0;i--){
                        heartLabels[i]->setPixmap(health_pixmap);
                    }
                    if(heartIndex != heartLabels.length() - 1){
                        for(qint8 i = heartIndex+1;i<=heartLabels.length()-1;i++){
                            heartLabels[i]->setPixmap(emptyHeart_pixmap);
                        }
                    }
                    heartIndex--;// 开始操作下一张图片了
                });
            }
        }
    });
}

void Bar::updataHealth_UP(QTime breakTime)
{   // 更新生命值图片(增加)
    // 根据 breakTime 计算图片显示的频率，每隔 (breakTime 秒数 / 20) 更换一张图片
    qfloat16 frequencyTime = (breakTime.hour() * 3600 + breakTime.minute() * 60 + breakTime.second()) / 20.0;
    // 设置定时器，每隔 frequencyTime 秒触发一次
    breakTimer->start(frequencyTime * 1000); // 将秒数转换为毫秒
}

void Bar::updataHealth_DOWN(QTime workTime)
{   // 更新生命值图片(减少)
    // 根据 workTime 计算图片显示的频率，每隔 (workTime 秒数 / 20) 更换一张图片
    qfloat16 frequencyTime = (workTime.hour() * 3600 + workTime.minute() *   60 + workTime.second()) / 20.0;
    // 设置定时器，每隔 frequencyTime 秒触发一次
    workTimer->start(frequencyTime * 1000); // 将秒数转换为毫秒

}

void Bar::changeHungry()
{
    // 根据距离下一次吃饭时长和进餐时长
    connect(&SignalManager::instance(),&SignalManager::HungryRemoveState,this,&Bar::updateHungry_UP);// 增加饱食度 传递进食时长为参数
    connect(&SignalManager::instance(),&SignalManager::HungryState,this,&Bar::updateHungry_DOWN);   //  减少饱食度 传递距离下次吃饭的时长为参数
    // 增加饱食度
    connect(eatingTimer, &QTimer::timeout, [this](){
        if (this->hungryIndex < hungryLabels.length())
        {
            QImage currentPixmap = hungryLabels[hungryIndex]->pixmap().toImage();
            if(currentPixmap == emptyHungry_pixmap.toImage())
            {
                hungryLabels[hungryIndex]->setPixmap(hungry_pixmap); // 完整的饱食度图片
                hungryIndex++;
                if(hungryIndex == hungryLabels.length())
                {
                    hungryIndex = hungryLabels.length() - 1;
                    eatingTimer->stop();
                }
            }
        }
    });
    // 减少饱食度
    connect(intervalTimer, &QTimer::timeout, [this](){
        if (hungryIndex >= 0)
        {
            QImage currentPixmap = hungryLabels[hungryIndex]->pixmap().toImage();
            if(currentPixmap == hungry_pixmap.toImage())
            {
                // 如果当前图片是完整的饱食度图片，切换到空的饱食度图片
                hungryLabels[hungryIndex]->setPixmap(emptyHungry_pixmap);// 空的饱食度图片
                hungryIndex--;
                if(hungryIndex == -1)
                {
                    hungryIndex = 0;
                    intervalTimer->stop();
                }
            }
        }
    });
}

void Bar::updateHungry_UP(QTime eatingTime)
{
    // 更新饱食度图片(增加)
    // 根据 eatingTime 计算图片显示的频率，每隔 (eatingTime 秒数 / 10) 更换一张图片
    qfloat16 frequencyTime = (eatingTime.hour() * 3600 + eatingTime.minute() * 60 + eatingTime.second()) / 20.0;
    // 设置定时器，每隔 frequencyTime 秒触发一次
    eatingTimer->start(frequencyTime * 1000); // 将秒数转换为毫秒
}

void Bar::updateHungry_DOWN(QTime intervalTime)
{
    // 更新饱食度图片(减少)
    // 根据 intervalTime 计算图片显示的频率，每隔 (intervalTime 秒数 / 10) 更换一张图片
    qfloat16 frequencyTime = (intervalTime.hour() * 3600 + intervalTime.minute() * 60 + intervalTime.second()) / 20.0;
    // 设置定时器，每隔 frequencyTime 秒触发一次
    intervalTimer->start(frequencyTime * 1000); // 将秒数转换为毫秒
}

void Bar::upDateProgressBar()
{
    //如果工作后休息完毕后就可以更新一次经验条，总共 16 个经验条 当超过16个时重置经验条并将等级变为+1
    if(progressBarIndex > 0 && progressBarIndex % progressBarLabels.length() == 0)
    {
        currentLevel++;
        ui->levelLabel->setText(QString::number(currentLevel));
        ui->levelLabel->setFont(QFont("Arial",16));
        ui->levelLabel->setStyleSheet("color:rgb(80, 180, 88);");
        ui->levelLabel->setFixedHeight(40);
        // 重置所有经验条
        for(auto &progressBarLabel : progressBarLabels)
        {
            progressBarLabel->setFixedSize(0, 0);
        }
    }
    // 设置当前经验条
    progressBarLabels[progressBarIndex % progressBarLabels.length()]->setFixedSize(40, 17);
    progressBarIndex++;
}

void Bar::resetHungryState()
{
    // 重置为全为正常的饱食度图片
    this->hungryIndex = hungryLabels.length() - 1;
    for(auto &hungryLabel : hungryLabels)
    {
        hungryLabel->setPixmap(hungry_pixmap);
    }
}

void Bar::resetHeartState()
{
    // 重置为全为正常的爱心图片
    this->heartIndex = heartLabels.length() - 1;
    for(auto &heartLabel : heartLabels)
    {
        heartLabel->setPixmap(health_pixmap);
    }
}

void Bar::hideObjectBar()
{
    // 右击 toolButton 时,隐藏窗口,只显示 tool
    if (!this->isHideObjectBar)
    {
        ui->health_bar->hide();
        for(QFrame* frame:frames){
            frame->hide();
        }
        ui->tool->move(8,1);// 移动到第一个位置
        ui->tool->show();
        // 将窗口的宽度和高度设置为与 tool 的宽度和高度相同,并考虑 DPI 倍数
        setFixedSize((ui->tool->width() * dpiRatio),ui->tool->height() * dpiRatio);
        this->isHideObjectBar = true;
    }
    else
    {
        ui->health_bar->show();
        for(QFrame* frame:frames) frame->show();
        setFixedSize(BarWidget);
        this->isHideObjectBar = false;
    }
}

Bar::~Bar()
{
    for (quint8 i = 0; i < 9; i++)
    {
        delete customPanes[i];
        customPanes[i] = nullptr;
    }
    if(menu)
    {
        delete menu;
        menu = nullptr;
    }
    if(rest){
        delete rest;
        rest = nullptr;
    }
    if(backpack)
    {
        delete backpack;
        backpack = nullptr;
    }
    if(tips)
    {
        delete tips;
        tips = nullptr;
    }
    delete ui;
}
