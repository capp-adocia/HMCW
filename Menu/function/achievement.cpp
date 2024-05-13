#include "Menu/function/achievement.h"
#include "ui_achievement.h"

Achievement::Achievement(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Achievement)
    , currentTab("GeneralTab")
    , tip(new Tips())
{
    ui->setupUi(this);
    // 向全局发送返回信号
    connect(ui->backButton, &QPushButton::clicked,[]{
        emit SignalManager::instance().back();
    });
    connect(ui->backButton_2, &QPushButton::clicked,[]{
        emit SignalManager::instance().back();
    });
    // 设置QTabWidget的样式表
    QString tabStyle = "QTabBar::tab {"
                       "    background-color: rgb(139, 139, 139);"
                       "    border-top: 6px solid white;"
                       "    border-left: 6px solid white;"
                       "    border-right: 6px solid rgba(255,255,255,0.5);"
                       "    border-bottom: 3px solid rgba(0,0,0,0.5);"
                       "    height: 60px;"
                       "    width: 80px;"
                       "    font-size:18px;"
                       "    color:rgba(0,0,0,0.7);"
                       "}"
                       "QTabBar::tab:selected {"
                       "    background-color: rgb(198, 198, 198);"
                       "    border-bottom: 3px solid rgb(198, 198, 198);"
                       "    height: 60px;"
                       "    width: 80px;"
                       "}";
    ui->tabWidget->setStyleSheet(tabStyle);
    ui->tabWidget->setStyleSheet(tabStyle);
    ui->tabWidget->setTabText(0,"Hello\nWorld");
    ui->tabWidget->setTabText(1,"时间\n管理");

    ui->GeneralContents->setStyleSheet("QWidget#GeneralContents{background-image: url(:/Image/rockBackground.png);}");
    ui->TimeManagerContents->setStyleSheet("QWidget#TimeManagerContents{background-image: url(:/Image/rockBackground.png);}");
    QString ButtonStyleSheet = "QPushButton{"
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
                               "}";
    ui->backButton->setStyleSheet(ButtonStyleSheet);
    ui->backButton_2->setStyleSheet(ButtonStyleSheet);

    // 绘制成就
    DrawAchievement();

    GeneralWidgetTip = new QWidget(ui->GeneralContents);
    ControlBreakWidgetTip = new QWidget(ui->TimeManagerContents);

    GeneralWidgetTip->setFixedSize(194,117);
    ControlBreakWidgetTip->setFixedSize(194,117);
    GeneralWidgetTip->setStyleSheet(
        "border:4px solid rgb(85, 85, 85);"
        "background-color:rgba(255,255,255,0.6);"
        );
    ControlBreakWidgetTip->setStyleSheet(
        "border:4px solid rgb(85, 85, 85);"
        "background-color:rgba(255,255,255,0.6);"
        );

    ControlBreakWidgetTip->hide();
    GeneralWidgetTip->hide();
    // 切换tab时把它们隐藏
    connect(ui->tabWidget, &QTabWidget::currentChanged,this, &Achievement::SwitchTabWidget);

    // 连接成就完成信号
    connect(&SignalManager::instance(),&SignalManager::AchievementFinshed,this,&Achievement::updateAchievementState);
    // 初始化标签label
    generalIconLabel = new QLabel(GeneralWidgetTip);
    generalNameLabel = new QLabel(GeneralWidgetTip);
    generalDescriptionLabel = new QLabel(GeneralWidgetTip);
    controlIconLabel = new QLabel(ControlBreakWidgetTip);
    controlNameLabel = new QLabel(ControlBreakWidgetTip);
    controlDescriptionLabel = new QLabel(ControlBreakWidgetTip);
}

