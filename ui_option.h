/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Option
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_10;
    QWidget *widget_7;
    QSlider *mealTimeSlider;
    QLabel *mealTimeLabel;
    QWidget *widget_6;
    QSlider *dinnerSlider;
    QLabel *dinnerLabel;
    QWidget *widget_9;
    QSlider *breakTimeSlider;
    QLabel *breakTimeLabel;
    QWidget *widget_2;
    QSlider *breakfastSlider;
    QLabel *breakfastLabel;
    QWidget *widget_8;
    QSlider *workTimeSlider;
    QLabel *workTimeLabel;
    QWidget *widget_3;
    QSlider *lunchSlider;
    QLabel *lunchLabel;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_11;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QCheckBox *startCheckBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Option)
    {
        if (Option->objectName().isEmpty())
            Option->setObjectName("Option");
        Option->resize(850, 560);
        Option->setStyleSheet(QString::fromUtf8("background-color: rgba(29, 29, 29, 0.5);"));
        gridLayout = new QGridLayout(Option);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(Option);
        widget_5->setObjectName("widget_5");
        widget_5->setMaximumSize(QSize(16777215, 16777215));
        widget_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        widget = new QWidget(widget_5);
        widget->setObjectName("widget");
        QFont font;
        font.setPointSize(9);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName("widget_7");
        widget_7->setMinimumSize(QSize(281, 51));
        widget_7->setMaximumSize(QSize(281, 51));
        widget_7->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 1, 2);"));
        mealTimeSlider = new QSlider(widget_7);
        mealTimeSlider->setObjectName("mealTimeSlider");
        mealTimeSlider->setGeometry(QRect(0, 0, 279, 48));
        mealTimeSlider->setMinimumSize(QSize(279, 48));
        mealTimeSlider->setMaximumSize(QSize(279, 48));
        mealTimeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 48px;                   /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\351\253\230\345\272\246 */\n"
"    margin: 0px 0px;                 /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\345\244\226\350\276\271\350\267\235 */\n"
"  background-color:  rgb(44, 44, 44);     /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    /* \346\273\221\345\235\227\346\240\267\345\274\217 */\n"
"    width: 20px;                   /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246 */\n"
"    height: 40px;                  /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\351\253\230\345\272\246 */\n"
"    background-color: rgb(106, 108, 107);     /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    margin: 46px 0px;        "
                        "       /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\236\202\347\233\264\345\261\205\344\270\255 */	\n"
"	border: 1px solid rgb(190, 190, 190);\n"
"}"));
        mealTimeSlider->setMinimum(1200);
        mealTimeSlider->setMaximum(3600);
        mealTimeSlider->setSingleStep(60);
        mealTimeSlider->setPageStep(600);
        mealTimeSlider->setValue(1200);
        mealTimeSlider->setSliderPosition(1200);
        mealTimeSlider->setOrientation(Qt::Horizontal);
        mealTimeSlider->setInvertedAppearance(false);
        mealTimeSlider->setInvertedControls(false);
        mealTimeSlider->setTickPosition(QSlider::NoTicks);
        mealTimeLabel = new QLabel(widget_7);
        mealTimeLabel->setObjectName("mealTimeLabel");
        mealTimeLabel->setGeometry(QRect(64, 10, 161, 15));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mealTimeLabel->sizePolicy().hasHeightForWidth());
        mealTimeLabel->setSizePolicy(sizePolicy);
        mealTimeLabel->setMinimumSize(QSize(0, 15));
        mealTimeLabel->setMaximumSize(QSize(16777215, 15));
        mealTimeLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:0;"));
        mealTimeLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(widget_7, 3, 1, 1, 1);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(281, 51));
        widget_6->setMaximumSize(QSize(281, 51));
        widget_6->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 1, 2);"));
        dinnerSlider = new QSlider(widget_6);
        dinnerSlider->setObjectName("dinnerSlider");
        dinnerSlider->setGeometry(QRect(0, 0, 279, 48));
        dinnerSlider->setMinimumSize(QSize(279, 48));
        dinnerSlider->setMaximumSize(QSize(279, 48));
        dinnerSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 48px;                   /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\351\253\230\345\272\246 */\n"
"    margin: 0px 0px;                 /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\345\244\226\350\276\271\350\267\235 */\n"
"  background-color:  rgb(44, 44, 44);     /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    /* \346\273\221\345\235\227\346\240\267\345\274\217 */\n"
"    width: 20px;                   /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246 */\n"
"    height: 40px;                  /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\351\253\230\345\272\246 */\n"
"    background-color: rgb(106, 108, 107);     /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    margin: 46px 0px;        "
                        "       /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\236\202\347\233\264\345\261\205\344\270\255 */	\n"
