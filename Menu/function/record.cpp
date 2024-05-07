#include "Menu/function/record.h"
#include "ui_record.h"

Record::Record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Record)
    , settings("config.ini", QSettings::IniFormat)
    , UseTime(0)
    , QueryUpdataCount(0)
    , ResearchCount(0)
    , LaunchAppCount(0)
    , AllEatingCount(0)
    , BreakFastCount(0)
    , LunchCount(0)
    , DinnerCount(0)
    , WorkingCount(0)
    , BreakCount(0)
    , SkipBreakCount(0)
{
    ui->setupUi(this);

    // 设置整体样式表，包括多个部件的样式
    QString styleSheet = "QWidget#stackedWidget{background-image: url(:/Image/soilBackground.png);}"
                         "QWidget#scrollArea{background-image: url(:/Image/soilBackground.png);}"
                         "QWidget#scrollArea_2{background-image: url(:/Image/soilBackground.png);}"
                         "QWidget#widget{background-image: url(:/Image/soilBackground.png);}"
                         "QWidget#label_3{background-image: url(:/Image/soilBackground.png);}";

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
    this->setStyleSheet(styleSheet);
    ui->backButton->setStyleSheet(buttonStyleSheet);
    ui->generalRecordButton->setStyleSheet(buttonStyleSheet);
    ui->controlBreakRecordButton->setStyleSheet(buttonStyleSheet);

    // 向全局发送返回信号
    connect(ui->backButton, &QPushButton::clicked,[]{
        emit SignalManager::instance().back();
    });
    // 设置点击不同按钮来切换不同统计信息
    // 1.通用统计信息
    connect(ui->generalRecordButton,&QPushButton::clicked,[=]{
        ui->stackedWidget->setCurrentWidget(ui->generalRecordWidget);
    });
    // 2.控制休息统计信息
    connect(ui->controlBreakRecordButton,&QPushButton::clicked,[=]{
        ui->stackedWidget->setCurrentWidget(ui->controlBreakRecordWidget);

    });

    updateTimer = new QTimer(this);

    /* 通用统计信息 */
    // 更新当前时间
    connect(updateTimer, &QTimer::timeout, this, &::Record::updateRunningTime);
    updateTimer->start(1000); // 每更新一次
    // 更新查询次数
    connect(&SignalManager::instance(),&SignalManager::updateQuery,this,&Record::updateQueryCount);
    // 更新搜索次数
    connect(&SignalManager::instance(),&SignalManager::updateResearch,this,&Record::updateResearchCount);
    // 更新启动程序次数
    connect(&SignalManager::instance(),&SignalManager::updateLaunchApp,this,&::Record::updateLaunchAppCount);


    /* 控制休息统计信息 */
    // 更新进餐总次数
    connect(&SignalManager::instance(),&SignalManager::updateAllEating,this,&::Record::updateAllEatingCount);

    // 更新早餐次数
    connect(&SignalManager::instance(),&SignalManager::updateBreakFast,this,&::Record::updateBreakFastCount);
    // 更新午餐次数
    connect(&SignalManager::instance(),&SignalManager::updateLunch,this,&::Record::updateLunchCount);
    // 更新晚餐次数
    connect(&SignalManager::instance(),&SignalManager::updateDinner,this,&::Record::updateDinnerCount);

    // 更新工作次数
    connect(&SignalManager::instance(),&SignalManager::updateWorking,this,&::Record::updateWorkingCount);
    // 更新休息次数
    connect(&SignalManager::instance(),&SignalManager::updateBreak,this,&::Record::updateBreakCount);
    // 更新跳过休息次数
    connect(&SignalManager::instance(),&SignalManager::updateSkipBreak,this,&::Record::updateSkipBreakCount);

    // 初始化绘制
    InitDrawLabel();

}