void Achievement::CreateAchievement(QWidget* parent,
                                    const QString& achievementName,
                                    const QString& achievementDescription,
                                    const QString& IconResource,
                                    const QString& FinshedIconResource,
                                    int x,
                                    int y,
                                    bool isFinshed = false)
{
    // 检查是否有相同的名称出现，防止重复添加
    for (AchievementFrame* achievement : achievementVector) {
        if (achievement->getAchievementName() == achievementName) {
            achievement->setAchievementDescription(achievementDescription);
            achievement->setAchievementIsFinshed(isFinshed);
            achievement->setAchievementFinshIcon(FinshedIconResource);
            achievement->setAchievementIcon(IconResource);
            return;
        }
    }
    AchievementFrame* newAchievement = new AchievementFrame(parent);
    newAchievement->move(x, y);
    newAchievement->setPositon(x, y);
    newAchievement->setAchievementName(achievementName);
    newAchievement->setAchievementDescription(achievementDescription);
    newAchievement->setAchievementIsFinshed(isFinshed);
    newAchievement->setAchievementFinshIcon(FinshedIconResource);
    newAchievement->setAchievementIcon(IconResource);

    achievementVector.append(newAchievement);
}

void Achievement::DrawAchievement()
{
    QSettings settings("config.ini",QSettings::IniFormat);
    bool isFound = false;

    // 为通用进度成就设置 20 个QFrame // 描述最多16个字
    CreateAchievement(ui->GeneralContents,"Hello World","你好，世界",":/Image/AchievementIcon/GeneralIcon/Launch.png",":/Image/AchievementIcon/GeneralIcon/HelloWorld.png",60,200,true);
    // 1.运行时长
    CreateAchievement(ui->GeneralContents,"Run","运行",":/Image/AchievementIcon/GeneralIcon/Launch.png",":/Image/AchievementIcon/GeneralIcon/Run.png",200,20,true);
    isFound = settings.value("AchievementIsFinshed/MarathonRunner",false).toBool();
    CreateAchievement(ui->GeneralContents,"MarathonRunner","马拉松跑者",":/Image/AchievementIcon/GeneralIcon/UnReach_MarathonRunner.png",":/Image/AchievementIcon/GeneralIcon/Reach_MarathonRunner.png",310,20,isFound);
    isFound = settings.value("AchievementIsFinshed/TimeTraveler",false).toBool();
    CreateAchievement(ui->GeneralContents,"TimeTraveler","时间旅行者",":/Image/AchievementIcon/GeneralIcon/UnReach_TimeTraveler.png",":/Image/AchievementIcon/GeneralIcon/Reach_TimeTraveler.png",420,20,isFound);
    isFound = settings.value("AchievementIsFinshed/DedicatedUser",false).toBool();
    CreateAchievement(ui->GeneralContents,"DedicatedUser","专属用户",":/Image/AchievementIcon/GeneralIcon/UnReach_DedicatedUser.png",":/Image/AchievementIcon/GeneralIcon/Reach_DedicatedUser.png",530,20,isFound);
    isFound = settings.value("AchievementIsFinshed/GoldUser",false).toBool();
    CreateAchievement(ui->GeneralContents,"GoldUser","黄金用户",":/Image/AchievementIcon/GeneralIcon/UnReach_GoldUser.png",":/Image/AchievementIcon/GeneralIcon/Reach_GoldUser.png",640,20,isFound);
    // 2.查询更新次数
    CreateAchievement(ui->GeneralContents,"Query","查询",":/Image/AchievementIcon/GeneralIcon/Launch.png",":/Image/AchievementIcon/GeneralIcon/Query.png",200,134,true);
    isFound = settings.value("AchievementIsFinshed/InfoExpert",false).toBool();
    CreateAchievement(ui->GeneralContents,"InfoExpert","信息鉴赏家",":/Image/AchievementIcon/GeneralIcon/UnReach_InformationConnoisseur.png",":/Image/AchievementIcon/GeneralIcon/Reach_InformationConnoisseur.png",310,134,isFound);
    isFound = settings.value("AchievementIsFinshed/InfoExplosion",false).toBool();
    CreateAchievement(ui->GeneralContents,"InfoExplosion","信息大爆炸",":/Image/AchievementIcon/GeneralIcon/UnReach_InformationExplosion.png",":/Image/AchievementIcon/GeneralIcon/Reach_InformationExplosion.png",420,134,isFound);
    isFound = settings.value("AchievementIsFinshed/InfoNinja",false).toBool();
    CreateAchievement(ui->GeneralContents,"InfoNinja","信息忍者",":/Image/AchievementIcon/GeneralIcon/UnReach_InformationNinja.png",":/Image/AchievementIcon/GeneralIcon/Reach_InformationNinja.png",530,134,isFound);

    // 3.搜索次数
    CreateAchievement(ui->GeneralContents,"Search","搜索",":/Image/AchievementIcon/GeneralIcon/Launch.png",":/Image/AchievementIcon/GeneralIcon/Research.png",203,249,true);
    isFound = settings.value("AchievementIsFinshed/SearchDetective",false).toBool();
    CreateAchievement(ui->GeneralContents,"SearchDetective","搜索侦探",":/Image/AchievementIcon/GeneralIcon/UnReach_SearchDetective.png",":/Image/AchievementIcon/GeneralIcon/Reach_SearchDetective.png",311,249,isFound);
    isFound = settings.value("AchievementIsFinshed/SearchMaster",false).toBool();
    CreateAchievement(ui->GeneralContents,"SearchMaster","搜索大师",":/Image/AchievementIcon/GeneralIcon/UnReach_SearchMaster.png",":/Image/AchievementIcon/GeneralIcon/Reach_SearchMaster.png",421,249,isFound);
    isFound = settings.value("AchievementIsFinshed/SearchWitcher",false).toBool();
    CreateAchievement(ui->GeneralContents,"SearchWitcher","搜索巫师",":/Image/AchievementIcon/GeneralIcon/UnReach_SearchWitcher.png",":/Image/AchievementIcon/GeneralIcon/Reach_SearchWitcher.png",530,249,isFound);
    isFound = settings.value("AchievementIsFinshed/SearchVictor",false).toBool();
    CreateAchievement(ui->GeneralContents,"SearchVictor","搜索征服者",":/Image/AchievementIcon/GeneralIcon/UnReach_SearchConqueror.png",":/Image/AchievementIcon/GeneralIcon/Reach_SearchConqueror.png",640,249,isFound);

    // 4.应用程序启动次数
    CreateAchievement(ui->GeneralContents,"Launch","启动",":/Image/AchievementIcon/GeneralIcon/Launch.png",":/Image/AchievementIcon/GeneralIcon/Launch.png",200,365,true);
    isFound = settings.value("AchievementIsFinshed/LaunchFans",false).toBool();
    CreateAchievement(ui->GeneralContents,"LaunchFans","启动爱好者",":/Image/AchievementIcon/GeneralIcon/UnReach_LaunchEnthusiasts.png",":/Image/AchievementIcon/GeneralIcon/Reach_LaunchEnthusiasts.png",310,365,isFound);
    isFound = settings.value("AchievementIsFinshed/LaunchManiac",false).toBool();
    CreateAchievement(ui->GeneralContents,"LaunchManiac","启动狂人",":/Image/AchievementIcon/GeneralIcon/UnReach_LaunchManiac.png",":/Image/AchievementIcon/GeneralIcon/Reach_LaunchManiac.png",420,365,isFound);
    isFound = settings.value("AchievementIsFinshed/BinaryKing",false).toBool();
    CreateAchievement(ui->GeneralContents,"BinaryKing","二进制王者",":/Image/AchievementIcon/GeneralIcon/UnReach_BinaryKing.png",":/Image/AchievementIcon/GeneralIcon/Reach_BinaryKing.png",530,365,isFound);
    isFound = settings.value("AchievementIsFinshed/EndlessLoop",false).toBool();
    CreateAchievement(ui->GeneralContents,"EndlessLoop","循环-无休止",":/Image/AchievementIcon/GeneralIcon/UnReach_EndlessLoop.png",":/Image/AchievementIcon/GeneralIcon/Reach_EndlessLoop.png",640,365,isFound);

    // 为休息进度成就设置 17 个QFrame
    CreateAchievement(ui->TimeManagerContents,"TimeManager","时间管理员",":/Image/AchievementIcon/ControlBreak/Launch.png",":/Image/AchievementIcon/ControlBreak/ControlBreak.png",60,200,true);
    // 1.进餐总次数
    CreateAchievement(ui->TimeManagerContents,"Eat","进餐",":/Image/AchievementIcon/ControlBreak/Launch.png",":/Image/AchievementIcon/ControlBreak/Eat.png",200,23,true);
    isFound = settings.value("AchievementIsFinshed/NinjaBite",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"NinjaBite","啃咬忍者",":/Image/AchievementIcon/ControlBreak/UnReach_NinjaBite.png",":/Image/AchievementIcon/ControlBreak/Reach_NinjaBite.png",310,23,isFound);
    isFound = settings.value("AchievementIsFinshed/FoodRaidKing",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"FoodRaidKing","食物袭击王",":/Image/AchievementIcon/ControlBreak/UnReach_FoodRaidKing.png",":/Image/AchievementIcon/ControlBreak/Reach_FoodRaidKing.png",420,23,isFound);
    isFound = settings.value("AchievementIsFinshed/Muncher",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"Muncher","咀嚼机器",":/Image/AchievementIcon/ControlBreak/UnReach_ChewingMachine.png",":/Image/AchievementIcon/ControlBreak/Reach_ChewingMachine.png",530,23,isFound);

    // 2.工作次数
    CreateAchievement(ui->TimeManagerContents,"Work","工作",":/Image/AchievementIcon/ControlBreak/Launch.png",":/Image/AchievementIcon/ControlBreak/Work.png",200,137,true);
    isFound = settings.value("AchievementIsFinshed/TaskTerminator",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"TaskTerminator","任务终结者",":/Image/AchievementIcon/ControlBreak/UnReach_MissionTerminator.png",":/Image/AchievementIcon/ControlBreak/Reach_MissionTerminator.png",310,137,isFound);
    isFound = settings.value("AchievementIsFinshed/EfficiencyGuru",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"EfficiencyGuru","生产力奇才",":/Image/AchievementIcon/ControlBreak/UnReach_ProductivityWizard.png",":/Image/AchievementIcon/ControlBreak/Reach_ProductivityWizard.png",420,137,isFound);
    isFound = settings.value("AchievementIsFinshed/WorkBerserker",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"WorkBerserker","工作狂战士",":/Image/AchievementIcon/ControlBreak/UnReach_WorkaholicWarrior.png",":/Image/AchievementIcon/ControlBreak/Reach_WorkaholicWarrior.png",530,137,isFound);

    // 3.休息次数
    CreateAchievement(ui->TimeManagerContents,"Break","休息",":/Image/AchievementIcon/ControlBreak/Launch.png",":/Image/AchievementIcon/ControlBreak/Break.png",203,252,true);
    isFound = settings.value("AchievementIsFinshed/RelaxRockFest",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"RelaxRockFest","休息摇滚节",":/Image/AchievementIcon/ControlBreak/UnReach_RestRockFestival.png",":/Image/AchievementIcon/ControlBreak/Reach_RestRockFestival.png",311,252,isFound);
    isFound = settings.value("AchievementIsFinshed/DreamExplorer",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"DreamExplorer","梦境探索家",":/Image/AchievementIcon/ControlBreak/UnReach_DreamExplorer.png",":/Image/AchievementIcon/ControlBreak/Reach_DreamExplorer.png",421,252,isFound);
    isFound = settings.value("AchievementIsFinshed/RuleTheRest",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"RuleTheRest","统治休息者",":/Image/AchievementIcon/ControlBreak/UnReach_RuleTheRest.png",":/Image/AchievementIcon/ControlBreak/Reach_RuleTheRest.png",530,252,isFound);

    // 4.跳过休息次数
    CreateAchievement(ui->TimeManagerContents,"SkipBreak","跳过休息",":/Image/AchievementIcon/ControlBreak/Launch.png",":/Image/AchievementIcon/ControlBreak/SkipBreak.png",200,368,true);
    isFound = settings.value("AchievementIsFinshed/Traitor",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"Traitor","背叛者",":/Image/AchievementIcon/ControlBreak/UnReach_Traitor.png",":/Image/AchievementIcon/ControlBreak/Reach_Traitor.png",310,368,isFound);
    isFound = settings.value("AchievementIsFinshed/WorkSlave",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"WorkSlave","工作奴隶",":/Image/AchievementIcon/ControlBreak/UnReach_WorkSlave.png",":/Image/AchievementIcon/ControlBreak/Reach_WorkSlave.png",420,368,isFound);
    isFound = settings.value("AchievementIsFinshed/EndlessMiracles",false).toBool();
    CreateAchievement(ui->TimeManagerContents,"EndlessMiracles","奇迹-无休止",":/Image/AchievementIcon/ControlBreak/UnReach_EndlessMiracles.png",":/Image/AchievementIcon/ControlBreak/Reach_EndlessMiracles.png",530,368,isFound);
    // 安装事件过滤器
    foreach (QObject* obj, ui->GeneralContents->children()) {
        if (AchievementFrame* achievementFrame = qobject_cast<AchievementFrame*>(obj)) {
            achievementFrame->installEventFilter(this);
        }
    }
    foreach (QObject* obj, ui->TimeManagerContents->children()) {
        if (AchievementFrame* achievementFrame = qobject_cast<AchievementFrame*>(obj)) {
            achievementFrame->installEventFilter(this);
        }
    }

}