"	border: 1px solid rgb(190, 190, 190);\n"
"}"));
        dinnerSlider->setMinimum(57600);
        dinnerSlider->setMaximum(72000);
        dinnerSlider->setSingleStep(60);
        dinnerSlider->setPageStep(600);
        dinnerSlider->setSliderPosition(57600);
        dinnerSlider->setOrientation(Qt::Horizontal);
        dinnerSlider->setInvertedAppearance(false);
        dinnerSlider->setInvertedControls(false);
        dinnerSlider->setTickPosition(QSlider::NoTicks);
        dinnerLabel = new QLabel(widget_6);
        dinnerLabel->setObjectName("dinnerLabel");
        dinnerLabel->setGeometry(QRect(61, 10, 161, 15));
        dinnerLabel->setMinimumSize(QSize(0, 15));
        dinnerLabel->setMaximumSize(QSize(16777215, 15));
        dinnerLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:0;"));
        dinnerLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(widget_6, 2, 1, 1, 1);

        widget_9 = new QWidget(widget);
        widget_9->setObjectName("widget_9");
        widget_9->setMinimumSize(QSize(281, 51));
        widget_9->setMaximumSize(QSize(281, 51));
        widget_9->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 1, 2);"));
        breakTimeSlider = new QSlider(widget_9);
        breakTimeSlider->setObjectName("breakTimeSlider");
        breakTimeSlider->setGeometry(QRect(0, 0, 279, 48));
        breakTimeSlider->setMinimumSize(QSize(279, 48));
        breakTimeSlider->setMaximumSize(QSize(279, 48));
        breakTimeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 48px;                   /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\351\253\230\345\272\246 */\n"
"    margin: 0px 0px;                 /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\345\244\226\350\276\271\350\267\235 */\n"
"  background-color:  rgb(44, 44, 44);     /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    /* \346\273\221\345\235\227\346\240\267\345\274\217 */\n"
"    width: 20px;                   /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246 */\n"
"    height: 40px;                  /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\351\253\230\345\272\246 */\n"
"    background-color: rgb(106, 108, 107);     /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    margin: 46px 0px;        "
                        "       /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\236\202\347\233\264\345\261\205\344\270\255 */	\n"
"	border: 1px solid rgb(190, 190, 190);\n"
"}"));
        breakTimeSlider->setMinimum(300);
        breakTimeSlider->setMaximum(3600);
        breakTimeSlider->setSingleStep(60);
        breakTimeSlider->setPageStep(600);
        breakTimeSlider->setValue(300);
        breakTimeSlider->setSliderPosition(300);
        breakTimeSlider->setOrientation(Qt::Horizontal);
        breakTimeSlider->setInvertedAppearance(false);
        breakTimeSlider->setInvertedControls(false);
        breakTimeSlider->setTickPosition(QSlider::NoTicks);
        breakTimeLabel = new QLabel(widget_9);
        breakTimeLabel->setObjectName("breakTimeLabel");
        breakTimeLabel->setGeometry(QRect(64, 10, 161, 15));
        breakTimeLabel->setMinimumSize(QSize(0, 15));
        breakTimeLabel->setMaximumSize(QSize(16777215, 15));
        breakTimeLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:0;"));
        breakTimeLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(widget_9, 5, 1, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(281, 51));
        widget_2->setMaximumSize(QSize(281, 51));
        widget_2->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 1, 2);"));
        breakfastSlider = new QSlider(widget_2);
        breakfastSlider->setObjectName("breakfastSlider");
        breakfastSlider->setGeometry(QRect(0, 0, 279, 48));
        breakfastSlider->setMinimumSize(QSize(279, 48));
        breakfastSlider->setMaximumSize(QSize(279, 48));
        breakfastSlider->setFont(font);
        breakfastSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 48px;                   /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\351\253\230\345\272\246 */\n"
"    margin: 0px 0px;                 /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\345\244\226\350\276\271\350\267\235 */\n"
"  background-color:  rgb(44, 44, 44);     /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    /* \346\273\221\345\235\227\346\240\267\345\274\217 */\n"
"    width: 20px;                   /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246 */\n"
"    height: 40px;                  /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\351\253\230\345\272\246 */\n"
"    background-color: rgb(106, 108, 107);     /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    margin: 46px 0px;        "
                        "       /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\236\202\347\233\264\345\261\205\344\270\255 */	\n"
