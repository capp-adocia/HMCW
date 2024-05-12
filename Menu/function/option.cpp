#include "Menu/function/option.h"
#include "ui_option.h"

Option::Option(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Option)
    , timer(new QTimer(this))
    , m_breakfastSignalSent(false)
    , m_lunchSignalSent(false)
    , m_dinnerSignalSent(false)
    , is_mealing(false)
    , is_recordWorkStart(false)
    , is_break(false)
    , is_recordBreakStart(false)
    , is_UpdateBreakfaskHungryImg(false)
    , is_UpdateLunchHungryImg(false)
    , is_UpdateDinnerHungryImg(false)
    , isSendUpdate(false)
    , isSavePreCurrentTime(false)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    // 初始化样式
    ui->backButton->setStyleSheet("QPushButton{"
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

    ui->widget_5->setStyleSheet("QWidget#widget_5{background-image:url(:/Image/soilBackground.png);}");

    // 初始化读取数据
    Init();

    // 不保存返回主菜单
    // 向全局发送返回信号
    connect(ui->backButton, &QPushButton::clicked,[=]{
        SignalManager::instance().emit back();
    });
    // 接受全局的保存信号才完成保存
    connect(&SignalManager::instance(), &SignalManager::saveSettings, this, &Option::Save);

    // 连接信号 定时检查当前时间 定时器
    connect(timer, &QTimer::timeout, this, &Option::checkTime);

    // 是否启用定时提醒休息功能
    connect(ui->startCheckBox, SIGNAL(stateChanged(int)), this, SLOT(StartOption(int)));
    connect(this,&Option::start,[=](int isStart){
        if(isStart)
            {
            timer->start(1000); // 每秒触发一次
            PreCurrentTime = QTime::currentTime();
            // 程序第一次启动时存储一次
            if(!isSavePreCurrentTime)
            {
                QSettings settings("config.ini",QSettings::IniFormat);
                settings.beginGroup("General");
                settings.setValue("PreCurrentTime",QTime::currentTime());
                settings.endGroup();
                isSavePreCurrentTime = true;
            }
        }
        else{
            timer->stop();
        }
    });

    // 吃饭时跳过
    connect(&SignalManager::instance(), &SignalManager::SkipMeal, this, &Option::SkipOrStopMeal);
    // 休息时跳过
    connect(&SignalManager::instance(), &SignalManager::SkipBreak, this ,&Option::SkipBreak);
}

void Option::Init()
{
    // 创建映射
    sliderLabelMap[ui->breakfastSlider] = ui->breakfastLabel;
    sliderLabelMap[ui->lunchSlider] = ui->lunchLabel;
    sliderLabelMap[ui->mealTimeSlider] = ui->mealTimeLabel;
    sliderLabelMap[ui->dinnerSlider] = ui->dinnerLabel;
    sliderLabelMap[ui->workTimeSlider] = ui->workTimeLabel;
    sliderLabelMap[ui->breakTimeSlider] = ui->breakTimeLabel;

    // 创建 QSettings 对象
    QSettings settings("config.ini", QSettings::IniFormat);
    // 从 INI 文件中读取设置并设置到界面控件
    settings.beginGroup("General");
    for(auto it = sliderLabelMap.begin();it != sliderLabelMap.end();it++)
    {
        // 读取设置
        it.key()->setValue(settings.value(it.key()->objectName(), it.key()->value()).toInt());
        // 设置标签里的值
        it.value()->setText(getLabelTime(it.key()).first.toString("hh:mm:ss"));
        connect(it.key(),&QSlider::valueChanged,[this, it]{
            // 监听QSlider的变化
            it.value()->setText(getLabelTime(it.key()).first.toString("hh:mm:ss"));
        });
    }
    // 读取并设置 startOption
    if (!settings.contains("startOption")) {
        // 如果 "startOption" 不存在，则创建一个默认值
        settings.setValue("startOption", false);
    }
    bool startOption = settings.value("startOption").toBool();
    ui->startCheckBox->setChecked(startOption);
    StartOption(startOption);
    // 判断是否启动
    startOption ? (timer->start(1000)) : (timer->stop());

    settings.endGroup();
}

