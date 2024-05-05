#ifndef SIGNALMANGER_H
#define SIGNALMANGER_H
// 管理全局信号 单例模式
#include <QObject>
#include <QTime>

class SignalManager : public QObject {
    Q_OBJECT

public:
    static SignalManager& instance();

signals:
    void saveSettings(); // 用于通知主菜单保存设置
    void back(); // 用于通知主菜单返回主页面
    void switchOption(); // 用于通知主菜单返回到选项页面
    void breakfastTime(); // 早餐信号
    void lunchTime(); // 午餐信号
    void dinnerTime(); // 晚餐信号
    void stopBreakfast(); // 结束信号
    void stopLunch();
    void stopDinner();
    void stopWork(); // 停止工作 开始休息
    void stopBreak(); // 停止休息 开始工作
    void upDateLevel(); // 停止休息后更新等级 只发送一次
    void workingUpdataHealth(QTime workTime);    // 工作时，减少爱心值
    void breakingUpdataHealth(QTime breakTime); // 休息时，增加生命值
    void HungryRemoveState(QTime eatingTime);  // 增加饱食度 传递进食时长为参数
    void HungryState(QTime intervalTime);     // 减少饱食度 传递距离下次吃饭的时长为参数
    void customFrame_loadSetting(); // Objectframe 当点击它时就会触发
    void queryImageLabelReset(); // 查询图标当两次点击的都是自己那么就需要重置storageframe和objectframe里面的变量queryImgLabelClicked的标识
    void ReloadObjectFrame(); // 当有快捷方式被拖入Bar时，更新objectframe的图标及其信息
    void updateQuery(); // 向Record类发送信号更新查询信息次数
    void updateResearch(); // 向Record类发送信号更新搜索次数
    void updateLaunchApp(); // 向Record类发送信号更新启动程序次数
    void updateAllEating(); // 向Record类发送信号更新总进餐次数
    void updateBreakFast(); // 向Record类发送信号更新早餐次数
    void updateLunch(); // 向Record类发送信号更新午餐次数
    void updateDinner(); // 向Record类发送信号更新晚餐次数
    void updateWorking(); // 向Record类发送信号更新工作次数
    void updateBreak(); // 向Record类发送信号更新休息次数
    void updateSkipBreak(); // 向Record类发送信号更新跳过休息次数

    // 向Achievement类发送成就达成信号
    void AchievementFinshed(const QString& achievementName); // achievementName对应着成就名称


private:
    SignalManager(); // 私有构造函数
    Q_DISABLE_COPY(SignalManager)
};

#endif // SIGNALMANGER_H