void Record::InitDrawLabel()
{
    // 通用标签信息
    // 创建一个栅格布局管理器
    QGridLayout *gridLayout = new QGridLayout(ui->scrollAreaWidgetContents);
    // 从配置里面读取对应数据
    UseTime = settings.value("Achievement/UseTime", 0).toLongLong();
    QueryUpdataCount = settings.value("Achievement/QueryUpdataCount",0).toLongLong();
    ResearchCount = settings.value("Achievement/ResearchCount",0).toLongLong();
    LaunchAppCount = settings.value("Achievement/LaunchAppCount",0).toLongLong();

    // 标签文字和数字变量
    QStringList labels = {"程序运行时长","查询更新次数","搜索次数","应用程序启动次数"};
     /* 存储的是数字类型的变量 */
    QList<long long> GeneralUnits = {UseTime, QueryUpdataCount , ResearchCount, LaunchAppCount};

    for (int i = 0; i < labels.size(); ++i) {
        QLabel *label = new QLabel(labels[i]);
        QLabel *unitLabel = nullptr;

        if (i == 0) {
            long long totalSeconds = GeneralUnits[i];
            int days = totalSeconds / (3600 * 24);
            int hours = (totalSeconds % (3600 * 24)) / 3600;
            int minutes = (totalSeconds % 3600) / 60;
            int seconds = totalSeconds % 60;

            // 构建使用时长字符串
            QString usageTime = QString("%1天 %2时 %3分 %4秒").arg(days).arg(hours, 2, 10, QChar('0'))
                                    .arg(minutes, 2, 10, QChar('0')).arg(seconds, 2, 10, QChar('0'));

            unitLabel = new QLabel(usageTime); // 将数字类型转换为字符串类型
        }
        else{
            unitLabel = new QLabel(QString::number(GeneralUnits[i])); // 将数字类型转换为字符串类型
        }
        // 颜色交替出现
        if(!(i % 2))
        {
            label->setStyleSheet("background-color:rgba(0,0,0,0);color:white;border:0;");
            unitLabel->setStyleSheet("background-color:rgba(0,0,0,0);color:white;border:0;");
        }
        else
        {
            label->setStyleSheet("background-color:rgba(0,0,0,0);color:rgba(255,255,255,0.6);border:0;");
            unitLabel->setStyleSheet("background-color:rgba(0,0,0,0);color:rgba(255,255,255,0.6);border:0;");
        }
        // 设置字体大小
        label->setFont(QFont("Arial", 18));
        unitLabel->setFont(QFont("Arial", 18));

        label->setFixedHeight(40);
        unitLabel->setFixedHeight(40);

        gridLayout->addWidget(label, i, 0); // 左边的描述标签
        gridLayout->addWidget(unitLabel, i, 1, Qt::AlignRight); // 右边的数值标签

        unitLabelVector.append(unitLabel);
    }

    // 将栅格布局添加到父布局中
    ui->scrollAreaWidgetContents->setLayout(gridLayout);


    // 创建一个栅格布局管理器
    QGridLayout *gridLayout2 = new QGridLayout(ui->scrollAreaWidgetContents_2);
    // 从配置里面读取对应数据
    AllEatingCount = settings.value("Achievement/AllEatingCount",0).toLongLong();
    BreakFastCount = settings.value("Achievement/BreakFastCount",0).toLongLong();
    LunchCount = settings.value("Achievement/LunchCount",0).toLongLong();
    DinnerCount = settings.value("Achievement/DinnerCount",0).toLongLong();

    WorkingCount = settings.value("Achievement/WorkingCount",0).toLongLong();
    BreakCount = settings.value("Achievement/BreakCount",0).toLongLong();
    SkipBreakCount = settings.value("Achievement/SkipBreakCount",0).toLongLong();

    // 标签文字和数字变量
    QStringList Breaklabels = {"进餐总次数","早餐次数","午餐次数","晚餐次数","工作次数","休息次数","跳过休息次数"};
    /* 存储的是数字类型的变量 */
    QList<long long> ControlBreakUnits = {AllEatingCount,BreakFastCount,LunchCount,DinnerCount,WorkingCount,BreakCount,SkipBreakCount};

    for (int i = 0; i < Breaklabels.size(); ++i) {
        QLabel *label = new QLabel(Breaklabels[i]);
        QLabel *unitLabel = nullptr;

        unitLabel = new QLabel(QString::number(ControlBreakUnits[i])); // 将数字类型转换为字符串类型
        // 颜色交替出现
        if(!(i % 2))
        {
            label->setStyleSheet("background-color:rgba(0,0,0,0);color:white;border:0;");
            unitLabel->setStyleSheet("background-color:rgba(0,0,0,0);color:white;border:0;");
        }
        else
        {
            label->setStyleSheet("background-color:rgba(0,0,0,0);color:rgba(255,255,255,0.6);border:0;");
            unitLabel->setStyleSheet("background-color:rgba(0,0,0,0);color:rgba(255,255,255,0.6);border:0;");
        }
        // 设置字体大小
        label->setFont(QFont("Arial", 18));
        unitLabel->setFont(QFont("Arial", 18));

        label->setFixedHeight(40);
        unitLabel->setFixedHeight(40);

        gridLayout2->addWidget(label, i, 0); // 左边的描述标签
        gridLayout2->addWidget(unitLabel, i, 1, Qt::AlignRight); // 右边的数值标签

        ControlBreakaLabelVector.append(unitLabel);
    }

    // 将栅格布局添加到父布局中
    ui->scrollAreaWidgetContents_2->setLayout(gridLayout2);
}

