#include "Menu/function/about.h"
#include "ui_about.h"

bool About::isShowLargeScreen = false;

About::About(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::About)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    // 向全局发送返回信号
    connect(ui->backButton,&QPushButton::clicked,[]{
        emit SignalManager::instance().back();
    });

    QString buttonStyleSheet = "QPushButton{"
                               "color:white;"
                               "background-color: rgb(109, 109, 109);"
                               "border-left:4px solid rgb(184, 184, 185);"
                               "border-top:4px solid rgb(184, 184, 185);"
                               "border-right:4px solid rgb(88, 88, 88);"
                               "border-bottom:4px solid rgb(88, 88, 88);"
                               "}"
                               "QPushButton:hover{"
                               "color:white;"
                               "background-color: rgb(109, 109, 109);"
                               "border:5px solid rgb(224, 226, 224);"
                               "}";
    ui->widget->setStyleSheet("QWidget#widget{background-image:url(:/Image/soilBackground.png);}");
    ui->BillboardUp->setStyleSheet("QWidget#BillboardUp{border-image:url(:/Image/BillboardUp.png);}");
    ui->BillboardDown->setStyleSheet("QWidget#BillboardDown{border-image:url(:/Image/BillboardDown.png);}");
    ui->textBrowser->setStyleSheet("QWidget#textBrowser{border-image:url(:/Image/TextBillboardUp.png);}");
    ui->backButton->setStyleSheet(buttonStyleSheet);
    ui->LargeScreendisplayButton->setStyleSheet(buttonStyleSheet);

    // 链接跳转
    ui->textBrowser->setOpenExternalLinks(true);
    // 加载md文档
    ui->textBrowser->setSource(QUrl::fromLocalFile(":/Markdown/About.md"));

    ui->BillboardUp->raise();

    connect(ui->LargeScreendisplayButton, &QPushButton::clicked, [=]{
        // 大屏显示
        if(!isShowLargeScreen)
        {
            isShowLargeScreen = true;
            ui->LargeScreendisplayButton->setText("小屏显示");
            ui->backButton->setFixedWidth(60);
            ui->backButton->setText("完\n成");
            ui->widget_2->setFixedSize(720, 660);
            ui->BillboardUp->setFixedSize(700, 640);
        }
        // 恢复
        else
        {
            isShowLargeScreen = false;
            ui->LargeScreendisplayButton->setText("大屏显示");
            ui->backButton->setFixedSize(100,60);
            ui->backButton->setText("完成");
            ui->widget_2->setFixedSize(600, 577);
            ui->BillboardUp->setFixedSize(600, 287);
        }
    });

}

About::~About()
{
    delete ui;
}
