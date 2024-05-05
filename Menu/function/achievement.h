#ifndef ACHIEVEMENT_H
#define ACHIEVEMENT_H

#include <QWidget>
#include <QPushButton>
#include <SignalManager/signalmanger.h>
#include <Frame/achievementframe.h>
#include <QEvent>
#include <QMouseEvent>
#include <QSettings>
#include <Help/tips.h>

namespace Ui {
class Achievement;
}

class Achievement : public QWidget
{
    Q_OBJECT

public:
    explicit Achievement(QWidget *parent = nullptr);
    ~Achievement();
    void CreateAchievement(QWidget* parent,
                           const QString& achievementName,
                           const QString& achievementDescription,
                           const QString& IconResource,
                           const QString &FinshIconResource,
                           int x,
                           int y,
                           bool isFinshed);
    void DrawAchievement();
    void DrawTipWidget(AchievementFrame* achievementFrame); // 绘制提示窗口
public slots:
    void SwitchTabWidget(int index);
    // 响应更新成就信号
    void updateUseTimeAchievementState(const QString &achievementName);


protected:
    bool eventFilter(QObject* watched, QEvent* event) override;
    // void mousePressEvent(QMouseEvent *event) override;
private:
    Ui::Achievement *ui;
    QWidget* GeneralWidgetTip;
    QWidget* ControlBreakWidgetTip;
    QString currentTab; // 当前的tabWidget
    QVector<AchievementFrame*> achievementVector; // 存储成就对象
    Tips* tip;
    QLabel* generalIconLabel;
    QLabel* generalNameLabel;
    QLabel* generalDescriptionLabel;
    QLabel* controlIconLabel;
    QLabel* controlNameLabel;
    QLabel* controlDescriptionLabel;
};

#endif // ACHIEVEMENT_H
/* 通用成就 */
/////////////////////////////////////////////////////////////////////
/*
1.UseTime 运行时长
{
    Marathon Runner 运行10小时
    Time Traveler 运行24小时
    Dedicated User 运行7天
    Golden User 运行666小时
}
2.QueryUpdataCount 查询更新次数
{
    Data Dynamo 保持程序内部信息最新达到 5 次
    Info Connoisseur 保持程序内部信息最新达到 20 次
    Info Ninja  保持程序内部信息最新达到 100 次
}
3.ResearchCount 搜索次数
{
    Search Sleuth 搜索次数达到 20 次
    Search Maestro 搜索次数到达 200 次
    Search Wizard 搜索次数达到 500 次
    Search Conqueror 搜索次数达到 2000 次
}
4.LaunchAppCount 应用程序启动次数
{
    Launch Enthusiast 启动 20 次// 启动爱好者
    Launchaholic 启动 100 次
    App-o-holic 启动 500 次 // 程序上瘾者
    Launch-o-maniac 启动 2000 次 // 启动狂人
}
*/

/* 休息成就 */
/////////////////////////////////////////////////////////////////////
/*
1.AllEatingCount 进餐总次数
{
    Nibble Ninja 进食次数达到 3次 // 小口吃忍者
    Snack Attack Pro 进餐总次数达到 20 次 // 零食攻击专家
    Munching Machine 进餐总次数达到 300 次 // 无情的进餐机器
}
2.WorkingCount 工作次数
{
    Task Terminator 工作次数累计达到30次 // 任务终结者
    Productivity Prodigy 工作次数累计达到 1000 次 // 生产力奇才
    Workaholic Warrior 工作次数累计达到 5000 次 // 工作狂战士
}
3.BreakCount 休息次数
{
    Breaktime Bliss 休息次数累计达到 30 次 // 休息时光的幸福享受者
    Resting Rockstar 休息次数累计达到 1000 次 // 休息摇滚巨星
    Relaxation Ruler 休息次数累计达到 5000 次 // 放松统治者
}
4.SkipBreakCount 跳过休息次数
{
    Breakless Wonder 1次 // 工作奴隶
    Breaktime Betrayer 100次 // 休息背叛者
    Breaktime Blunderer 500 // 无休无止的奇迹
}
*/

