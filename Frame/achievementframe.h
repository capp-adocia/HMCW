#ifndef ACHIEVEMENTFRAME_H
#define ACHIEVEMENTFRAME_H

#include <QFrame>
#include <QObject>
#include <QLabel>

// Achievement类中的 成就进度Frame
class AchievementFrame : public QFrame
{
    Q_OBJECT
public:
    AchievementFrame(QWidget *parent = nullptr);
    void setPositon(int &x, int &y); // 坐标
    void setAchievementName(const QString& FrameName); // 成就名
    void setAchievementDescription(const QString& description); // 成就描述
    void setAchievementIcon(const QString& IconResource); // 成就图标
    void updatePixmap(); // 更新图标
    void setAchievementFinshIcon(const QString& FinshedIconResource); // 实现成就图标
    void setAchievementIsFinshed(bool isFinshed);
    std::pair<int, int> getPosition(); // 返回坐标
    const QString& getAchievementName() const;
    const QString& getAchievementDescription() const;
    const QString& getAchievementIcon() const;
    const QString& getAchievementStyle() const;
    // 成就样式表
    static QString NoFinshedAchievementStyle;
    static QString FinshedAchievementStyle;
public slots:

protected:

private:
    QLabel* iconLabel; // 图标
    QString FrameName; // 成就frame名称
    QString description; // 描述信息
    QString icon; // 图标资源
    QString FinshedIcon; // 达成成就后的图标
    int xPosition;
    int yPosition;
    bool isFinshed; // 是否达成成就
};

#endif // ACHIEVEMENTFRAME_H
