#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QPushButton>
#include <Menu/function/option.h>
#include <Menu/function/about.h>
#include <Menu/function/achievement.h>
#include <Menu/function/record.h>
#include <Menu/function/suggestion.h>
#include <Menu/function/tellbug.h>
#include <SignalManager/signalmanger.h>
#include <Help/queryimglabel.h>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

signals:
    void closeMenu();
public slots:
protected:
    void keyPressEvent(QKeyEvent *event) override;
    // bool eventFilter(QObject *obj, QEvent *event) override; // 拖拽存在bug待解决

private:
    Ui::Menu *ui;
    QVector<QWidget*> pages;
    QVector<QPushButton*> buttons;
    Option *optionPage;
    About *aboutPage;
    Achievement *achievementPage;
    Record *recordPage;
    Suggestion *suggestionPage;
    TellBug *tellbugPage;
    QueryImgLabel *queryImgLabel;
    // QPoint mousePressPos; // 保存鼠标位置
    // bool mousePressed;
};

#endif // MENU_H
