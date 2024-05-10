#include "ObjectBar/backpack.h"
#include "ui_backpack.h"

Backpack::Backpack(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Backpack)
    , mousePressed(false)
    , queryapp(new Queryapp)
    , notFoundMatchTips(new Tips())
    , updataQueryTips(new Tips())
    , isExeQueryIconsHide(true)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    // 安装事件过滤器（拖动事件）
    this->installEventFilter(this);
    // 初始化方格样式
    InitFrames();
    this->setWindowTitle("我的背包");
    pLayout = new QVBoxLayout(); // 垂直布局
    ui->scrollAreaWidgetContents->setLayout(pLayout); // 设置为垂直布局
    ui->scrollAreaWidgetContents->layout()->setContentsMargins(0, 0, 0, 0);
    ui->widget_3->setStyleSheet("QWidget#widget_3{"
                                "background-color: rgb(198, 198, 198);"
                                "border-top:  5px solid rgb(254, 254, 254);"
                                "border-left: 5px solid rgb(254, 254, 254);"
                                "border-bottom: 5px solid rgb(84, 84, 84);"
                                "border-right: 5px solid rgb(84, 84, 84);"
                                "}");

    QString buttonStyleSheet = "QPushButton{"
                               "color: rgb(255, 255, 255);"
                               "background-color: rgb(109, 109, 109);"
                               "border-left:4px solid rgb(184, 184, 185);"
                               "border-top:4px solid rgb(184, 184, 185);"
                               "border-right:4px solid rgb(88, 88, 88);"
                               "border-bottom:4px solid rgb(88, 88, 88);"
                               "}"
                               "QPushButton:hover{"
                               "background-color: rgb(109, 109, 109);"
                               "border:5px solid rgb(224, 226, 224);"
                               "}";

    ui->queryButton->setStyleSheet(buttonStyleSheet);
    ui->hideButton->setStyleSheet(buttonStyleSheet);

    QString SearchButtonStyleSheet = "QPushButton{"
                               "color: rgb(255, 255, 255);"
                               "background-color: rgb(109, 109, 109);"
                               "border-left:4px solid rgb(184, 184, 185);"
                               "border-top:4px solid rgb(184, 184, 185);"
                               "border-right:4px solid rgb(88, 88, 88);"
                               "border-bottom:4px solid rgb(88, 88, 88);"
                               "border-radius: 0px;"
                               "}"
                               "QPushButton:hover{"
                               "background-color: rgb(109, 109, 109);"
                               "border:5px solid rgb(224, 226, 224);"
                               "}";
    ui->SearchButton->setStyleSheet(SearchButtonStyleSheet);

    // 初始化QueryFrame图标
    LoadingAllIcon();
    // 查询路径
    InitQuery();

    connect(ui->hideButton,&QPushButton::clicked,[=]{
        this->hide();// 隐藏窗口
    });
    // 设置 ui->lineEdit 控件的提示文字
    ui->lineEdit->setPlaceholderText("请输入文件名...");

    // 绘制图标
    QPixmap pixmap(":/Image/queryIcon.png");
    ui->searchIconLabel->setPixmap(pixmap.scaled(ui->searchIconLabel->width() - 4,ui->searchIconLabel->height() - 4, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    // 问号图片 (功能待定)
    ui->characterLabel->setStyleSheet("QLabel#characterLabel{border-image:url(:/Image/KeepExpect.png);}");

    ui->ExeFrameIcon->setIcon(QIcon(":/Image/switchExeFrameIcon.png"));
    ui->ExeFrameIcon->setIconSize(QSize(64, 64)); // 设置图标大小
    ui->ExeFrameIcon->setStyleSheet(
        "QPushButton:hover {"
        "color:white;"
        "border-left: 5px solid rgba(51, 51, 51,0.8);"
        "border-top: 6px solid rgba(51, 51, 51,0.8);"
        "border-right: 5px solid rgb(190, 190, 190);"
        "border-bottom: 5px solid rgb(251, 251, 251);"
        "}"
        );

    connect(ui->ExeFrameIcon,&QPushButton::clicked,[=]{
        // 判断左侧区域是否显示
        if(this->isExeQueryIconsHide)
        {
            ui->widget_3->hide();
            this->isExeQueryIconsHide = false;
        }
        else
        {
            ui->widget_3->show();
            this->isExeQueryIconsHide = true;
        }
    });
    // 接受退出信号
    connect(&SignalManager::instance(),&SignalManager::Exit,this,QCoreApplication::quit);
}

bool Backpack::eventFilter(QObject *obj, QEvent *event)
{
    // 处理自定义窗口拖动逻辑
    if(obj == this) {
        switch (event->type()) {
        case QEvent::MouseButtonPress: {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
            QPoint pos = mouseEvent->pos();
            QRect rect = this->rect();
            // 检查鼠标是否在窗口的边框区域
            if(pos.x() <= rect.left() + 20 || pos.x() >= rect.right() - 20 ||
                pos.y() <= rect.top() + 20 || pos.y() >= rect.bottom() - 20) {
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
    return QObject::eventFilter(obj, event);
}

void Backpack::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_E)
    {
        this->hide();
    }
    else if(event->key() == Qt::Key_Escape)
    {
        this->hide();
    }
}

void Backpack::InitFrames()
{
    // 初始化方格样式
    QString Obj_Sto_StyleSheet = QStringLiteral(
        "   background-color: rgb(139, 139, 139);"
        "   border-left: 4px solid rgba(51, 51, 51,0.8);"
        "   border-top: 4px solid rgba(51, 51, 51,0.8);"
        "   border-right: 4px solid rgb(190, 190, 190);"
        "   border-bottom: 4px solid rgb(251, 251, 251);"
        "}"
        "QFrame:hover {"
        "   background-color: rgb(192, 192, 192);"
        "   border-left: 4px solid rgba(51, 51, 51,0.8);"
        "   border-top: 4px solid rgba(51, 51, 51,0.8);"
        "   border-right: 4px solid rgb(190, 190, 190);"
        "   border-bottom: 4px solid rgb(251, 251, 251);"
        );
    int fixedWidth = 50; // 设置固定宽度
    int fixedHeight = 50; // 设置固定高度
    // 创建水平布局对象
    QHBoxLayout *hBoxLayout1 = new QHBoxLayout(ui->object_bar);
    QHBoxLayout *hBoxLayout2 = new QHBoxLayout(ui->object_bar_1);
    QHBoxLayout *hBoxLayout3 = new QHBoxLayout(ui->object_bar_2);
    QHBoxLayout *hBoxLayout4 = new QHBoxLayout(ui->object_bar_3);
    for (qint8 i = 0; i < 9; ++i) {
        objectframe[i] = new Objectframe(ui->object_bar, QStringLiteral("objectFrame_%1").arg(i + 1));
        objectframe[i]->setStyleSheet(Obj_Sto_StyleSheet);
        objectframe[i]->setFixedSize(fixedWidth, fixedHeight);
        hBoxLayout1->addWidget(objectframe[i]); // 添加到人物物品栏父元素的水平布局
        objectsFrameVector.append(objectframe[i]);
    }

    for(qint8 i = 0; i < 27; i++){
        if(i < 9){
            // 创建 Storageframe 对象，并传递对象名
            storageframe[i] = new Storageframe(ui->object_bar_1, QStringLiteral("storageframe_%1").arg(i + 1));
            storageframe[i]->setParent(ui->object_bar_1);
            hBoxLayout2->addWidget(storageframe[i]); // 添加到第1个仓库栏父元素的水平布局
        }
        else if(i < 18){
            storageframe[i] = new Storageframe(ui->object_bar_2, QStringLiteral("storageframe_%1").arg(i + 1));
            storageframe[i]->setParent(ui->object_bar_2);
            hBoxLayout3->addWidget(storageframe[i]); // 添加到第2个仓库栏父元素的水平布局
        }
        else{
            storageframe[i] = new Storageframe(ui->object_bar_3, QStringLiteral("storageframe_%1").arg(i + 1));
            storageframe[i]->setParent(ui->object_bar_3);
            hBoxLayout4->addWidget(storageframe[i]); // 添加到第3个仓库栏父元素的水平布局
        }
        storageframe[i]->setStyleSheet(Obj_Sto_StyleSheet);
        storageframe[i]->setFixedSize(fixedWidth, fixedHeight);
        storageFrameVector.append(storageframe[i]);
    }
    // 将水平布局设置为父元素的布局管理器
    ui->object_bar->setLayout(hBoxLayout1);
    ui->object_bar_1->setLayout(hBoxLayout2);
    ui->object_bar_2->setLayout(hBoxLayout3);
    ui->object_bar_3->setLayout(hBoxLayout4);
    // 设置每个父元素的布局为0
    ui->object_bar->layout()->setContentsMargins(0, 0, 0, 0);
    ui->object_bar_1->layout()->setContentsMargins(0, 0, 0, 0);
    ui->object_bar_2->layout()->setContentsMargins(0, 0, 0, 0);
    ui->object_bar_3->layout()->setContentsMargins(0, 0, 0, 0);

}
void Backpack::InitQuery()
{
    connect(queryapp,&Queryapp::querying,[=]{
        ui->queryButton->setText("q u e r y i n g...");
        ui->queryButton->setEnabled(false); // 如果正在搜索就不能点击
    });
    // 点击查询按钮
    connect(ui->queryButton, &QPushButton::clicked,this,&Backpack::ClickStartQuery);

    // 改变lineEdit能查询出所有匹配的图标
    connect(ui->SearchButton, &QPushButton::clicked, [=] {
        if(ui->lineEdit->text() != "")
        {
            // 更新统计信息的搜索次数
            emit SignalManager::instance().updateResearch();
        }
        FilterIcon(ui->lineEdit->text());
    });

    // 如果找完了就开始绘制图标
    connect(queryapp, &Queryapp::executableFound, this, &Backpack::AllExeFound);

    connect(queryapp, &Queryapp::finished, queryapp, &Queryapp::stopThread);
    connect(queryapp, &Queryapp::finished, [=]{
        ui->queryButton->setText("q u e r y");
        ui->queryButton->setEnabled(true); // 如果正在搜索就不能点击
    });
    // 连接清空查询图标的状态信号
    for(auto &objectframe : objectframe){
        connect(objectframe,&Objectframe::objectFrameClick,this,&Backpack::resetState);
        objectframe->loadSettings();
        // 当不同源的frame拖拽时连接的信号 重置源对象
        connect(objectframe,&Objectframe::StorageFrameToObjectFrameDrag,this,&Backpack::ResetStorageFrame);
    }
    // Backpack 和 storageframe 更新图标
    for(auto &storageframe : storageframe){
        connect(storageframe,&Storageframe::storageFrameClick,this,&Backpack::resetState);
        storageframe->loadSettings();
        // 当不同源的frame拖拽时连接的信号 重置源对象
        connect(storageframe,&Storageframe::ObjectFrameDragToStorageFrame,this,&Backpack::ResetObjectFrame);
    }
}

// 查询展示目录下所有的exe文件及其图标
void Backpack::AllExeFound(const QStringList &filePaths, const QStringList &iconPaths)
{
    // 清空之前的配置文件内容
    QSettings settings("config2.ini", QSettings::IniFormat);
    settings.clear();

    // 保存 exe 文件路径和图标路径
    int previousSize = 0;
    settings.beginWriteArray("Paths");
    for (int i = 0; i < filePaths.size(); ++i) {
        settings.setArrayIndex(i + previousSize);
        settings.setValue("ExePath", filePaths.at(i));
        settings.setValue("IconPath", iconPaths.at(i));
    }
    // 更新配置文件中的 size 值
    settings.endArray();
    settings.setValue("Paths/size", filePaths.size());

    DrawIcon(filePaths, iconPaths);
    // 查询结束解除ui->lineEdit
    ui->lineEdit->setEnabled(true);
    ui->queryButton->setEnabled(true);
}

// 展示目录下所有的exe文件及其图标
void Backpack::LoadingAllIcon()
{

    QSettings settings("config2.ini", QSettings::IniFormat);
    int size = settings.beginReadArray("Paths");
    QStringList filePaths;
    QStringList iconPaths;
    bool isIconExist = true;
    for(long long i = 0;i < size;++i)
    {
        settings.setArrayIndex(i);
        QString exePath = settings.value("ExePath").toString();
        QString iconPath = settings.value("IconPath").toString();
        if (!QFile::exists(iconPath))
        {
            isIconExist = false;
            break;
        }
        filePaths.append(exePath);
        iconPaths.append(iconPath);
    }
    // 只有图标资源存在才绘制图标

    DrawIcon(filePaths, iconPaths); // 调用函数绘制图标
    settings.endArray();
}

// 根据获取的文件名来过滤配置
void Backpack::FilterIcon(const QString &fileName)
{
    if(fileName != "")
    {
        QSettings settings("config2.ini", QSettings::IniFormat);
        int size = settings.beginReadArray("Paths");

        QStringList filePaths;
        QStringList iconPaths;
        for (long long i = 0; i < size; ++i)
        {
            settings.setArrayIndex(i);
            QString exePath = settings.value("ExePath").toString();
            QString iconPath = settings.value("IconPath").toString();

            // 检查资源是否存在且 exePath 是否与 fileName 匹配（忽略大小写）
            if (QFile::exists(iconPath) && exePath.contains(fileName, Qt::CaseInsensitive))
            {
                filePaths.append(exePath);
                iconPaths.append(iconPath);
            }
        }
        // 只有图标资源存在且与 fileName 匹配才绘制图标
        if (!filePaths.isEmpty() && !iconPaths.isEmpty())
        {

            DrawIcon(filePaths, iconPaths); // 调用函数绘制图标
        }
        else{
            // 如果没有匹配的就弹出提示框 启用提示
            notFoundMatchTips->StartTips(":/Image/errorTips.png","没有匹配的文件名!","〒▽〒",false);
        }
        settings.endArray();
    }
}

void Backpack::ClickStartQuery() // 点击query查询按钮后在ui->scrollAreaWidgetContents里面显示进度条
{
    // 使用模态框来提醒用户确认更新exe信息 如果true就更新
    QMessageBox msgBox;
    msgBox.setWindowTitle("提示!");
    msgBox.setInformativeText("请问是否要更新显示应用程序文件?\n注意这个过程至少需要5分钟，请不要关闭程序");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
    if (ret == QMessageBox::Ok)
    {
        // 禁止用户在查询的过程中使用搜索功能
        ui->lineEdit->setEnabled(false);
        ui->queryButton->setEnabled(false);
        // 注意! 再每次启动查询后都要清空之前的容器，否则崩溃
        if(!queryImgLabelVector.empty())
        {
            // 清空queryImgLabelVector容器
            qDeleteAll(queryImgLabelVector);
            queryImgLabelVector.clear();
        }

        // 清空现有的布局
        QLayoutItem *child;
        while ((child = ui->scrollAreaWidgetContents->layout()->takeAt(0)) != nullptr) {
            delete child->widget();
            delete child;
            child = nullptr;
        }

        // 创建进度条和标签 上一个从左到右滚动，下一个从右到左滚动
        for(qint8 i = 0;i < 16;i++)
        {
            QProgressBar *progressBar = new QProgressBar(ui->scrollAreaWidgetContents);
            progressBar->setRange(0, 0); // 设置为无限循环模式
            progressBar->setAlignment(Qt::AlignCenter);
            progressBar->setOrientation(Qt::Horizontal); // 水平方向
            if(!(i % 2))
            {
                progressBar->setInvertedAppearance(false); // 设置进度条流动方向
            }
            else
            {
                progressBar->setInvertedAppearance(true);
            }
            ui->scrollAreaWidgetContents->layout()->addWidget(progressBar);
        }

        updataQueryTips->StartTips(":/Image/health.png","正在更新查询信息!","此次查询可能需要几分钟,请稍后......");

        // 开始对目录进行搜索
        queryapp->start();

        // 向统计信息发送信号更新信息
        emit SignalManager::instance().updateQuery();
    }
    else if (ret == QMessageBox::Cancel)
    {
        // 用户点击了取消按钮
        // qDebug() << "Cancel changes";
    }

}

void Backpack::DrawIcon(const QStringList &filePaths, const QStringList &iconPaths)
{
    // 注意! 再每次启动查询后都要清空之前的容器，否则崩溃
    if(!queryImgLabelVector.empty())
    {
        // 清空queryImgLabelVector容器
        qDeleteAll(queryImgLabelVector);
        queryImgLabelVector.clear();
    }
    // 清空现有的布局
    QLayoutItem *child;
    while ((child = ui->scrollAreaWidgetContents->layout()->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
        child = nullptr;
    }
    // 计算需要创建的 widget 数量
    int numWidgets = (filePaths.size() + 4) / 5; // 每个 widget 最多放置 5 个 label
    // 如果大于当前布局的35个就增加
    numWidgets = (numWidgets > 35) ? numWidgets : 7;
    // 创建 widget 并设置水平布局
    for (int i = 0; i < numWidgets; ++i) {
        QWidget *widget = new QWidget(ui->scrollAreaWidgetContents);
        QHBoxLayout *hLayout = new QHBoxLayout(widget);
        widget->setLayout(hLayout);
        widget->layout()->setContentsMargins(0, 0, 0, 0);
        widget->setMinimumSize(QSize(340, 60));
        widget->setMaximumSize(QSize(340, 60));
        // 添加 frame 到水平布局中 frame
        for (int j = 0; j < 5; ++j) {
            QFrame *frame = new QFrame();
            frame->setMinimumSize(QSize(60, 60));
            frame->setMaximumSize(QSize(60, 60));
            if (i * 5 + j < filePaths.size()) {
                frame->setFrameStyle(QFrame::Box | QFrame::Raised);
                QString iconPath = iconPaths.at(i * 5 + j);
                if (!iconPath.isEmpty()) {
                    // 处理图标路径
                    QueryImgLabel *iconLabel = new QueryImgLabel(frame);
                    hLayout->addWidget(iconLabel);
                    // 设置样式
                    iconLabel->setIconAndFile(iconPath,filePaths.at(i * 5 + j));

                    for (qint8 i = 0; i < 9; i++) {
                        connect(iconLabel, &QueryImgLabel::imageClicked, [this, filePaths, iconPath, i, iconLabel]() {
                            objectframe[i]->ListeningIconPath(iconPath,iconLabel->getFilePath()); // 绑定信号 如果图片点击了就其他可以接受到
                        });
                    }
                    for (qint8 i = 0; i < 27; i++) {
                        connect(iconLabel, &QueryImgLabel::imageClicked, [this, filePaths, iconPath, i, iconLabel]() {
                            storageframe[i]->ListeningIconPath(iconPath,iconLabel->getFilePath()); // 绑定信号 如果图片点击了就其他可以接受到
                        });
                    }
                    connect(iconLabel,&QueryImgLabel::imageClicked,this,&Backpack::switchLabelState);

                    widget->setStyleSheet("background-color: rgb(0, 0, 0);"); // 黑色
                    queryImgLabelVector.append(iconLabel); // 保存图片标签
                    temporaryIconPaths.append(iconPath); // 保存临时图标文件路径
                }
                else {
                    hLayout->addWidget(frame);
                }
            }
            else {
                widget->setStyleSheet(""); // 没有图标的frame就不显示
                hLayout->addWidget(frame);
            }
        }
        // 将 widget 添加到垂直布局中
        ui->scrollAreaWidgetContents->layout()->addWidget(widget);
    }
}


void Backpack::switchLabelState(QueryImgLabel *clickedLabel){
    // 点击不同查询图片来切换点击状态

    for(auto &queryImgLabel : queryImgLabelVector)
    {
        queryImgLabel->setStyleSheet(QueryImgLabel::originalStyleSheet); // 正常样式
        if (clickedLabel == queryImgLabel) {
            queryImgLabel->setStyleSheet(QueryImgLabel::clickedStyleSheet); // 点击后的样式
        }
    }
}

void Backpack::resetState(){
    for(auto &queryImgLabel : queryImgLabelVector)
    {
        queryImgLabel->setStyleSheet(QueryImgLabel::originalStyleSheet); // 正常样式
    }
    for(auto &objectframe : objectframe)
    {
        // 先重置所有的路径，再加载这样防止queryframe可以多次放置
        objectframe->resetObjectFrame();
        objectframe->loadSettings();
    }
    for(auto &storageframe : storageframe)
    {
        // 先重置所有的路径，再加载这样防止queryframe可以多次放置
        storageframe->resetStorageFrame();
        storageframe->loadSettings();
    }
    QueryImgLabel::m_lastClickedLabel = nullptr; // 重置上次的点击对象置为空，防止点击objectframe后再点击queryframe样式不起作用
}

void Backpack::ResetObjectFrame(QWidget *ObjectSource)
{
    Objectframe *objectSource = qobject_cast<Objectframe*>(ObjectSource);
    if(objectSource) objectSource->ResetDragSource();

}

void Backpack::ResetStorageFrame(QWidget *StorageFrame){
    Storageframe *storageSource = qobject_cast<Storageframe*>(StorageFrame);
    if(storageSource) storageSource->ResetDragSource();
}

Backpack::~Backpack()
{
    if(queryapp)
    {
        delete queryapp;
        queryapp = nullptr;
    }
    if(!queryImgLabelVector.empty())
    {
        qDeleteAll(queryImgLabelVector);
        queryImgLabelVector.clear();
    }
    if(notFoundMatchTips)
    {
        delete notFoundMatchTips;
        notFoundMatchTips = nullptr;
    }
    if(updataQueryTips){
        delete updataQueryTips;
        updataQueryTips = nullptr;
    }
    delete ui;
}
