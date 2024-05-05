#ifndef SUGGESTION_H
#define SUGGESTION_H

#include <QWidget>
#include <QPushButton>
#include <SignalManager/signalmanger.h>

namespace Ui {
class Suggestion;
}

class Suggestion : public QWidget
{
    Q_OBJECT

public:
    explicit Suggestion(QWidget *parent = nullptr);
    ~Suggestion();

private:
    Ui::Suggestion *ui;
};

#endif // SUGGESTION_H
