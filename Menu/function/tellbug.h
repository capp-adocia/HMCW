#ifndef TELLBUG_H
#define TELLBUG_H

#include <QWidget>
#include <QPushButton>
#include <SignalManager/signalmanger.h>
#include <Help/tips.h>

namespace Ui {
class TellBug;
}

class TellBug : public QWidget
{
    Q_OBJECT

public:
    explicit TellBug(QWidget *parent = nullptr);
    ~TellBug();

private:
    Ui::TellBug *ui;
    Tips* tip;
};

#endif // TELLBUG_H
