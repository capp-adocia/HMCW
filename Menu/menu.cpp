#include "Menu/menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Menu)
    , optionPage(new Option(this))
    , aboutPage(new About(this))
    , achievementPage(new Achievement(this))
    , recordPage(new Record(this))
    , suggestionPage(new Suggestion(this))
    , tellbugPage(new TellBug(this))
    // , mousePressed(false)
{
    ui->setupUi(this);
    this->installEventFilter(this);
    // 页面初始化
    //透明
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);

    this->setWindowTitle("菜单");

    // 添加窗口到pages里面
    pages.push_back(optionPage);
    pages.push_back(aboutPage);
    pages.push_back(achievementPage);
    pages.push_back(recordPage);
    pages.push_back(suggestionPage);
    pages.push_back(tellbugPage);
    // 添加按钮到buttons里面
    buttons.push_back(ui->optionButton);
    buttons.push_back(ui->aboutButton);
    buttons.push_back(ui->achievementButton);
    buttons.push_back(ui->recordButton);
    buttons.push_back(ui->suggestionButton);
    buttons.push_back(ui->tellBugButton);

    for (int i = 0; i < pages.size(); ++i)
    {
        QWidget* page = pages[i];
        QPushButton* button = buttons[i];
        // 添加功能窗口
        ui->stackedWidget->addWidget(page);
        // 连接功能窗口信号
        connect(button, &QPushButton::clicked, [this, page] {
            ui->stackedWidget->setCurrentWidget(page);
        });
    }

    // **** 连接signalManager的信号 发出信号 ****
    // 接受全局发送返回的信号
    connect(&SignalManager::instance(),&SignalManager::back,[=]{
        ui->stackedWidget->setCurrentIndex(0);
    });
    // 向全局发送保存的信号 保存不退出程序
    connect(ui->saveButton,&QPushButton::clicked,[this]{
        emit SignalManager::instance().saveSettings();
        emit closeMenu();// 向Bar发送关闭窗口信号
    });
    // 保存并退出程序
    connect(ui->exitButton,&QPushButton::clicked,[=]{
        emit SignalManager::instance().saveSettings();
        QCoreApplication::quit();
    });
    // **** 连接signalManager的信号 发出信号 ****
    // 按钮触碰点击样式
    QVector<QPushButton*> buttons;
    buttons<<ui->saveButton<<ui->optionButton<<ui->aboutButton<<ui->suggestionButton<<ui->tellBugButton<<ui->recordButton<<ui->achievementButton<<ui->exitButton;
    for(QPushButton* button:buttons)
    {
        button->setStyleSheet(
            "QPushButton{"
            "background-color: rgb(109, 109, 109);"
            "border-left:4px solid rgb(184, 184, 185);"
            "border-top:4px solid rgb(184, 184, 185);"
            "border-right:4px solid rgb(88, 88, 88);"
            "border-bottom:4px solid rgb(88, 88, 88);"
            "}"
            "QPushButton:hover{"
            "background-color: rgb(109, 109, 109);"
            "border:5px solid rgb(224, 226, 224);"
            "}"
            );
    }
    QString styleSheet = "QWidget#mainMenu{background-image: url(:/Image/soilBackground.png);}";
    ui->mainMenu->setStyleSheet(styleSheet);
}

void Menu::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Escape)
    {
        this->hide();
    }
}

// bool Menu::eventFilter(QObject *obj, QEvent *event)
// {
//     // 处理自定义窗口拖动逻辑
//     if(obj == this) {
//         switch (event->type()) {
//         case QEvent::MouseButtonPress: {

//             qDebug()<<"键盘按压了";
//             QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
//             QPoint pos = mouseEvent->pos();
//             QRect rect = this->rect();
//             // 检查鼠标是否在窗口的边框区域
//             if(pos.x() <= rect.left() + 30 || pos.x() >= rect.right() - 30 ||
//                 pos.y() <= rect.top() + 160 || pos.y() >= rect.bottom() - 30) {
//                 mousePressed = true;
//                 mousePressPos = pos;
//                 return true;
//             }
//             break;
//         }
//         case QEvent::MouseMove:
//             if (mousePressed) {
//                 int dx = static_cast<QMouseEvent*>(event)->pos().x() - mousePressPos.x();
//                 int dy = static_cast<QMouseEvent*>(event)->pos().y() - mousePressPos.y();
//                 move(x()+dx, y()+dy);
//                 return true;
//             }
//             break;
//         case QEvent::MouseButtonRelease:
//             mousePressed = false;
//             return true;
//         default:
//             break;
//         }
//     }
//     return QObject::eventFilter(obj, event);
// }


Menu::~Menu()
{
    delete ui;
}
