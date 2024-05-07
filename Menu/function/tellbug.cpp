#include "Menu/function/tellbug.h"
#include "ui_tellbug.h"

TellBug::TellBug(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TellBug)
    , tip(new Tips())
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

    ui->widget_3->setStyleSheet("QWidget#widget_3{border-image:url(:/Image/BillboardUp.png);}");

    ui->submitButton->setStyleSheet(buttonStyleSheet);
    ui->BillboardUp->raise();
    ui->nameEdit->setStyleSheet("QWidget#nameEdit{border-image:url(:/Image/TextBillboardUp.png);}");
    ui->mailEdit->setStyleSheet("QWidget#mailEdit{border-image:url(:/Image/TextBillboardUp.png);}");
    ui->comboBox->setStyleSheet("QWidget#comboBox{border-image:url(:/Image/TextBillboardUp.png);}");
    ui->plainTextEdit->setStyleSheet("QWidget#plainTextEdit{border-image:url(:/Image/TextRockBackground.png);}");

    // 点击提交按钮时发送邮件
    connect(ui->submitButton, &QPushButton::clicked, [this]() {
        tip->StartTips(":/Image/errorTips.png","提示!","此处功能还未完善,请等待更新");
    });
}

TellBug::~TellBug()
{
    if(tip)
    {
        delete tip;
        tip = nullptr;
    }
    delete ui;
}
