/********************************************************************************
** Form generated from reading UI file 'state.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATE_H
#define UI_STATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_State
{
public:
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QProgressBar *hpBar;
    QLabel *label_8;
    QProgressBar *hungryBar;
    QPushButton *backButton;

    void setupUi(QWidget *State)
    {
        if (State->objectName().isEmpty())
            State->setObjectName("State");
        State->resize(669, 444);
        State->setStyleSheet(QString::fromUtf8("background-color: rgba(29, 29, 29, 0.5);"));
        widget_3 = new QWidget(State);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(220, 160, 173, 83));
        widget_3->setMaximumSize(QSize(173, 132));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        label_7 = new QLabel(widget_3);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        hpBar = new QProgressBar(widget_3);
        hpBar->setObjectName("hpBar");
        hpBar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        hpBar->setValue(24);

        gridLayout_2->addWidget(hpBar, 0, 1, 1, 1);

        label_8 = new QLabel(widget_3);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        hungryBar = new QProgressBar(widget_3);
        hungryBar->setObjectName("hungryBar");
        hungryBar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        hungryBar->setValue(24);

        gridLayout_2->addWidget(hungryBar, 1, 1, 1, 1);

        backButton = new QPushButton(State);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(280, 340, 80, 29));
        backButton->setMaximumSize(QSize(92, 73));
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(State);

        QMetaObject::connectSlotsByName(State);
    } // setupUi

    void retranslateUi(QWidget *State)
    {
        State->setWindowTitle(QCoreApplication::translate("State", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("State", "\345\201\245\345\272\267\345\200\274", nullptr));
        label_8->setText(QCoreApplication::translate("State", "\351\245\261\351\243\237\345\272\246", nullptr));
        backButton->setText(QCoreApplication::translate("State", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class State: public Ui_State {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATE_H