void Option::Save()
{
    // 创建 QSettings 对象
    QSettings settings("config.ini", QSettings::IniFormat);
    // 保存使用当前设置
    settings.beginGroup("General");
    for(auto it = sliderLabelMap.begin();it != sliderLabelMap.end();it++)
    {
        settings.setValue(it.key()->objectName(), it.key()->value());
    }
    settings.endGroup();

    this->close();
}

// 返回单个时间值 或 返回一对时间值
std::pair<QTime, QTime> Option::getLabelTime(QSlider *Slider, bool returnPair)
{
    QTime startTime = QTime(0, 0, 0).addSecs(Slider->value());
    if (returnPair)
    {
        QTime maxTime = QTime(0, 0, 0).addSecs(Slider->maximum());
        return std::make_pair(startTime, maxTime);
    }
    // 返回单个时间
    return std::make_pair(startTime, QTime()); // 仅访问第一个值
}

void Option::checkTime()
{    // 检查是否达到预定时间
    QTime currentTime = QTime::currentTime(); // 将秒数转换为 QTime 对象
    // 先读取
    QSettings settings("config.ini",QSettings::IniFormat);
    settings.beginGroup("General");
    PreCurrentTime = settings.value("PreCurrentTime").toTime();
    settings.endGroup();
    // 如果用户从休眠状态时激活
    if(PreCurrentTime.secsTo(currentTime) > 2)
    {
        timer->stop();
        timer->start(1000);
        PreCurrentTime = currentTime;
        // 保存
        QSettings settings("config.ini",QSettings::IniFormat);
        settings.beginGroup("General");
        settings.setValue("PreCurrentTime",PreCurrentTime);
        settings.endGroup();
        return;
    }

    // 保存
    settings.beginGroup("General");
    settings.setValue("PreCurrentTime",currentTime);
    settings.endGroup();
    PreCurrentTime = currentTime;

    QTime workTime = getLabelTime(ui->workTimeSlider).first;
    QTime breakTime = getLabelTime(ui->breakTimeSlider).first;
    quint32 currentSec = currentTime.hour()*3600+currentTime.minute()*60+currentTime.second();

    // 检查当前时间是否在用户设置的早餐时间范围内
    if (currentTime >= getLabelTime(ui->breakfastSlider,true).first && currentTime <= getLabelTime(ui->breakfastSlider,true).second) {
        // 如果之前没有发送过早餐信号
        if (!m_breakfastSignalSent)
        {
            // 发出早餐时间信号
            emit SignalManager::instance().breakfastTime();
            // 给Bar发送信号 增加饱食度 传递进食时长为参数
            QTime eatingTime = QTime(0, 0, 0).addSecs(ui->mealTimeSlider->value());
            emit SignalManager::instance().HungryRemoveState(eatingTime);
            is_UpdateBreakfaskHungryImg = false;
            m_breakfastSignalSent = true;// 标记已发送过早餐信号
            is_mealing = true;// 正在吃饭 这个用来判断是否可以开始工作了
            this->currentTimeSec = currentSec;// 记录刚开始行为的时间
            emit SignalManager::instance().updateAllEating(); // 向统计信息更新进餐总次数
            emit SignalManager::instance().updateBreakFast(); // 更新统计信息里的早餐次数
            emit SignalManager::instance().SendStartTimeSec(currentSec); // 发送当前启动秒数
        }
        // 发送行为结束信号 如果当前时间 >= 开始时间 + 行为时间 则结束时间
        if (currentSec >= this->currentTimeSec + ui->mealTimeSlider->value())
        {
            SkipOrStopMeal("breakfast");
        }
    }
    else
    {
        // 如果当前时间不在早餐时间范围内,重置标记
        m_breakfastSignalSent = false;
        is_UpdateLunchHungryImg = false;
    }
    //检查当前时间是否在用户设置的午餐时间范围内
    if (currentTime >= getLabelTime(ui->lunchSlider,true).first && currentTime <= getLabelTime(ui->lunchSlider,true).second)
    {
        // 如果之前没有发送过早餐信号
        if (!m_lunchSignalSent) {
            emit SignalManager::instance().lunchTime();
            // 给Bar发送信号 增加饱食度 传递进食时长为参数
            QTime eatingTime = QTime(0, 0, 0).addSecs(ui->mealTimeSlider->value());
            emit SignalManager::instance().HungryRemoveState(eatingTime);
            is_UpdateLunchHungryImg = false;
            m_lunchSignalSent = true;
            is_mealing = true;
            this->currentTimeSec = currentSec;// 记录刚开始行为的时间
            emit SignalManager::instance().updateAllEating();
            emit SignalManager::instance().updateLunch(); // 更新统计信息里的午餐次数
            emit SignalManager::instance().SendStartTimeSec(currentSec); // 发送当前启动秒数
        }
        // 发送行为结束信号 如果当前时间 >= 开始时间 + 行为时间 则结束时间
        if (currentSec >= this->currentTimeSec + ui->mealTimeSlider->value())
        {
            SkipOrStopMeal("lunch");
        }
    }
    else
    {
        // 重置标记
        m_lunchSignalSent = false;
        is_UpdateLunchHungryImg = false;
    }

    //检查当前时间是否在用户设置的晚餐餐时间范围内
    if (currentTime >= getLabelTime(ui->dinnerSlider,true).first && currentTime <= getLabelTime(ui->dinnerSlider,true).second) {
        // 如果之前没有发送过早餐信号
        if (!m_dinnerSignalSent) {
            emit SignalManager::instance().dinnerTime();
            // 给Bar发送信号 增加饱食度 传递进食时长为参数
            QTime eatingTime = QTime(0, 0, 0).addSecs(ui->mealTimeSlider->value());
            emit SignalManager::instance().HungryRemoveState(eatingTime);
            is_UpdateDinnerHungryImg = false;
            m_dinnerSignalSent = true;
            is_mealing = true;
            this->currentTimeSec = currentSec;// 记录刚开始行为的时间
            emit SignalManager::instance().updateAllEating();
            emit SignalManager::instance().updateDinner(); // 更新统计信息里的晚餐次数
            emit SignalManager::instance().SendStartTimeSec(currentSec); // 发送当前启动秒数

        }
        // 发送行为结束信号 如果当前时间 >= 开始时间 + 吃饭行为时间 则结束时间
        if (currentSec >= this->currentTimeSec+ui->mealTimeSlider->value())
        {
            SkipOrStopMeal("dinner");
        }
    }
    else
    {
        // 重置标记
        m_dinnerSignalSent = false;
        is_UpdateDinnerHungryImg = false;
    }

    // 如果没有吃饭和没有休息 就开始工作
    if(!is_mealing && !is_break)
    {
        if(!is_recordWorkStart)
        {
            this->currentTime = currentTime; // 记录刚开始行为的时间
            is_recordWorkStart = true;
            // 给Bar发送信号 减少爱心图像
            emit SignalManager::instance().workingUpdataHealth(workTime);
            emit SignalManager::instance().updateWorking(); // 向统计信息更新工作次数
            emit SignalManager::instance().SendStartTimeSec(currentSec); // 发送当前启动秒数
        }
        // 根据开始时间和工作时间判断是否继续工作
        if (currentTime >= (this->currentTime.addSecs(workTime.hour() * 3600 + workTime.minute() * 60 + workTime.second()))) {
               // 如果当前时间超过开始时间加上工作时间,则停止工作
               emit SignalManager::instance().stopWork();
               is_break = true; // 重置标志
               is_recordWorkStart = false; // 重置记录工作开始状态
        }
    }
    // 如果工作结束 就开启休息
    if(is_break)
    {
        if(!is_recordBreakStart)
        {
            this->currentTime = currentTime;
            is_recordBreakStart = true;// 记录成功
            // 给Bar发送信号 增加爱心图像
            emit SignalManager::instance().breakingUpdataHealth(breakTime);
            emit SignalManager::instance().updateBreak(); // 向统计信息更新休息次数
        }
        // 根据开始时间和休息时间判断是否继续休息
        if (currentTime >= (this->currentTime.addSecs(breakTime.hour() * 3600 + breakTime.minute() * 60 + breakTime.second()))) {
            // 如果当前时间超过开始时间加上休息时间,则停止休息
            SkipBreak();
        }
    }
    else
    {
        isSendUpdate = false; // 重置信号
    }
}

