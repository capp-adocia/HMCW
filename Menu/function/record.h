#ifndef RECORD_H
#define RECORD_H

#include <QWidget>
#include <QPushButton>
#include <SignalManager/signalmanger.h>
#include <QLabel>
#include <QDateTime>
#include <QTimer>
#include <QSettings>
#include <Help/tips.h>

namespace Ui {
class Record;
}

class Record : public QWidget
{
    Q_OBJECT
public:
    explicit Record(QWidget *parent = nullptr);
    ~Record();
    void InitDrawLabel(); // 初始化绘制stackWidget里面标签信息
public slots:
    void updateRunningTime(); // 更新程序运行时长
    void updateQueryCount(); // 更新查询次数
    void updateResearchCount(); // 更新搜索次数
    void updateLaunchAppCount(); // 更新启动程序次数

    void updateAllEatingCount(); // 更新进餐总次数
    void updateBreakFastCount(); // 早餐次数
    void updateLunchCount(); // 午餐次数
    void updateDinnerCount(); // 晚餐次数
    void updateWorkingCount(); // 更新工作次数
    void updateBreakCount(); // 更新休息次数
    void updateSkipBreakCount(); // 更新跳过休息次数

private:
    Ui::Record *ui;
    QVector<QLabel*> RecodeGeneralLabelVector; // 用来记录通用Widget里的信息
    QVector<QLabel*> RecodeControlLabelVector; // 用来记录控制休息Widget里的信息
    QSettings settings;
    long long UseTime; // 程序运行时长
    long long QueryUpdataCount; // 查询更新次数
    long long ResearchCount; // 搜索次数
    long long LaunchAppCount; // 应用程序启动次数


    long long AllEatingCount; // 进餐总次数
    long long BreakFastCount; // 早餐次数
    long long LunchCount; // 午餐次数
    long long DinnerCount; // 晚餐次数
    long long WorkingCount; // 工作次数
    long long BreakCount; // 休息次数
    long long SkipBreakCount; // 跳过休息次数
    QDateTime startTime;
    QVector<QLabel*> unitLabelVector; // 存储每个通用label
    QVector<QLabel*> ControlBreakaLabelVector; // 存储每一个控制休息label
    QTimer *updateTimer; // 每隔 1 分钟更新一次

    Tips *tip;
};

#endif // RECORD_H
