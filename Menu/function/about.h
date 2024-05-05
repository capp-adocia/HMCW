#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>
#include <QPushButton>
#include <SignalManager/signalmanger.h>
#include <QDesktopServices>

namespace Ui {
class About;
}

class About : public QWidget
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    ~About();
    static bool isShowLargeScreen;
signals:
    void back();
private:
    Ui::About *ui;
};

#endif // ABOUT_H
