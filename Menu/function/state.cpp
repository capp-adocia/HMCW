#include "state.h"
#include "ui_state.h"

State::State(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::State)
{
    ui->setupUi(this);
    // 返回上一个页面 OptionPage
    connect(ui->backButton,&QPushButton::clicked,[]{
        emit SignalManager::instance().switchOption();
    });
}

State::~State()
{
    delete ui;
}