void Achievement::DrawTipWidget(AchievementFrame *achievementFrame)
{
    QFont font("Arial",14);
    /* 通用成就 */
    if (achievementFrame)
    {
        // 在这里执行鼠标进入时的操作
        int X = achievementFrame->getPosition().first;
        int Y = achievementFrame->getPosition().second;
        if(currentTab == "GeneralTab")
        {
            // 移动
            GeneralWidgetTip->move(X,  Y);

            generalIconLabel->setFixedSize(50,50);
            QPixmap pixmap(achievementFrame->getAchievementIcon());
            QPixmap scaledPixmap = pixmap.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            generalIconLabel->setPixmap(scaledPixmap);
            generalIconLabel->setStyleSheet("border:0;background-color:rgba(255, 255, 255,0);");
            generalIconLabel->move(5, 10); // 设置图标控件的位置

            generalNameLabel->setFixedSize(128,55);
            generalNameLabel->setText(achievementFrame->getAchievementName());
            generalNameLabel->setFont(QFont("Arial",12));
            generalNameLabel->setAlignment(Qt::AlignCenter);
            // 判断当前是否显示完成成就的标签
            generalNameLabel->setStyleSheet(achievementFrame->getAchievementStyle());
            generalNameLabel->move(57,8);

            generalDescriptionLabel->setFixedSize(178,45);
            generalDescriptionLabel->setText(achievementFrame->getAchievementDescription());
            generalDescriptionLabel->setFont(font);
            generalDescriptionLabel->setWordWrap(true);
            generalDescriptionLabel->setAlignment(Qt::AlignCenter);
            generalDescriptionLabel->setStyleSheet("color:rgb(97, 244, 96);background-color:rgb(33, 33, 33);");
            generalDescriptionLabel->move(8, 65);

            // 显示 GeneralWidgetTip
            GeneralWidgetTip->show();
        }
        /* 休息成就 */
        else if(currentTab == "ControlBreakTab")
        {
            ControlBreakWidgetTip->move(X,  Y);

            controlIconLabel->setFixedSize(50,50);
            QPixmap pixmap2(achievementFrame->getAchievementIcon());
            QPixmap scaledPixmap2 = pixmap2.scaled(50, 50, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            controlIconLabel->setPixmap(scaledPixmap2);
            controlIconLabel->setStyleSheet("border:0;background-color:rgba(255, 255, 255,0);");
            controlIconLabel->move(5, 10); // 设置图标控件的位置

            controlNameLabel->setFixedSize(128,55);
            controlNameLabel->setText(achievementFrame->getAchievementName());
            controlNameLabel->setFont(QFont("Arial",12));
            controlNameLabel->setAlignment(Qt::AlignCenter);
            controlNameLabel->setStyleSheet(achievementFrame->getAchievementStyle());
            controlNameLabel->move(57,8);

            controlDescriptionLabel->setFixedSize(178,45);
            controlDescriptionLabel->setText(achievementFrame->getAchievementDescription());
            controlDescriptionLabel->setFont(font);
            controlDescriptionLabel->setWordWrap(true);
            controlDescriptionLabel->setAlignment(Qt::AlignCenter);
            controlDescriptionLabel->setStyleSheet("color:rgb(97, 244, 96);background-color:rgb(33, 33, 33);");
            controlDescriptionLabel->move(8, 65);

            // 显示 ControlBreakWidgetTip
            ControlBreakWidgetTip->show();
        }
    }
}


void Achievement::SwitchTabWidget(int index)
{
    ControlBreakWidgetTip->hide();
    GeneralWidgetTip->hide();
    // 通用设置
    if(index == 0)
    {
        currentTab = "GeneralTab";
    }
    else if(index == 1)
    {
        currentTab = "ControlBreakTab";
    }

}

void Achievement::updateAchievementState(const QString& achievementName)
{
    for(AchievementFrame* achievement : achievementVector)
    {
        if(achievement->getAchievementName() == achievementName)
        {
            achievement->setAchievementIsFinshed(true);
            achievement->updatePixmap();
            // 待优化 浪费性能
            DrawTipWidget(achievement);
            tip->StartTips(achievement->getAchievementIcon(),achievement->getAchievementName()+" 已达成!",achievement->getAchievementDescription(),true);
            // 保存是否达成成就
            QSettings settings("config.ini",QSettings::IniFormat);
            settings.beginGroup("AchievementIsFinshed");
            settings.setValue(achievement->getAchievementName(),true);
            settings.endGroup();
            break;
        }
    }
}

bool Achievement::eventFilter(QObject* watched, QEvent* event)
{
    if (event->type() == QEvent::Enter)
    {
        // 处理鼠标进入事件
        AchievementFrame* achievementFrame = qobject_cast<AchievementFrame*>(watched);
        // 绘制提示窗口
        DrawTipWidget(achievementFrame);
    }

    return QObject::eventFilter(watched, event);
}

// void Achievement::mousePressEvent(QMouseEvent *event)
// {
//     // 处理鼠标点击事件
//     if (event->button() == Qt::LeftButton)
//     {
//         // 隐藏两个窗口，但在隐藏前判断是否可见，否则程序会崩溃
//         if (GeneralWidgetTip->isVisible())
//         {
//             GeneralWidgetTip->hide();
//         }
//         else if(ControlBreakWidgetTip->isVisible())
//         {
//             ControlBreakWidgetTip->hide();
//         }
//     }

//     // 调用父类的鼠标点击事件处理函数
//     QWidget::mousePressEvent(event);
// }

Achievement::~Achievement()
{
    if(tip)
    {
        delete tip;
        tip = nullptr;
    }
    delete ui;
}
