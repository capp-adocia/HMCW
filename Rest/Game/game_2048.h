#ifndef GAME_2048_H
#define GAME_2048_H

#include <QWidget>
#include <QLabel>
#include <QKeyEvent>
#include <QRandomGenerator>
#include <QMessageBox>
#include <QTimer>

namespace Ui {
class Game_2048;
}

class Game_2048 : public QWidget
{
    Q_OBJECT

public:
    explicit Game_2048(QWidget *parent = nullptr);
    ~Game_2048();
    void randomPosition(); // 随机地向没有样式的某个label加入样式
    bool checkGameOver(); // 检查游戏是否结束
    QString LabelStyleSheet(const QString &text); // 返回对应样式
    void labelMoveUp(); // label向上移动
    void labelMoveDown(); // label向下移动
    void labelMoveLeft(); // label向左移动
    void labelMoveRight(); // label向右移动
    void resetGameState(); // 窗口关闭时调用重置
public slots:
    void randomInitPosition(); // 初始化生成两个位置
protected:
    virtual void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::Game_2048 *ui;
    QString originalStyleSheet; // 原始label方格样式
    QString labelStyleSheet_2; // label方格样式
    QString labelStyleSheet_4;
    QString labelStyleSheet_8;
    QString labelStyleSheet_16;
    QString labelStyleSheet_32;
    QString labelStyleSheet_64;
    QString labelStyleSheet_128;
    QString labelStyleSheet_256;
    QString labelStyleSheet_512;
    QString labelStyleSheet_1024;
    QString labelStyleSheet_2048;
    QVector<QLabel*> labelVector; // 存储label
    QFont ft; // 字体
};

#endif // GAME_2048_H
