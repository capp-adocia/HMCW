#include "Menu/function/suggestion.h"
#include "ui_suggestion.h"

Suggestion::Suggestion(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Suggestion)
{
    ui->setupUi(this);
    // 向全局发送返回信号
    connect(ui->backButton, &QPushButton::clicked,[]{
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
    ui->backButton->setStyleSheet(buttonStyleSheet);
    ui->BillboardUp->setStyleSheet("QWidget#BillboardUp{border-image:url(:/Image/BillboardUp.png);}");
    ui->BillboardDown->setStyleSheet("QWidget#BillboardDown{border-image:url(:/Image/BillboardDown.png);}");
    ui->textBrowser->setStyleSheet("QWidget#textBrowser{border-image:url(:/Image/TextBillboardUp.png);}");
    ui->backButton->setStyleSheet(buttonStyleSheet);

    // 链接跳转
    ui->textBrowser->setOpenExternalLinks(true);
    // 加载md文档
    ui->textBrowser->setSource(QUrl::fromLocalFile(":/Markdown/Suggest.md"));
    ui->BillboardUp->raise();
}

Suggestion::~Suggestion()
{
    delete ui;
}