"	border: 1px solid rgb(190, 190, 190);\n"
"}"));
        breakfastSlider->setMinimum(25200);
        breakfastSlider->setMaximum(32400);
        breakfastSlider->setSingleStep(60);
        breakfastSlider->setPageStep(600);
        breakfastSlider->setSliderPosition(25200);
        breakfastSlider->setOrientation(Qt::Horizontal);
        breakfastSlider->setInvertedAppearance(false);
        breakfastSlider->setInvertedControls(false);
        breakfastSlider->setTickPosition(QSlider::NoTicks);
        breakfastLabel = new QLabel(widget_2);
        breakfastLabel->setObjectName("breakfastLabel");
        breakfastLabel->setGeometry(QRect(96, 10, 91, 15));
        breakfastLabel->setMinimumSize(QSize(0, 15));
        breakfastLabel->setMaximumSize(QSize(16777215, 15));
        breakfastLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:0;"));
        breakfastLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(widget_2, 0, 1, 1, 1);

        widget_8 = new QWidget(widget);
        widget_8->setObjectName("widget_8");
        widget_8->setMinimumSize(QSize(281, 51));
        widget_8->setMaximumSize(QSize(281, 51));
        widget_8->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 1, 2);"));
        workTimeSlider = new QSlider(widget_8);
        workTimeSlider->setObjectName("workTimeSlider");
        workTimeSlider->setGeometry(QRect(0, 0, 279, 48));
        workTimeSlider->setMinimumSize(QSize(279, 48));
        workTimeSlider->setMaximumSize(QSize(279, 48));
        workTimeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 48px;                   /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\351\253\230\345\272\246 */\n"
"    margin: 0px 0px;                 /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\345\244\226\350\276\271\350\267\235 */\n"
"  background-color:  rgb(44, 44, 44);     /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    /* \346\273\221\345\235\227\346\240\267\345\274\217 */\n"
"    width: 20px;                   /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246 */\n"
"    height: 40px;                  /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\351\253\230\345\272\246 */\n"
"    background-color: rgb(106, 108, 107);     /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    margin: 46px 0px;        "
                        "       /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\236\202\347\233\264\345\261\205\344\270\255 */	\n"
"	border: 1px solid rgb(190, 190, 190);\n"
"}"));
        workTimeSlider->setMinimum(1800);
        workTimeSlider->setMaximum(10800);
        workTimeSlider->setSingleStep(30);
        workTimeSlider->setPageStep(600);
        workTimeSlider->setValue(1800);
        workTimeSlider->setSliderPosition(1800);
        workTimeSlider->setOrientation(Qt::Horizontal);
        workTimeSlider->setInvertedAppearance(false);
        workTimeSlider->setInvertedControls(false);
        workTimeSlider->setTickPosition(QSlider::NoTicks);
        workTimeLabel = new QLabel(widget_8);
        workTimeLabel->setObjectName("workTimeLabel");
        workTimeLabel->setGeometry(QRect(64, 10, 161, 15));
        workTimeLabel->setMinimumSize(QSize(0, 15));
        workTimeLabel->setMaximumSize(QSize(16777215, 15));
        workTimeLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:0;"));
        workTimeLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(widget_8, 4, 1, 1, 1);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(281, 51));
        widget_3->setMaximumSize(QSize(281, 51));
        widget_3->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 1, 2);"));
        lunchSlider = new QSlider(widget_3);
        lunchSlider->setObjectName("lunchSlider");
        lunchSlider->setGeometry(QRect(0, 0, 279, 48));
        lunchSlider->setMinimumSize(QSize(279, 48));
        lunchSlider->setMaximumSize(QSize(279, 48));
        lunchSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    height: 48px;                   /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\351\253\230\345\272\246 */\n"
"    margin: 0px 0px;                 /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\345\244\226\350\276\271\350\267\235 */\n"
"  background-color:  rgb(44, 44, 44);     /* \350\256\276\347\275\256\350\275\250\351\201\223\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    /* \346\273\221\345\235\227\346\240\267\345\274\217 */\n"
"    width: 20px;                   /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246 */\n"
"    height: 40px;                  /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\351\253\230\345\272\246 */\n"
"    background-color: rgb(106, 108, 107);     /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    margin: 46px 0px;        "
                        "       /* \350\256\276\347\275\256\346\273\221\345\235\227\347\232\204\345\236\202\347\233\264\345\261\205\344\270\255 */	\n"
