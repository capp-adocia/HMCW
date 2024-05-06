/********************************************************************************
** Form generated from reading UI file 'bar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAR_H
#define UI_BAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bar
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *health_bar;
    QWidget *hungry_bar;
    QWidget *hp_bar;
    QWidget *exp_bar;
    QLabel *label_01;
    QLabel *label_02;
    QLabel *label_03;
    QLabel *label_04;
    QLabel *label_06;
    QLabel *label_08;
    QLabel *label_05;
    QLabel *label_07;
    QLabel *label_09;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_12;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *levelLabel;
    QWidget *object_bar;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QFrame *frame_7;
    QFrame *tool;
    QToolButton *toolButton;
    QFrame *frame_3;
    QFrame *frame_6;
    QFrame *frame_1;
    QFrame *frame_9;
    QFrame *frame_5;
    QFrame *frame_8;
    QFrame *frame_2;
    QFrame *frame_4;

    void setupUi(QMainWindow *Bar)
    {
        if (Bar->objectName().isEmpty())
            Bar->setObjectName("Bar");
        Bar->resize(611, 120);
        Bar->setMinimumSize(QSize(611, 120));
        Bar->setMaximumSize(QSize(611, 122));
        Bar->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        centralwidget = new QWidget(Bar);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        health_bar = new QWidget(centralwidget);
        health_bar->setObjectName("health_bar");
        health_bar->setMinimumSize(QSize(611, 50));
        health_bar->setMaximumSize(QSize(611, 50));
        health_bar->setCursor(QCursor(Qt::OpenHandCursor));
        health_bar->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border:0;"));
        hungry_bar = new QWidget(health_bar);
        hungry_bar->setObjectName("hungry_bar");
        hungry_bar->setGeometry(QRect(351, 0, 258, 38));
        hungry_bar->setMinimumSize(QSize(258, 38));
        hungry_bar->setMaximumSize(QSize(258, 38));
        hungry_bar->setLayoutDirection(Qt::RightToLeft);
        hungry_bar->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        hp_bar = new QWidget(health_bar);
        hp_bar->setObjectName("hp_bar");
        hp_bar->setGeometry(QRect(5, 0, 270, 38));
        hp_bar->setMinimumSize(QSize(270, 38));
        hp_bar->setMaximumSize(QSize(270, 38));
        hp_bar->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        exp_bar = new QWidget(health_bar);
        exp_bar->setObjectName("exp_bar");
        exp_bar->setGeometry(QRect(5, 32, 611, 18));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exp_bar->sizePolicy().hasHeightForWidth());
        exp_bar->setSizePolicy(sizePolicy);
        exp_bar->setMinimumSize(QSize(611, 18));
        exp_bar->setMaximumSize(QSize(611, 18));
        exp_bar->setContextMenuPolicy(Qt::DefaultContextMenu);
        exp_bar->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border-radius: 12px;"));
        label_01 = new QLabel(exp_bar);
        label_01->setObjectName("label_01");
        label_01->setGeometry(QRect(-1, 0, 39, 14));
        label_01->setMinimumSize(QSize(39, 14));
        label_01->setMaximumSize(QSize(37, 14));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        label_01->setFont(font);
        label_01->setMouseTracking(false);
        label_01->setTabletTracking(false);
        label_01->setAutoFillBackground(false);
        label_01->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_01->setScaledContents(false);
        label_01->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_02 = new QLabel(exp_bar);
        label_02->setObjectName("label_02");
        label_02->setGeometry(QRect(37, 0, 39, 14));
        label_02->setMinimumSize(QSize(39, 14));
        label_02->setMaximumSize(QSize(37, 14));
        label_02->setFont(font);
        label_02->setMouseTracking(false);
        label_02->setTabletTracking(false);
        label_02->setAutoFillBackground(false);
        label_02->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_02->setScaledContents(false);
        label_02->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_03 = new QLabel(exp_bar);
        label_03->setObjectName("label_03");
        label_03->setGeometry(QRect(75, 0, 39, 14));
        label_03->setMinimumSize(QSize(39, 14));
        label_03->setMaximumSize(QSize(38, 14));
        label_03->setFont(font);
        label_03->setMouseTracking(false);
        label_03->setTabletTracking(false);
        label_03->setAutoFillBackground(false);
        label_03->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_03->setScaledContents(false);
        label_03->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_04 = new QLabel(exp_bar);
        label_04->setObjectName("label_04");
        label_04->setGeometry(QRect(113, 0, 39, 14));
        label_04->setMinimumSize(QSize(39, 14));
        label_04->setMaximumSize(QSize(38, 14));
        label_04->setFont(font);
        label_04->setMouseTracking(false);
        label_04->setTabletTracking(false);
        label_04->setAutoFillBackground(false);
        label_04->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_04->setScaledContents(false);
        label_04->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_06 = new QLabel(exp_bar);
        label_06->setObjectName("label_06");
        label_06->setGeometry(QRect(189, 0, 39, 14));
        label_06->setMinimumSize(QSize(39, 14));
        label_06->setMaximumSize(QSize(38, 14));
        label_06->setFont(font);
        label_06->setMouseTracking(false);
        label_06->setTabletTracking(false);
        label_06->setAutoFillBackground(false);
        label_06->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_06->setScaledContents(false);
        label_06->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_08 = new QLabel(exp_bar);
        label_08->setObjectName("label_08");
        label_08->setGeometry(QRect(265, 0, 39, 14));
        label_08->setMinimumSize(QSize(39, 14));
        label_08->setMaximumSize(QSize(38, 14));
        label_08->setFont(font);
        label_08->setMouseTracking(false);
        label_08->setTabletTracking(false);
        label_08->setAutoFillBackground(false);
        label_08->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_08->setScaledContents(false);
        label_08->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_05 = new QLabel(exp_bar);
        label_05->setObjectName("label_05");
        label_05->setGeometry(QRect(151, 0, 39, 14));
        label_05->setMinimumSize(QSize(39, 14));
        label_05->setMaximumSize(QSize(38, 14));
        label_05->setFont(font);
        label_05->setMouseTracking(false);
        label_05->setTabletTracking(false);
        label_05->setAutoFillBackground(false);
        label_05->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_05->setScaledContents(false);
        label_05->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_07 = new QLabel(exp_bar);
        label_07->setObjectName("label_07");
        label_07->setGeometry(QRect(227, 0, 39, 14));
        label_07->setMinimumSize(QSize(39, 14));
        label_07->setMaximumSize(QSize(38, 14));
        label_07->setFont(font);
        label_07->setMouseTracking(false);
        label_07->setTabletTracking(false);
        label_07->setAutoFillBackground(false);
        label_07->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_07->setScaledContents(false);
        label_07->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_09 = new QLabel(exp_bar);
        label_09->setObjectName("label_09");
        label_09->setGeometry(QRect(303, 0, 39, 14));
        label_09->setMinimumSize(QSize(39, 14));
        label_09->setMaximumSize(QSize(38, 14));
        label_09->setFont(font);
        label_09->setMouseTracking(false);
        label_09->setTabletTracking(false);
        label_09->setAutoFillBackground(false);
        label_09->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_09->setScaledContents(false);
        label_09->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_11 = new QLabel(exp_bar);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(380, 0, 39, 14));
        label_11->setMinimumSize(QSize(39, 14));
        label_11->setMaximumSize(QSize(38, 14));
        label_11->setFont(font);
        label_11->setMouseTracking(false);
        label_11->setTabletTracking(false);
        label_11->setAutoFillBackground(false);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_11->setScaledContents(false);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10 = new QLabel(exp_bar);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(342, 0, 39, 14));
        label_10->setMinimumSize(QSize(39, 14));
        label_10->setMaximumSize(QSize(38, 14));
        label_10->setFont(font);
        label_10->setMouseTracking(false);
        label_10->setTabletTracking(false);
        label_10->setAutoFillBackground(false);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_10->setScaledContents(false);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_13 = new QLabel(exp_bar);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(456, 0, 39, 14));
        label_13->setMinimumSize(QSize(39, 14));
        label_13->setMaximumSize(QSize(38, 14));
        label_13->setFont(font);
        label_13->setMouseTracking(false);
        label_13->setTabletTracking(false);
        label_13->setAutoFillBackground(false);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_13->setScaledContents(false);
        label_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_15 = new QLabel(exp_bar);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(532, 0, 39, 14));
        label_15->setMinimumSize(QSize(39, 14));
        label_15->setMaximumSize(QSize(38, 14));
        label_15->setFont(font);
        label_15->setMouseTracking(false);
        label_15->setTabletTracking(false);
        label_15->setAutoFillBackground(false);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_15->setScaledContents(false);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12 = new QLabel(exp_bar);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(418, 0, 39, 14));
        label_12->setMinimumSize(QSize(39, 14));
        label_12->setMaximumSize(QSize(38, 14));
        label_12->setFont(font);
        label_12->setMouseTracking(false);
        label_12->setTabletTracking(false);
        label_12->setAutoFillBackground(false);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_12->setScaledContents(false);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_16 = new QLabel(exp_bar);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(569, 0, 36, 14));
        label_16->setMinimumSize(QSize(36, 14));
        label_16->setMaximumSize(QSize(36, 14));
        label_16->setFont(font);
        label_16->setMouseTracking(false);
        label_16->setTabletTracking(false);
        label_16->setAutoFillBackground(false);
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_16->setScaledContents(false);
        label_16->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_14 = new QLabel(exp_bar);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(494, 0, 39, 14));
        label_14->setMinimumSize(QSize(39, 14));
        label_14->setMaximumSize(QSize(38, 14));
        label_14->setFont(font);
        label_14->setMouseTracking(false);
        label_14->setTabletTracking(false);
        label_14->setAutoFillBackground(false);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 50, 20);\n"
"border:2px solid rgb(0, 0, 0);\n"
"border-radius:2px;"));
        label_14->setScaledContents(false);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        levelLabel = new QLabel(health_bar);
        levelLabel->setObjectName("levelLabel");
        levelLabel->setGeometry(QRect(290, 13, 40, 15));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(levelLabel->sizePolicy().hasHeightForWidth());
        levelLabel->setSizePolicy(sizePolicy1);
        levelLabel->setMinimumSize(QSize(40, 15));
        levelLabel->setMaximumSize(QSize(40, 15));
        levelLabel->setBaseSize(QSize(0, 0));
        levelLabel->setStyleSheet(QString::fromUtf8("background-color: rgba(129, 169, 255,0);"));
        levelLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(health_bar);

        object_bar = new QWidget(centralwidget);
        object_bar->setObjectName("object_bar");
        object_bar->setMinimumSize(QSize(0, 72));
        object_bar->setMaximumSize(QSize(611, 72));
        object_bar->setStyleSheet(QString::fromUtf8("border:4px solid rgba(0, 0, 0,0.8);\n"
"border-radius: 4px;"));
        gridLayout_3 = new QGridLayout(object_bar);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(object_bar);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 64));
        frame->setMaximumSize(QSize(606, 64));
        frame->setCursor(QCursor(Qt::ArrowCursor));
        frame->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(147, 146, 145);\n"
"background-color: rgba(0, 0, 0, 0);\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        frame_7 = new QFrame(frame);
        frame_7->setObjectName("frame_7");
        frame_7->setMinimumSize(QSize(60, 60));
        frame_7->setMaximumSize(QSize(60, 60));
        frame_7->setCursor(QCursor(Qt::ArrowCursor));
        frame_7->setStyleSheet(QString::fromUtf8(""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_7, 0, 6, 1, 1);

        tool = new QFrame(frame);
        tool->setObjectName("tool");
        tool->setMinimumSize(QSize(60, 60));
        tool->setMaximumSize(QSize(60, 60));
        tool->setCursor(QCursor(Qt::OpenHandCursor));
        tool->setStyleSheet(QString::fromUtf8("background-color:rgb(213, 213, 213);\n"
"border: 6px solid rgb(154, 154, 154);\n"
"border-top: 10px solid rgb(154, 154, 154);\n"
"border-radius:8px;"));
        tool->setFrameShape(QFrame::StyledPanel);
        tool->setFrameShadow(QFrame::Raised);
        toolButton = new QToolButton(tool);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(6, 17, 48, 35));
        toolButton->setMinimumSize(QSize(48, 35));
        toolButton->setMaximumSize(QSize(48, 35));
        QFont font1;
        font1.setPointSize(30);
        font1.setWeight(QFont::Black);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        toolButton->setFont(font1);
        toolButton->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton->setLayoutDirection(Qt::LeftToRight);
        toolButton->setStyleSheet(QString::fromUtf8("background-color:rgb(213, 213, 213);\n"
"border: 0px;\n"
"border-radius:8px;"));
        toolButton->setIconSize(QSize(91, 83));
        toolButton->setAutoRepeatDelay(285);
        toolButton->setPopupMode(QToolButton::InstantPopup);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
        toolButton->setAutoRaise(true);
        toolButton->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(tool, 0, 9, 1, 1);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(60, 60));
        frame_3->setMaximumSize(QSize(60, 60));
        frame_3->setCursor(QCursor(Qt::ArrowCursor));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_3, 0, 2, 1, 1);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(60, 60));
        frame_6->setMaximumSize(QSize(60, 60));
        frame_6->setCursor(QCursor(Qt::ArrowCursor));
        frame_6->setStyleSheet(QString::fromUtf8(""));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_6, 0, 5, 1, 1);

        frame_1 = new QFrame(frame);
        frame_1->setObjectName("frame_1");
        frame_1->setMinimumSize(QSize(60, 60));
        frame_1->setMaximumSize(QSize(60, 60));
        frame_1->setCursor(QCursor(Qt::ArrowCursor));
        frame_1->setStyleSheet(QString::fromUtf8(""));
        frame_1->setFrameShape(QFrame::StyledPanel);
        frame_1->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_1, 0, 0, 1, 1);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName("frame_9");
        frame_9->setMinimumSize(QSize(60, 60));
        frame_9->setMaximumSize(QSize(60, 60));
        frame_9->setCursor(QCursor(Qt::ArrowCursor));
        frame_9->setStyleSheet(QString::fromUtf8(""));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_9, 0, 8, 1, 1);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(60, 60));
        frame_5->setMaximumSize(QSize(60, 60));
        frame_5->setCursor(QCursor(Qt::ArrowCursor));
        frame_5->setStyleSheet(QString::fromUtf8(""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(0);

        gridLayout->addWidget(frame_5, 0, 4, 1, 1);

        frame_8 = new QFrame(frame);
        frame_8->setObjectName("frame_8");
        frame_8->setMinimumSize(QSize(60, 60));
        frame_8->setMaximumSize(QSize(60, 60));
        frame_8->setCursor(QCursor(Qt::ArrowCursor));
        frame_8->setStyleSheet(QString::fromUtf8(""));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_8->setLineWidth(0);

        gridLayout->addWidget(frame_8, 0, 7, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(60, 60));
        frame_2->setMaximumSize(QSize(60, 60));
        frame_2->setCursor(QCursor(Qt::ArrowCursor));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_2, 0, 1, 1, 1);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(60, 60));
        frame_4->setMaximumSize(QSize(60, 60));
        frame_4->setCursor(QCursor(Qt::ArrowCursor));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_4, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame, 0, 1, 1, 1);


        verticalLayout->addWidget(object_bar);

        Bar->setCentralWidget(centralwidget);

        retranslateUi(Bar);

        QMetaObject::connectSlotsByName(Bar);
    } // setupUi

    void retranslateUi(QMainWindow *Bar)
    {
        Bar->setWindowTitle(QCoreApplication::translate("Bar", "Bar", nullptr));
#if QT_CONFIG(tooltip)
        label_01->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_01->setText(QString());
#if QT_CONFIG(tooltip)
        label_02->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_02->setText(QString());
#if QT_CONFIG(tooltip)
        label_03->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_03->setText(QString());
#if QT_CONFIG(tooltip)
        label_04->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_04->setText(QString());
#if QT_CONFIG(tooltip)
        label_06->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_06->setText(QString());
#if QT_CONFIG(tooltip)
        label_08->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_08->setText(QString());
#if QT_CONFIG(tooltip)
        label_05->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_05->setText(QString());
#if QT_CONFIG(tooltip)
        label_07->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_07->setText(QString());
#if QT_CONFIG(tooltip)
        label_09->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_09->setText(QString());
#if QT_CONFIG(tooltip)
        label_11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_11->setText(QString());
#if QT_CONFIG(tooltip)
        label_10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_10->setText(QString());
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_13->setText(QString());
#if QT_CONFIG(tooltip)
        label_15->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_15->setText(QString());
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_12->setText(QString());
#if QT_CONFIG(tooltip)
        label_16->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_16->setText(QString());
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_14->setText(QString());
        levelLabel->setText(QString());
        toolButton->setText(QCoreApplication::translate("Bar", "\343\200\202\343\200\202\343\200\202", "\350\256\276\347\275\256"));
    } // retranslateUi

};

namespace Ui {
    class Bar: public Ui_Bar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAR_H