/* 通用 */

void Record::updateRunningTime()
{
    UseTime += 1; // 将当前运行时长累加到总时长中
    // 更新时间标签
    int days = UseTime / (3600 * 24);
    int hours = (UseTime % (3600 * 24)) / 3600;
    int minutes = (UseTime % 3600) / 60;
    int seconds = UseTime % 60;

    // 构建使用时长字符串
    QString usageTime = QString("%1天 %2时 %3分 %4秒").arg(days).arg(hours, 2, 10, QChar('0'))
                            .arg(minutes, 2, 10, QChar('0')).arg(seconds, 2, 10, QChar('0'));

    // 找到时间标签并更新文本
    if (unitLabelVector[0]) {
        unitLabelVector[0]->setText(usageTime);
    }

    settings.beginGroup("Achievement");
    settings.setValue("UseTime",UseTime);
    settings.endGroup();

    // 向achievement类发送成就达成信号
    switch(UseTime)
    {
    case 3600:
        emit SignalManager::instance().AchievementFinshed("MarathonRunner");
        break;
    case 86400:
        emit SignalManager::instance().AchievementFinshed("TimeTraveler");
        break;
    case 604800:
        emit SignalManager::instance().AchievementFinshed("DedicatedUser");
        break;
    case 2397600:
        emit SignalManager::instance().AchievementFinshed("GoldUser");
        break;
    default:
        break;
    }

}

void Record::updateQueryCount()
{
    unitLabelVector[1]->setText(QString::number(++QueryUpdataCount));
    settings.setValue("Achievement/QueryUpdataCount",QueryUpdataCount);
    switch(QueryUpdataCount)
    {
        case 5:
        emit SignalManager::instance().AchievementFinshed("InfoExpert");
            break;
        case 20:
        emit SignalManager::instance().AchievementFinshed("InfoExplosion");
            break;
        case 100:
        emit SignalManager::instance().AchievementFinshed("InfoNinja");
            break;
        default:
            break;
    }
}

void Record::updateResearchCount()
{
    unitLabelVector[2]->setText(QString::number(++ResearchCount));
    settings.setValue("Achievement/ResearchCount",ResearchCount);
    switch(ResearchCount)
    {
    case 20:
        emit SignalManager::instance().AchievementFinshed("SearchDetective");
        break;
    case 200:
        emit SignalManager::instance().AchievementFinshed("SearchMaster");
        break;
    case 500:
        emit SignalManager::instance().AchievementFinshed("SearchWitcher");
        break;
    case 2000:
        emit SignalManager::instance().AchievementFinshed("SearchVictor");
        break;
    default:
        break;
    }
}