"	border: 1px solid rgb(190, 190, 190);\n"
"}"));
        lunchSlider->setMinimum(39600);
        lunchSlider->setMaximum(46800);
        lunchSlider->setSingleStep(60);
        lunchSlider->setPageStep(600);
        lunchSlider->setValue(39652);
        lunchSlider->setSliderPosition(39652);
        lunchSlider->setOrientation(Qt::Horizontal);
        lunchSlider->setInvertedAppearance(false);
        lunchSlider->setInvertedControls(false);
        lunchSlider->setTickPosition(QSlider::NoTicks);
        lunchLabel = new QLabel(widget_3);
        lunchLabel->setObjectName("lunchLabel");
        lunchLabel->setGeometry(QRect(61, 10, 161, 15));
        lunchLabel->setMinimumSize(QSize(0, 15));
        lunchLabel->setMaximumSize(QSize(16777215, 15));
        lunchLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255,0);\n"
"border:0;"));
        lunchLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(widget_3, 1, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);


        gridLayout_5->addWidget(widget, 1, 1, 1, 1);

        backButton = new QPushButton(widget_5);
        backButton->setObjectName("backButton");
        backButton->setMinimumSize(QSize(600, 50));
        backButton->setMaximumSize(QSize(600, 50));
        QFont font2;
        font2.setPointSize(16);
        backButton->setFont(font2);
        backButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_5->addWidget(backButton, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(104, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setObjectName("gridLayout_3");
        startCheckBox = new QCheckBox(widget_4);
        startCheckBox->setObjectName("startCheckBox");
        startCheckBox->setMinimumSize(QSize(90, 0));
        startCheckBox->setFont(font2);
        startCheckBox->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(startCheckBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget_4, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 4, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(104, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 0, 1, 1);


        gridLayout->addWidget(widget_5, 0, 0, 1, 1);


        retranslateUi(Option);

        QMetaObject::connectSlotsByName(Option);
    } // setupUi

    void retranslateUi(QWidget *Option)
    {
        Option->setWindowTitle(QCoreApplication::translate("Option", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Option", "\344\274\221\346\201\257\346\227\266\351\225\277 5\345\210\206\351\222\237\345\210\2601\345\260\217\346\227\266", nullptr));
        label_10->setText(QCoreApplication::translate("Option", "\346\231\232\351\244\220\346\227\266\351\227\264  4\347\202\271 \345\210\2608\347\202\271", nullptr));
        mealTimeLabel->setText(QCoreApplication::translate("Option", "\347\224\250\351\244\220\346\227\266\351\227\264", nullptr));
        dinnerLabel->setText(QCoreApplication::translate("Option", "\346\231\232\351\244\220", nullptr));
        breakTimeLabel->setText(QCoreApplication::translate("Option", "\344\274\221\346\201\257\346\227\266\351\227\264", nullptr));
        breakfastLabel->setText(QCoreApplication::translate("Option", "\346\227\251\351\244\220", nullptr));
        workTimeLabel->setText(QCoreApplication::translate("Option", "\345\267\245\344\275\234\346\227\266\351\227\264", nullptr));
        lunchLabel->setText(QCoreApplication::translate("Option", "\345\215\210\351\244\220", nullptr));
        label_6->setText(QCoreApplication::translate("Option", "\346\227\251\351\244\220\346\227\266\351\227\264 \344\273\216 7 \347\202\271\345\210\260 9\347\202\271", nullptr));
        label->setText(QCoreApplication::translate("Option", "\345\267\245\344\275\234\346\227\266\351\225\277 \345\215\212\345\260\217\346\227\266 \345\210\2603\345\260\217\346\227\266", nullptr));
        label_9->setText(QCoreApplication::translate("Option", "\345\215\210\351\244\220\346\227\266\351\227\264 \344\273\216 11 \347\202\271\345\210\260 13\347\202\271", nullptr));
        label_11->setText(QCoreApplication::translate("Option", "\347\224\250\351\244\220\346\227\266\351\225\277 20min-1\345\260\217\346\227\266", nullptr));
        backButton->setText(QCoreApplication::translate("Option", "\345\256\214\346\210\220", nullptr));
        startCheckBox->setText(QCoreApplication::translate("Option", "\345\220\257\347\224\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Option: public Ui_Option {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H