void Option::StartOption(int state)
{
    // 指定 INI 文件的路径和名称
    QString iniFilePath = "config.ini";
    // 创建 QSettings 对象
    QSettings settings(iniFilePath, QSettings::IniFormat);
    // 从 INI 文件中读取设置并设置到界面控件
    settings.beginGroup("General");
    if(!state)
    {
        ui->breakfastSlider->setEnabled(false);
        ui->lunchSlider->setEnabled(false);
        ui->dinnerSlider->setEnabled(false);
        ui->mealTimeSlider->setEnabled(false);
        ui->workTimeSlider->setEnabled(false);
        ui->breakTimeSlider->setEnabled(false);
        settings.setValue("startOption",false);
        emit start(false); // 发送一个信号用来告诉option不要启用定时提醒功能
    }
    else
    {
        ui->breakfastSlider->setEnabled(true);
        ui->lunchSlider->setEnabled(true);
        ui->dinnerSlider->setEnabled(true);
        ui->mealTimeSlider->setEnabled(true);
        ui->workTimeSlider->setEnabled(true);
        ui->breakTimeSlider->setEnabled(true);
        settings.setValue("startOption",true);
        emit start(true); // 启用定时提醒功能
    }
    settings.endGroup();
}

void Option::SkipOrStopMeal(const QString& mealCategory, bool isSkip)
{
    if(mealCategory == "breakfast")
    {
        if(!is_UpdateBreakfaskHungryImg && is_mealing)
        {
            emit SignalManager::instance().stopBreakfast();
            is_mealing = false;
            // 给Bar发送信号 减少饱食度 传递距离下次吃饭的时长为参数
            QTime intervalTime = QTime(0, 0, 0).addSecs(ui->lunchSlider->value() - this->currentTimeSec + ui->mealTimeSlider->value());
            emit SignalManager::instance().HungryState(intervalTime);
            is_UpdateBreakfaskHungryImg = true;
        }
    }
    else if(mealCategory == "lunch")
    {
        if(!is_UpdateLunchHungryImg && is_mealing)
        {
            emit SignalManager::instance().stopLunch();
            is_mealing = false;
            // 给Bar发送信号 减少饱食度 传递距离下次吃饭的时长为参数
            QTime intervalTime = QTime(0, 0, 0).addSecs(ui->dinnerSlider->value() - this->currentTimeSec + ui->mealTimeSlider->value());
            emit SignalManager::instance().HungryState(intervalTime);
            is_UpdateLunchHungryImg = true;
        }
    }
    else if(mealCategory == "dinner")
    {
        if((!is_UpdateDinnerHungryImg && is_mealing) || isSkip)
        {
            emit SignalManager::instance().stopDinner();
            is_mealing = false;
            // 给Bar发送信号 减少饱食度 传递距离下次吃饭的时长为参数  时间间隔 = 24小时秒数 - 当前秒数 + 早餐秒数
            QTime intervalTime = QTime(0, 0, 0).addSecs(86399 - (this->currentTimeSec + ui->mealTimeSlider->value()) + (ui->breakfastSlider->value()));
            emit SignalManager::instance().HungryState(intervalTime);
            is_UpdateDinnerHungryImg = true;
        }
    }
    if(!isSkip)
    {
        emit SignalManager::instance().upDateLevel();
    }
}

void Option::SkipBreak(bool isSkip)
{
    emit SignalManager::instance().stopBreak();
    is_break = false;
    is_recordBreakStart = false;
    // 如果不是跳过休息发的信号，就更新经验条
    if(!isSkip)
    {
        // 发送更新经验条等级图片信号
        if(!isSendUpdate)
        {
            emit SignalManager::instance().upDateLevel();
            isSendUpdate = true;
        }
    }
}

Option::~Option()
{
    delete ui;
}
