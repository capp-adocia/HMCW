#include "Rest/rest.h"
#include "ui_rest.h"

Rest::Rest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rest)
    , breakfastTimeTips(new Tips())
    , lunchTimeTips(new Tips())
    , dinnerTimeTips(new Tips())
    , stopBreakfastTips(new Tips())
    , stopLunchTips(new Tips())
    , stopDinnerTips(new Tips())
    , stopWorkTips(new Tips())
    , stopBreakTips(new Tips())
    , game_2048Page(new Game_2048(this))
    , isBreakfastTime(true)
    , isLunchTime(true)
    , isDinnerTime(true)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);

    this->setWindowTitle("放松中...");

    // 点击获取焦点
    setFocusPolicy(Qt::ClickFocus);

    connect(&SignalManager::instance(),&SignalManager::breakfastTime,[=]{
        breakfastTimeTips->StartTips(":/Image/empty_hungry.png","早餐到!","该吃早餐了");
    // 重置状态
        game_2048Page->resetGameState();
        this->show();
        // qDebug()<<"早餐到";
    });
    connect(&SignalManager::instance(),&SignalManager::lunchTime,[=]{
        lunchTimeTips->StartTips(":/Image/empty_hungry.png","午餐到!","该吃午餐了");
        game_2048Page->resetGameState();
        this->show();
        // qDebug()<<"午餐到";
    });
    connect(&SignalManager::instance(),&SignalManager::dinnerTime,[=]{
        dinnerTimeTips->StartTips(":/Image/empty_hungry.png","晚餐到!","该吃晚餐了");
        game_2048Page->resetGameState();
        this->show();
        // qDebug()<<"晚餐到";
    });
    connect(&SignalManager::instance(),&SignalManager::stopBreakfast,[=]{
        stopBreakfastTips->StartTips(":/Image/hungry.png","早餐结束了!","吃的美");
        this->close();
        // qDebug()<<"早餐结束了";
    });
    connect(&SignalManager::instance(),&SignalManager::stopLunch,[=]{
        stopLunchTips->StartTips(":/Image/hungry.png","午餐结束了!","肚子好圆呢");
        this->close();
        // qDebug()<<"午餐结束了";
    });
    connect(&SignalManager::instance(),&SignalManager::stopDinner,[=]{
        stopDinnerTips->StartTips(":/Image/hungry.png","晚餐结束了!","吃不下啦");
        this->close();
        // qDebug()<<"晚餐结束了";
    });
    connect(&SignalManager::instance(),&SignalManager::stopWork,[=]{
        stopWorkTips->StartTips(":/Image/empty_health.png","工作结束了!","开始休息吧");
        game_2048Page->resetGameState();
        this->show();
        // qDebug()<<"工作结束了 开始休息吧";
    });
    connect(&SignalManager::instance(),&SignalManager::stopBreak,[=]{
        stopBreakTips->StartTips(":/Image/health.png","休息结束了!","开始工作吧");
        this->close();
        // qDebug()<<"休息结束了 开始工作吧";
    });

    // 用户点击跳过按钮 关闭当前窗口
    connect(ui->skipButton,&QPushButton::clicked,[=]{
        // 更新统计信息中的跳过休息次数
        emit SignalManager::instance().updateSkipBreak();
        game_2048Page->resetGameState();
        this->hide();

        int currentTime = QTime::currentTime().hour() * 3600 + QTime::currentTime().minute() * 60 + QTime::currentTime().second();
        QSettings settings("config.ini", QSettings::IniFormat);
        settings.beginGroup("General");
        bool startOption = settings.value("startOption").toBool();

        if(startOption)
        {
            int breakfastStartTime = settings.value("breakfastSlider").toInt();
            int lunchStartTime = settings.value("lunchSlider").toInt();
            int dinnerStartTime = settings.value("dinnerSlider").toInt();
            int mealTime = settings.value("mealTimeSlider").toInt();

            /* 如果是吃饭时跳过 */
            // 如果当前时间处于吃饭的开始与吃饭结束之间，那么就发送信号更新状态
            if(currentTime > breakfastStartTime && currentTime < breakfastStartTime + mealTime && isBreakfastTime)
            {
                emit SignalManager::instance().stopBreakfast();
                // 停止进餐
                emit SignalManager::instance().SkipMeal("breakfast",true);
                // 重置饱食度状态
                emit SignalManager::instance().resetHungryState();
                isBreakfastTime = false;
            }
            else if(currentTime > lunchStartTime && currentTime < lunchStartTime + mealTime && isLunchTime)
            {
                emit SignalManager::instance().stopLunch();
                emit SignalManager::instance().SkipMeal("lunch",true);
                // 重置饱食度状态
                emit SignalManager::instance().resetHungryState();
                isLunchTime = false;
            }
            else if(currentTime > dinnerStartTime && currentTime < dinnerStartTime + mealTime && isDinnerTime)
            {
                emit SignalManager::instance().stopDinner();
                emit SignalManager::instance().SkipMeal("dinner",true);
                // 重置饱食度状态
                emit SignalManager::instance().resetHungryState();
                isDinnerTime = false;
            }
            /* 休息跳过 */
            // 如果是到休息时间了，但用户点击了跳过 那么就切换到工作状态，重置爱心图片
            else
            {
                emit SignalManager::instance().SkipBreak(true);
                emit SignalManager::instance().resetHeartState();
            }
        }
        settings.endGroup();

    });
    ui->RestStackedWidget->addWidget(game_2048Page);
    // ui->RestStackedWidget->setCurrentWidget(ui->rest01);
    // ui->RestStackedWidget->setCurrentWidget(game_2048Page);
    // 用户点击游戏中的按钮 跳转到对应页面
    connect(ui->game_2048,&QPushButton::clicked,[=]{
        ui->RestStackedWidget->setCurrentWidget(game_2048Page);
    });
    // 切换到放松身体窗口，待开发
    connect(ui->pushButton,&QPushButton::clicked,[=]{
        ui->RestStackedWidget->setCurrentWidget(ui->rest01);
    });

    ui->widget->setStyleSheet("QWidget#widget{background-image: url(:/Image/soilBackground.png);}");
    ui->amusement->setStyleSheet("QWidget#amusement{background-image: url(:/Image/rockBackground.png);}");
    ui->label->setStyleSheet("QLabel#label{background-image: url(:/Image/rockBackground.png);}");
    ui->relaxBody->setStyleSheet("QWidget#relaxBody{background-image: url(:/Image/rockBackground.png);}");

    QString ButtonStyleSheet = ("QPushButton{"
    "color: rgb(255, 255, 255);"
    "background-color: rgb(109, 109, 109);"
    "border-left:4px solid rgb(184, 184, 185);"
    "border-top:4px solid rgb(184, 184, 185);"
    "border-right:4px solid rgb(88, 88, 88);"
    "border-bottom:4px solid rgb(88, 88, 88);"
    "}"
    "QPushButton:hover{"
    "color: rgb(255, 255, 255);"
    "background-color: rgb(109, 109, 109);"
    "border:5px solid rgb(224, 226, 224);"
                                 "}");
    ui->skipButton->setStyleSheet(ButtonStyleSheet);
    ui->game_2048->setStyleSheet(ButtonStyleSheet);
    ui->pushButton->setStyleSheet(ButtonStyleSheet);

    // this->show();
}


Rest::~Rest()
{
    if(breakfastTimeTips) delete breakfastTimeTips;
    if(lunchTimeTips) delete lunchTimeTips;
    if(dinnerTimeTips) delete dinnerTimeTips;
    if(stopBreakfastTips) delete stopBreakfastTips;
    if(stopLunchTips) delete stopLunchTips;
    if(stopDinnerTips) delete stopDinnerTips;
    if(stopWorkTips) delete stopWorkTips;
    if(stopBreakTips) delete stopBreakTips;

    delete ui;
}
