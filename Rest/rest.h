#ifndef REST_H
#define REST_H

#include <QWidget>
#include <SignalManager/signalmanger.h>
#include <QDebug>
#include <Help/tips.h>
#include <QMessageBox>
#include <Rest/Game/game_2048.h>

namespace Ui {
class Rest;
}
// 休息提醒窗口
class Rest : public QWidget
{
    Q_OBJECT

public:
    explicit Rest(QWidget *parent = nullptr);
    ~Rest();
public slots:

private:
    Ui::Rest *ui;
    Tips *breakfastTimeTips;
    Tips *lunchTimeTips;
    Tips *dinnerTimeTips;
    Tips *stopBreakfastTips;
    Tips *stopLunchTips;
    Tips *stopDinnerTips;
    Tips *stopWorkTips;
    Tips *stopBreakTips;
    Game_2048 *game_2048Page; // 2048游戏页面
};

#endif // REST_H
