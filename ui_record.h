/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Record
{
public:
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QPushButton *backButton;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QPushButton *generalRecordButton;
    QPushButton *controlBreakRecordButton;
    QStackedWidget *stackedWidget;
    QWidget *generalRecordWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *horizontalSpacer;
    QWidget *controlBreakRecordWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Record)
    {
        if (Record->objectName().isEmpty())
            Record->setObjectName("Record");
        Record->resize(1062, 731);
        Record->setStyleSheet(QString::fromUtf8("background-color: rgba(29, 29, 29, 0.5);"));
        gridLayout_6 = new QGridLayout(Record);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(Record);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 70));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color:rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        widget_3 = new QWidget(Record);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8(""));
        gridLayout_5 = new QGridLayout(widget_3);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        widget->setLayoutDirection(Qt::LeftToRight);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(29, 29, 29, 0.5);\n"
"color:rgb(255, 255, 255);\n"
""));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(widget);
        backButton->setObjectName("backButton");
        backButton->setMinimumSize(QSize(600, 50));
        backButton->setMaximumSize(QSize(600, 50));
        QFont font1;
        font1.setPointSize(16);
        backButton->setFont(font1);
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);\n"
"border-left:4px solid rgb(184, 184, 185);\n"
"border-top:4px solid rgb(184, 184, 185);\n"
"border-right:4px solid rgb(88, 88, 88);\n"
"border-bottom:4px solid rgb(88, 88, 88);\n"
""));

        gridLayout_4->addWidget(backButton, 1, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(2, 0));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(116, 116, 116,0);"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(-1, 24, -1, -1);
        generalRecordButton = new QPushButton(widget_2);
        generalRecordButton->setObjectName("generalRecordButton");
        generalRecordButton->setMinimumSize(QSize(281, 50));
        generalRecordButton->setMaximumSize(QSize(281, 50));
        generalRecordButton->setFont(font1);
        generalRecordButton->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);\n"
"border-left:4px solid rgb(184, 184, 185);\n"
"border-top:4px solid rgb(184, 184, 185);\n"
"border-right:4px solid rgb(88, 88, 88);\n"
"border-bottom:4px solid rgb(88, 88, 88);\n"
""));

        gridLayout_3->addWidget(generalRecordButton, 0, 0, 1, 1);

        controlBreakRecordButton = new QPushButton(widget_2);
        controlBreakRecordButton->setObjectName("controlBreakRecordButton");
        controlBreakRecordButton->setMinimumSize(QSize(281, 50));
        controlBreakRecordButton->setMaximumSize(QSize(281, 50));
        controlBreakRecordButton->setFont(font1);
        controlBreakRecordButton->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);\n"
"border-left:4px solid rgb(184, 184, 185);\n"
"border-top:4px solid rgb(184, 184, 185);\n"
"border-right:4px solid rgb(88, 88, 88);\n"
"border-bottom:4px solid rgb(88, 88, 88);\n"
""));

        gridLayout_3->addWidget(controlBreakRecordButton, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget_2, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(widget_3);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        generalRecordWidget = new QWidget();
        generalRecordWidget->setObjectName("generalRecordWidget");
        generalRecordWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(19, 14, 9,0.5);\n"
"border-top: 3px solid rgb(0, 0, 0);\n"
"border-bottom: 3px solid rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(generalRecordWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(23, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        scrollArea = new QScrollArea(generalRecordWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(600, 0));
        scrollArea->setMaximumSize(QSize(600, 16777215));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgba(19, 14, 9,0.7);\n"
"border-left:0px solid rgb(0, 0, 0);\n"
"border-right:0px solid rgb(0, 0, 0);\n"
"border-top:1px solid rgb(0, 0, 0);\n"
"border-bottom:1px solid rgb(0, 0, 0);"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(1, 0, 598, 524));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 0));
        scrollAreaWidgetContents->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        stackedWidget->addWidget(generalRecordWidget);
        controlBreakRecordWidget = new QWidget();
        controlBreakRecordWidget->setObjectName("controlBreakRecordWidget");
        controlBreakRecordWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(19, 14, 9,0.5);\n"
"border-top: 3px solid rgb(0, 0, 0);\n"
"border-bottom: 3px solid rgb(0, 0, 0);"));
        gridLayout_2 = new QGridLayout(controlBreakRecordWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        scrollArea_2 = new QScrollArea(controlBreakRecordWidget);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setMinimumSize(QSize(600, 0));
        scrollArea_2->setMaximumSize(QSize(600, 16777215));
        scrollArea_2->setStyleSheet(QString::fromUtf8("background-color: rgba(19, 14, 9,0.7);\n"
"border-left:0px solid rgb(0, 0, 0);\n"
"border-right:0px solid rgb(0, 0, 0);\n"
"border-top:1px solid rgb(0, 0, 0);\n"
"border-bottom:1px solid rgb(0, 0, 0);"));
        scrollArea_2->setWidgetResizable(true);
        scrollArea_2->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(1, 0, 598, 28));
        scrollAreaWidgetContents_2->setMinimumSize(QSize(0, 0));
        scrollAreaWidgetContents_2->setMaximumSize(QSize(16777215, 16777215));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        stackedWidget->addWidget(controlBreakRecordWidget);

        gridLayout_5->addWidget(stackedWidget, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_3, 1, 0, 1, 1);


        retranslateUi(Record);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Record);
    } // setupUi

    void retranslateUi(QWidget *Record)
    {
        Record->setWindowTitle(QCoreApplication::translate("Record", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Record", "\347\273\237\350\256\241\344\277\241\346\201\257", nullptr));
        backButton->setText(QCoreApplication::translate("Record", "\345\256\214\346\210\220", nullptr));
        generalRecordButton->setText(QCoreApplication::translate("Record", "\351\200\232\347\224\250", nullptr));
        controlBreakRecordButton->setText(QCoreApplication::translate("Record", "\346\216\247\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Record: public Ui_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
