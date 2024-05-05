/********************************************************************************
** Form generated from reading UI file 'objectbar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTBAR_H
#define UI_OBJECTBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Backpack
{
public:
    QWidget *widget_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget_6;
    QGridLayout *gridLayout_2;
    QPushButton *queryButton;
    QPushButton *hideButton;
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout_11;
    QWidget *widget_outer;
    QGridLayout *gridLayout;
    QWidget *widget_upper;
    QGridLayout *gridLayout_5;
    QWidget *object_bar_2;
    QWidget *object_bar_3;
    QWidget *object_bar_1;
    QWidget *widget_down;
    QGridLayout *gridLayout_6;
    QWidget *object_bar;
    QWidget *widget_4;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_8;
    QFrame *ObjectFrame_37;
    QFrame *ObjectFrame_39;
    QFrame *ObjectFrame_38;
    QFrame *ObjectFrame_40;
    QWidget *widget_5;
    QGridLayout *gridLayout_9;
    QFrame *ObjectFrame_41;
    QFrame *ObjectFrame_42;
    QFrame *ObjectFrame_43;
    QFrame *ObjectFrame_44;
    QLabel *label;

    void setupUi(QWidget *Backpack)
    {
        if (Backpack->objectName().isEmpty())
            Backpack->setObjectName("Backpack");
        Backpack->resize(961, 624);
        Backpack->setMinimumSize(QSize(961, 624));
        Backpack->setMaximumSize(QSize(961, 16777215));
        Backpack->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        widget_3 = new QWidget(Backpack);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 0, 411, 624));
        widget_3->setMinimumSize(QSize(0, 624));
        widget_3->setMaximumSize(QSize(16777215, 624));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);"));
        scrollArea = new QScrollArea(widget_3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 110, 371, 506));
        scrollArea->setMinimumSize(QSize(371, 506));
        scrollArea->setMaximumSize(QSize(371, 506));
        scrollArea->setLayoutDirection(Qt::LeftToRight);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 369, 504));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 0));
        scrollArea->setWidget(scrollAreaWidgetContents);
        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(20, 10, 371, 84));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);"));
        gridLayout_2 = new QGridLayout(widget_6);
        gridLayout_2->setObjectName("gridLayout_2");
        queryButton = new QPushButton(widget_6);
        queryButton->setObjectName("queryButton");
        queryButton->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout_2->addWidget(queryButton, 0, 0, 1, 1);

        hideButton = new QPushButton(widget_6);
        hideButton->setObjectName("hideButton");
        hideButton->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout_2->addWidget(hideButton, 0, 1, 2, 1);

        lineEdit = new QLineEdit(widget_6);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("color:white;"));
        lineEdit->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_2->addWidget(lineEdit, 1, 0, 1, 1);

        widget = new QWidget(Backpack);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(415, 0, 545, 624));
        widget->setMinimumSize(QSize(545, 624));
        widget->setMaximumSize(QSize(545, 624));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);\n"
"border-top:  5px solid rgb(254, 254, 254);\n"
"border-left: 5px solid rgb(254, 254, 254);\n"
"border-bottom: 5px solid rgb(84, 84, 84);\n"
"border-right: 5px solid rgb(84, 84, 84);"));
        gridLayout_11 = new QGridLayout(widget);
        gridLayout_11->setObjectName("gridLayout_11");
        gridLayout_11->setHorizontalSpacing(0);
        gridLayout_11->setVerticalSpacing(2);
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        widget_outer = new QWidget(widget);
        widget_outer->setObjectName("widget_outer");
        widget_outer->setMinimumSize(QSize(545, 250));
        widget_outer->setMaximumSize(QSize(545, 250));
        widget_outer->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 197, 197);\n"
"border-top:  0;\n"
"border-left: 5px solid rgb(254, 254, 254);\n"
"border-bottom: 5px solid rgb(84, 84, 84);\n"
"border-right: 5px solid rgb(84, 84, 84);"));
        gridLayout = new QGridLayout(widget_outer);
        gridLayout->setObjectName("gridLayout");
        widget_upper = new QWidget(widget_outer);
        widget_upper->setObjectName("widget_upper");
        widget_upper->setMinimumSize(QSize(500, 160));
        widget_upper->setMaximumSize(QSize(500, 160));
        widget_upper->setStyleSheet(QString::fromUtf8("border:0;"));
        gridLayout_5 = new QGridLayout(widget_upper);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        object_bar_2 = new QWidget(widget_upper);
        object_bar_2->setObjectName("object_bar_2");
        object_bar_2->setMinimumSize(QSize(500, 52));
        object_bar_2->setMaximumSize(QSize(500, 52));
        object_bar_2->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 252, 252);"));

        gridLayout_5->addWidget(object_bar_2, 1, 0, 1, 1);

        object_bar_3 = new QWidget(widget_upper);
        object_bar_3->setObjectName("object_bar_3");
        object_bar_3->setMinimumSize(QSize(500, 52));
        object_bar_3->setMaximumSize(QSize(500, 52));
        object_bar_3->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 252, 252);"));

        gridLayout_5->addWidget(object_bar_3, 2, 0, 1, 1);

        object_bar_1 = new QWidget(widget_upper);
        object_bar_1->setObjectName("object_bar_1");
        object_bar_1->setMinimumSize(QSize(500, 52));
        object_bar_1->setMaximumSize(QSize(500, 52));
        object_bar_1->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 252, 252);"));

        gridLayout_5->addWidget(object_bar_1, 0, 0, 1, 1);


        gridLayout->addWidget(widget_upper, 0, 0, 1, 1);

        widget_down = new QWidget(widget_outer);
        widget_down->setObjectName("widget_down");
        widget_down->setMinimumSize(QSize(500, 50));
        widget_down->setMaximumSize(QSize(500, 50));
        widget_down->setStyleSheet(QString::fromUtf8("border:0;"));
        gridLayout_6 = new QGridLayout(widget_down);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        object_bar = new QWidget(widget_down);
        object_bar->setObjectName("object_bar");
        object_bar->setMinimumSize(QSize(500, 52));
        object_bar->setMaximumSize(QSize(500, 52));
        object_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 252, 252);"));

        gridLayout_6->addWidget(object_bar, 0, 0, 1, 1);


        gridLayout->addWidget(widget_down, 1, 0, 1, 1);


        gridLayout_11->addWidget(widget_outer, 1, 0, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(139, 139, 139,0.7);"));
        gridLayout_10 = new QGridLayout(widget_4);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(118, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName("label_2");

        gridLayout_10->addWidget(label_2, 1, 2, 1, 1);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 0));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        widget_2->setStyleSheet(QString::fromUtf8("border:0;"));
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        ObjectFrame_37 = new QFrame(widget_2);
        ObjectFrame_37->setObjectName("ObjectFrame_37");
        ObjectFrame_37->setMinimumSize(QSize(50, 50));
        ObjectFrame_37->setMaximumSize(QSize(50, 50));
        ObjectFrame_37->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_37->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_37->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(ObjectFrame_37, 0, 0, 1, 1);

        ObjectFrame_39 = new QFrame(widget_2);
        ObjectFrame_39->setObjectName("ObjectFrame_39");
        ObjectFrame_39->setMinimumSize(QSize(50, 50));
        ObjectFrame_39->setMaximumSize(QSize(50, 50));
        ObjectFrame_39->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_39->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_39->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(ObjectFrame_39, 2, 0, 1, 1);

        ObjectFrame_38 = new QFrame(widget_2);
        ObjectFrame_38->setObjectName("ObjectFrame_38");
        ObjectFrame_38->setMinimumSize(QSize(50, 50));
        ObjectFrame_38->setMaximumSize(QSize(50, 50));
        ObjectFrame_38->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_38->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_38->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(ObjectFrame_38, 1, 0, 1, 1);

        ObjectFrame_40 = new QFrame(widget_2);
        ObjectFrame_40->setObjectName("ObjectFrame_40");
        ObjectFrame_40->setMinimumSize(QSize(50, 50));
        ObjectFrame_40->setMaximumSize(QSize(50, 50));
        ObjectFrame_40->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_40->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_40->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(ObjectFrame_40, 3, 0, 1, 1);


        gridLayout_10->addWidget(widget_2, 0, 0, 2, 1);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("border:0;"));
        gridLayout_9 = new QGridLayout(widget_5);
        gridLayout_9->setObjectName("gridLayout_9");
        ObjectFrame_41 = new QFrame(widget_5);
        ObjectFrame_41->setObjectName("ObjectFrame_41");
        ObjectFrame_41->setMinimumSize(QSize(50, 50));
        ObjectFrame_41->setMaximumSize(QSize(50, 50));
        ObjectFrame_41->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_41->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_41->setFrameShadow(QFrame::Raised);

        gridLayout_9->addWidget(ObjectFrame_41, 0, 0, 1, 1);

        ObjectFrame_42 = new QFrame(widget_5);
        ObjectFrame_42->setObjectName("ObjectFrame_42");
        ObjectFrame_42->setMinimumSize(QSize(50, 50));
        ObjectFrame_42->setMaximumSize(QSize(50, 50));
        ObjectFrame_42->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_42->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_42->setFrameShadow(QFrame::Raised);

        gridLayout_9->addWidget(ObjectFrame_42, 0, 1, 1, 1);

        ObjectFrame_43 = new QFrame(widget_5);
        ObjectFrame_43->setObjectName("ObjectFrame_43");
        ObjectFrame_43->setMinimumSize(QSize(50, 50));
        ObjectFrame_43->setMaximumSize(QSize(50, 50));
        ObjectFrame_43->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_43->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_43->setFrameShadow(QFrame::Raised);

        gridLayout_9->addWidget(ObjectFrame_43, 1, 0, 1, 1);

        ObjectFrame_44 = new QFrame(widget_5);
        ObjectFrame_44->setObjectName("ObjectFrame_44");
        ObjectFrame_44->setMinimumSize(QSize(50, 50));
        ObjectFrame_44->setMaximumSize(QSize(50, 50));
        ObjectFrame_44->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_44->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_44->setFrameShadow(QFrame::Raised);

        gridLayout_9->addWidget(ObjectFrame_44, 1, 1, 1, 1);


        gridLayout_10->addWidget(widget_5, 0, 2, 1, 1);

        label = new QLabel(widget_4);
        label->setObjectName("label");
        label->setMinimumSize(QSize(142, 0));
        label->setMaximumSize(QSize(142, 16777215));
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout_10->addWidget(label, 0, 1, 2, 1);


        gridLayout_11->addWidget(widget_4, 0, 0, 1, 1);


        retranslateUi(Backpack);

        QMetaObject::connectSlotsByName(Backpack);
    } // setupUi

    void retranslateUi(QWidget *Backpack)
    {
        Backpack->setWindowTitle(QCoreApplication::translate("Backpack", "Form", nullptr));
        queryButton->setText(QCoreApplication::translate("Backpack", "query", nullptr));
        hideButton->setText(QCoreApplication::translate("Backpack", "\345\205\263\351\227\255", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("Backpack", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Backpack", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Backpack: public Ui_Backpack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTBAR_H
