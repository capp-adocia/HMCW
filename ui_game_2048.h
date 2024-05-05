/********************************************************************************
** Form generated from reading UI file 'game_2048.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_2048_H
#define UI_GAME_2048_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game_2048
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QFrame *frame_1;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_4;
    QFrame *frame_5;
    QFrame *frame_6;
    QFrame *frame_7;
    QFrame *frame_8;
    QFrame *frame_9;
    QFrame *frame_10;
    QFrame *frame_11;
    QFrame *frame_12;
    QFrame *frame_13;
    QFrame *frame_14;
    QFrame *frame_15;
    QFrame *frame_16;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *reStartButton;

    void setupUi(QWidget *Game_2048)
    {
        if (Game_2048->objectName().isEmpty())
            Game_2048->setObjectName("Game_2048");
        Game_2048->resize(560, 654);
        Game_2048->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);"));
        gridLayout_2 = new QGridLayout(Game_2048);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Game_2048);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(560, 560));
        widget->setMaximumSize(QSize(560, 560));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 80, 80);\n"
""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        frame_1 = new QFrame(widget);
        frame_1->setObjectName("frame_1");
        frame_1->setMinimumSize(QSize(120, 120));
        frame_1->setMaximumSize(QSize(120, 120));
        frame_1->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);\n"
""));
        frame_1->setFrameShape(QFrame::StyledPanel);
        frame_1->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_1, 0, 0, 1, 1);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(120, 120));
        frame_2->setMaximumSize(QSize(120, 120));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_2, 0, 1, 1, 1);

        frame_3 = new QFrame(widget);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(120, 120));
        frame_3->setMaximumSize(QSize(120, 120));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_3, 0, 2, 1, 1);

        frame_4 = new QFrame(widget);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(120, 120));
        frame_4->setMaximumSize(QSize(120, 120));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_4, 0, 3, 1, 1);

        frame_5 = new QFrame(widget);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(120, 120));
        frame_5->setMaximumSize(QSize(120, 120));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_5, 1, 0, 1, 1);

        frame_6 = new QFrame(widget);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(120, 120));
        frame_6->setMaximumSize(QSize(120, 120));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_6, 1, 1, 1, 1);

        frame_7 = new QFrame(widget);
        frame_7->setObjectName("frame_7");
        frame_7->setMinimumSize(QSize(120, 120));
        frame_7->setMaximumSize(QSize(120, 120));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_7, 1, 2, 1, 1);

        frame_8 = new QFrame(widget);
        frame_8->setObjectName("frame_8");
        frame_8->setMinimumSize(QSize(120, 120));
        frame_8->setMaximumSize(QSize(120, 120));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_8, 1, 3, 1, 1);

        frame_9 = new QFrame(widget);
        frame_9->setObjectName("frame_9");
        frame_9->setMinimumSize(QSize(120, 120));
        frame_9->setMaximumSize(QSize(120, 120));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_9, 2, 0, 1, 1);

        frame_10 = new QFrame(widget);
        frame_10->setObjectName("frame_10");
        frame_10->setMinimumSize(QSize(120, 120));
        frame_10->setMaximumSize(QSize(120, 120));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_10, 2, 1, 1, 1);

        frame_11 = new QFrame(widget);
        frame_11->setObjectName("frame_11");
        frame_11->setMinimumSize(QSize(120, 120));
        frame_11->setMaximumSize(QSize(120, 120));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_11, 2, 2, 1, 1);

        frame_12 = new QFrame(widget);
        frame_12->setObjectName("frame_12");
        frame_12->setMinimumSize(QSize(120, 120));
        frame_12->setMaximumSize(QSize(120, 120));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_12, 2, 3, 1, 1);

        frame_13 = new QFrame(widget);
        frame_13->setObjectName("frame_13");
        frame_13->setMinimumSize(QSize(120, 120));
        frame_13->setMaximumSize(QSize(120, 120));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_13, 3, 0, 1, 1);

        frame_14 = new QFrame(widget);
        frame_14->setObjectName("frame_14");
        frame_14->setMinimumSize(QSize(120, 120));
        frame_14->setMaximumSize(QSize(120, 120));
        frame_14->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_14, 3, 1, 1, 1);

        frame_15 = new QFrame(widget);
        frame_15->setObjectName("frame_15");
        frame_15->setMinimumSize(QSize(120, 120));
        frame_15->setMaximumSize(QSize(120, 120));
        frame_15->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_15, 3, 2, 1, 1);

        frame_16 = new QFrame(widget);
        frame_16->setObjectName("frame_16");
        frame_16->setMinimumSize(QSize(120, 120));
        frame_16->setMaximumSize(QSize(120, 120));
        frame_16->setStyleSheet(QString::fromUtf8("background-color: rgb(203, 203, 203);"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_16, 3, 3, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(Game_2048);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(560, 0));
        widget_2->setMaximumSize(QSize(560, 72));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        reStartButton = new QPushButton(widget_2);
        reStartButton->setObjectName("reStartButton");
        reStartButton->setMinimumSize(QSize(281, 50));
        reStartButton->setMaximumSize(QSize(281, 50));
        QFont font;
        font.setPointSize(15);
        reStartButton->setFont(font);
        reStartButton->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout_3->addWidget(reStartButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 0, 0, 1, 1);


        retranslateUi(Game_2048);

        QMetaObject::connectSlotsByName(Game_2048);
    } // setupUi

    void retranslateUi(QWidget *Game_2048)
    {
        Game_2048->setWindowTitle(QCoreApplication::translate("Game_2048", "Form", nullptr));
        reStartButton->setText(QCoreApplication::translate("Game_2048", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game_2048: public Ui_Game_2048 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_2048_H
