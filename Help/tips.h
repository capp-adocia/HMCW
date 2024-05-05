#ifndef TIPS_H
#define TIPS_H

#include <QDialog>
#include <QTimer>
#include <QScreen>
#include <QPropertyAnimation>
#include <SignalManager/signalmanger.h>

namespace Ui {
class Tips;
}
// 用来提醒用户一些事情，比如达成了某些成就或是提醒用户操作
class Tips : public QDialog
{
    Q_OBJECT
public:
    explicit Tips(QWidget *parent = nullptr);
    ~Tips();
    void setAchieveProgressStyle(); // 达成进度tip样式
    void setUnlockNewProgressStyle(); // 解锁新进度tip样式
    // StartTips 4个参数 1.图标资源 2.达成成就标题 3.成就名称
    void StartTips(const QString &url,
                   const QString &achievementTitleText,
                   const QString &achievementText,
                   bool isAchievementStyle = false); // 如果是true就使用启动成就tip的样式
    static QList<Tips*> allTipsObject; // 静态成员变量,保存全部的Tips对象
    static int currentAnimationCount; // 用来控制初始展示的个数
    static int Count; // 待等待的不重复的tips的个数
    static bool isFirst; // 是否是右上角第一个
    void startAnimation(int order); // 启动动画

public slots:

protected:
    void timerEvent(QTimerEvent *event) override;
private:
    Ui::Tips *ui;
    QString url; // 图标资源
    QPropertyAnimation *animation;
    int timerId;
};

#endif // TIPS_H