void Record::updateLaunchAppCount()
{
    unitLabelVector[3]->setText(QString::number(++LaunchAppCount));
    settings.setValue("Achievement/LaunchAppCount",LaunchAppCount);
    switch(LaunchAppCount)
    {
    case 20:
        emit SignalManager::instance().AchievementFinshed("LaunchFans");
        break;
    case 200:
        emit SignalManager::instance().AchievementFinshed("LaunchManiac");
        break;
    case 500:
        emit SignalManager::instance().AchievementFinshed("BinaryKing");
        break;
    case 2000:
        emit SignalManager::instance().AchievementFinshed("EndlessLoop");
        break;
    default:
        break;
    }
}


/* 时间管理 */

void Record::updateAllEatingCount()
{
    ControlBreakaLabelVector[0]->setText(QString::number(++AllEatingCount));
    settings.setValue("Achievement/AllEatingCount",AllEatingCount);
    switch(AllEatingCount)
    {
    case 3:
        emit SignalManager::instance().AchievementFinshed("NinjaBite");
        break;
    case 30:
        emit SignalManager::instance().AchievementFinshed("FoodRaidKing");
        break;
    case 300:
        emit SignalManager::instance().AchievementFinshed("Muncher");
        break;
    default:
        break;
    }
}

void Record::updateBreakFastCount()
{
    ControlBreakaLabelVector[1]->setText(QString::number(++BreakFastCount));
    settings.setValue("Achievement/BreakFastCount",BreakFastCount);
}

void Record::updateLunchCount()
{
    ControlBreakaLabelVector[2]->setText(QString::number(++LunchCount));
    settings.setValue("Achievement/LunchCount",LunchCount);
}
void Record::updateDinnerCount()
{
    ControlBreakaLabelVector[3]->setText(QString::number(++DinnerCount));
    settings.setValue("Achievement/DinnerCount",DinnerCount);
}

void Record::updateWorkingCount()
{
    ControlBreakaLabelVector[4]->setText(QString::number(++WorkingCount));
    settings.setValue("Achievement/WorkingCount",WorkingCount);
    switch(WorkingCount)
    {
    case 30:
        emit SignalManager::instance().AchievementFinshed("TaskTerminator");
        break;
    case 1000:
        emit SignalManager::instance().AchievementFinshed("EfficiencyGuru");
        break;
    case 5000:
        emit SignalManager::instance().AchievementFinshed("WorkBerserker");
        break;
    default:
        break;
    }
}

void Record::updateBreakCount()
{
    ControlBreakaLabelVector[5]->setText(QString::number(++BreakCount));
    settings.setValue("Achievement/BreakCount",BreakCount);
    switch(BreakCount)
    {
    case 30:
        emit SignalManager::instance().AchievementFinshed("RelaxRockFest");
        break;
    case 1000:
        emit SignalManager::instance().AchievementFinshed("DreamExplorer");
        break;
    case 5000:
        emit SignalManager::instance().AchievementFinshed("RuleTheRest");
        break;
    default:
        break;
    }
}

void Record::updateSkipBreakCount()
{
    ControlBreakaLabelVector[6]->setText(QString::number(++SkipBreakCount));
    settings.setValue("Achievement/SkipBreakCount",SkipBreakCount);
    switch(SkipBreakCount)
    {
    case 1:
        emit SignalManager::instance().AchievementFinshed("Traitor");
        break;
    case 100:
        emit SignalManager::instance().AchievementFinshed("WorkSlave");
        break;
    case 500:
        emit SignalManager::instance().AchievementFinshed("EndlessMiracles");
        break;
    default:
        break;
    }
}


Record::~Record()
{
    delete ui;
}
