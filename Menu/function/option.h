#ifndef OPTION_H
#define OPTION_H

#include <QWidget>
#include <QSettings>
#include <QFile>
#include <QMessageBox>
#include <QPushButton>
#include <SignalManager/signalmanger.h>
#include <QTime>
#include <QTimer>
#include <QSlider>
#include <QCheckBox>

namespace Ui {
class Option;
}

class Option : public QWidget
{
    Q_OBJECT
public:
    explicit Option(QWidget *parent = nullptr);
    ~Option();
    void Init();
    std::tuple<QTime, QTime> setTimeLabel(QSlider *Slider, bool returnPair);
    QTime setTimeLabel(QSlider *Slider); // 把Slider的值转化为时间 传给label显示
signals:
    void back();
    void start(bool isStart); // 发送一个信号用来告诉option是否启用定时提醒功能

public slots:
    void Save();
    void checkTime();
    void StartOption(int state); // 是否启用定时提醒休息功能
    void SkipOrStopMeal(const QString& mealCategory, bool isSkip = false); // 当跳过吃饭时触发这个槽函数
    void SkipBreak(bool isSkip = false); // 当跳过休息时触发这个槽函数
private:
    Ui::Option *ui;
    QMap<QSlider*, QLabel*> sliderLabelMap; // 把滑块和标签映射
    QTimer *timer; // 定时器每秒检查一次时间
    bool m_breakfastSignalSent; // 判断是否发送了早餐信号
    bool m_lunchSignalSent;
    bool m_dinnerSignalSent;
    qint32 currentTimeSec; // 记录当前秒数
    QTime currentTime; // 记录当前时间
    bool is_mealing; // 是否在吃饭
    bool is_recordWorkStart; // 是否记录了工作开始的时间
    bool is_break; // 是否到休息时间了
    bool is_recordBreakStart; // 是否记录了休息开始的时间
    bool is_UpdateBreakfaskHungryImg; // 是否发送了更新饱食度图片信号
    bool is_UpdateLunchHungryImg;
    bool is_UpdateDinnerHungryImg;
    bool isSendUpdate; // 是否发送了更新等级的信号
    QTime PreCurrentTime; // 记录上一次的时间
    bool isSavePreCurrentTime; // 是否记录了之前的时间（现在的）启动时，只保存一次
};

#endif // OPTION_H
