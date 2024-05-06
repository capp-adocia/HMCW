/********************************************************************************
** Form generated from reading UI file 'backpack.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKPACK_H
#define UI_BACKPACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Backpack
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget_6;
    QLabel *searchIconLabel;
    QPushButton *queryButton;
    QPushButton *hideButton;
    QLineEdit *lineEdit;
    QPushButton *SearchButton;
    QWidget *widget_7;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QWidget *widget_outer;
    QGridLayout *gridLayout;
    QWidget *widget_upper;
    QGridLayout *gridLayout_5;
    QWidget *object_bar_3;
    QWidget *object_bar_1;
    QWidget *object_bar_2;
    QWidget *widget_down;
    QGridLayout *gridLayout_6;
    QWidget *object_bar;
    QWidget *widget_4;
    QWidget *widget_2;
    QGridLayout *gridLayout_8;
    QFrame *ObjectFrame_38;
    QFrame *ObjectFrame_37;
    QFrame *ObjectFrame_40;
    QFrame *ObjectFrame_39;
    QWidget *widget_5;
    QGridLayout *gridLayout_9;
    QFrame *ObjectFrame_41;
    QFrame *ObjectFrame_42;
    QFrame *ObjectFrame_43;
    QFrame *ObjectFrame_44;
    QLabel *characterLabel;
    QWidget *widget_8;
    QGridLayout *gridLayout_10;
    QFrame *ObjectFrame_47;
    QWidget *widget_9;
    QGridLayout *gridLayout_7;
    QFrame *ObjectFrame_46;
    QLabel *label_3;
    QPushButton *ExeFrameIcon;

    void setupUi(QWidget *Backpack)
    {
        if (Backpack->objectName().isEmpty())
            Backpack->setObjectName("Backpack");
        Backpack->resize(956, 624);
        Backpack->setMinimumSize(QSize(956, 624));
        Backpack->setMaximumSize(QSize(972, 16777215));
        Backpack->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        gridLayout_3 = new QGridLayout(Backpack);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(Backpack);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(411, 624));
        widget_3->setMaximumSize(QSize(411, 624));
        widget_3->setStyleSheet(QString::fromUtf8(""));
        scrollArea = new QScrollArea(widget_3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(24, 110, 370, 506));
        scrollArea->setMinimumSize(QSize(370, 506));
        scrollArea->setMaximumSize(QSize(370, 506));
        scrollArea->setLayoutDirection(Qt::LeftToRight);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 368, 504));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 0));
        scrollAreaWidgetContents->setCursor(QCursor(Qt::PointingHandCursor));
        scrollArea->setWidget(scrollAreaWidgetContents);
        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(15, 10, 381, 95));
        widget_6->setMinimumSize(QSize(381, 95));
        widget_6->setMaximumSize(QSize(381, 95));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
"border-top: 2px solid rgb(84, 84, 84);\n"
"border-left: 2px solid rgb(84, 84, 84);\n"
"border-bottom:  2px solid rgb(254, 254, 254);\n"
"border-right: 2px solid rgb(254, 254, 254);\n"
"border-top-right-radius: 18px;\n"
"border-bottom-left-radius: 18px;"));
        searchIconLabel = new QLabel(widget_6);
        searchIconLabel->setObjectName("searchIconLabel");
        searchIconLabel->setGeometry(QRect(11, 11, 75, 75));
        searchIconLabel->setMinimumSize(QSize(75, 75));
        searchIconLabel->setStyleSheet(QString::fromUtf8("border-top-right-radius: 40px;\n"
"border-bottom-left-radius: 40px;\n"
"border-top: 2px solid rgb(84, 84, 84);\n"
"border-left: 2px solid rgb(84, 84, 84);\n"
"border-bottom:  2px solid rgb(254, 254, 254);\n"
"border-right: 2px solid rgb(254, 254, 254);\n"
""));
        queryButton = new QPushButton(widget_6);
        queryButton->setObjectName("queryButton");
        queryButton->setGeometry(QRect(136, 12, 110, 30));
        queryButton->setMinimumSize(QSize(110, 30));
        queryButton->setMaximumSize(QSize(110, 30));
        QFont font;
        font.setPointSize(10);
        queryButton->setFont(font);
        queryButton->setCursor(QCursor(Qt::PointingHandCursor));
        queryButton->setStyleSheet(QString::fromUtf8("color:white;"));
        hideButton = new QPushButton(widget_6);
        hideButton->setObjectName("hideButton");
        hideButton->setGeometry(QRect(300, 11, 72, 72));
        hideButton->setMinimumSize(QSize(72, 72));
        hideButton->setMaximumSize(QSize(72, 72));
        QFont font1;
        font1.setPointSize(14);
        hideButton->setFont(font1);
        hideButton->setCursor(QCursor(Qt::PointingHandCursor));
        hideButton->setStyleSheet(QString::fromUtf8("color:white;"));
        lineEdit = new QLineEdit(widget_6);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(89, 52, 125, 30));
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setPointSize(12);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-radius: 10px;"));
        lineEdit->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        SearchButton = new QPushButton(widget_6);
        SearchButton->setObjectName("SearchButton");
        SearchButton->setGeometry(QRect(220, 54, 70, 26));
        SearchButton->setMinimumSize(QSize(70, 0));
        SearchButton->setMaximumSize(QSize(70, 16777215));
        SearchButton->setFont(font);
        SearchButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;"));
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(15, 110, 10, 506));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);"));

        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);

        widget = new QWidget(Backpack);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(547, 624));
        widget->setMaximumSize(QSize(546, 624));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);\n"
"border-top:  5px solid rgb(254, 254, 254);\n"
"border-left: 5px solid rgb(254, 254, 254);\n"
"border-bottom: 5px solid rgb(84, 84, 84);\n"
"border-right: 5px solid rgb(84, 84, 84);"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
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
        object_bar_3 = new QWidget(widget_upper);
        object_bar_3->setObjectName("object_bar_3");
        object_bar_3->setMinimumSize(QSize(500, 52));
        object_bar_3->setMaximumSize(QSize(500, 52));
        object_bar_3->setCursor(QCursor(Qt::PointingHandCursor));
        object_bar_3->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 252, 252);"));

        gridLayout_5->addWidget(object_bar_3, 2, 0, 1, 1);

        object_bar_1 = new QWidget(widget_upper);
        object_bar_1->setObjectName("object_bar_1");
        object_bar_1->setMinimumSize(QSize(500, 52));
        object_bar_1->setMaximumSize(QSize(500, 52));
        object_bar_1->setCursor(QCursor(Qt::PointingHandCursor));
        object_bar_1->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 252, 252);"));

        gridLayout_5->addWidget(object_bar_1, 0, 0, 1, 1);

        object_bar_2 = new QWidget(widget_upper);
        object_bar_2->setObjectName("object_bar_2");
        object_bar_2->setMinimumSize(QSize(500, 52));
        object_bar_2->setMaximumSize(QSize(500, 52));
        object_bar_2->setCursor(QCursor(Qt::PointingHandCursor));
        object_bar_2->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 252, 252);"));

        gridLayout_5->addWidget(object_bar_2, 1, 0, 1, 1);


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
        object_bar->setCursor(QCursor(Qt::PointingHandCursor));
        object_bar->setStyleSheet(QString::fromUtf8("background-color: rgb(252, 252, 252);"));

        gridLayout_6->addWidget(object_bar, 0, 0, 1, 1);


        gridLayout->addWidget(widget_down, 1, 0, 1, 1);


        gridLayout_4->addWidget(widget_outer, 1, 0, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);"));
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(4, 10, 88, 240));
        widget_2->setMinimumSize(QSize(88, 240));
        widget_2->setMaximumSize(QSize(88, 240));
        widget_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(197, 197, 197);"));
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
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

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(280, 36, 128, 128));
        widget_5->setMinimumSize(QSize(128, 128));
        widget_5->setMaximumSize(QSize(128, 128));
        widget_5->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(197, 197, 197);"));
        gridLayout_9 = new QGridLayout(widget_5);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
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

        characterLabel = new QLabel(widget_4);
        characterLabel->setObjectName("characterLabel");
        characterLabel->setGeometry(QRect(84, 11, 195, 358));
        characterLabel->setMinimumSize(QSize(195, 358));
        characterLabel->setMaximumSize(QSize(195, 358));
        characterLabel->setStyleSheet(QString::fromUtf8("border-top: 2px solid rgb(84, 84, 84);\n"
"border-left: 2px solid rgb(84, 84, 84);\n"
"border-bottom:  2px solid rgb(254, 254, 254);\n"
"border-right: 2px solid rgb(254, 254, 254);"));
        widget_8 = new QWidget(widget_4);
        widget_8->setObjectName("widget_8");
        widget_8->setGeometry(QRect(460, 64, 72, 72));
        widget_8->setMinimumSize(QSize(72, 72));
        widget_8->setMaximumSize(QSize(72, 72));
        widget_8->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(197, 197, 197);"));
        gridLayout_10 = new QGridLayout(widget_8);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        ObjectFrame_47 = new QFrame(widget_8);
        ObjectFrame_47->setObjectName("ObjectFrame_47");
        ObjectFrame_47->setMinimumSize(QSize(50, 50));
        ObjectFrame_47->setMaximumSize(QSize(50, 50));
        ObjectFrame_47->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_47->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_47->setFrameShadow(QFrame::Raised);

        gridLayout_10->addWidget(ObjectFrame_47, 0, 0, 1, 1);

        widget_9 = new QWidget(widget_4);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(288, 297, 72, 72));
        widget_9->setMinimumSize(QSize(72, 72));
        widget_9->setMaximumSize(QSize(72, 72));
        widget_9->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(197, 197, 197);"));
        gridLayout_7 = new QGridLayout(widget_9);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        ObjectFrame_46 = new QFrame(widget_9);
        ObjectFrame_46->setObjectName("ObjectFrame_46");
        ObjectFrame_46->setMinimumSize(QSize(50, 50));
        ObjectFrame_46->setMaximumSize(QSize(50, 50));
        ObjectFrame_46->setStyleSheet(QString::fromUtf8("background-color: rgb(139, 139, 139);\n"
"border-left: 4px solid rgba(51, 51, 51,0.8);\n"
"border-top: 4px solid rgba(51, 51, 51,0.8);\n"
"border-right: 2px solid rgb(190, 190, 190);\n"
"border-bottom: 2px solid rgb(251, 251, 251);"));
        ObjectFrame_46->setFrameShape(QFrame::StyledPanel);
        ObjectFrame_46->setFrameShadow(QFrame::Raised);

        gridLayout_7->addWidget(ObjectFrame_46, 0, 0, 1, 1);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(415, 78, 40, 40));
        label_3->setMinimumSize(QSize(40, 40));
        label_3->setMaximumSize(QSize(40, 40));
        label_3->setSizeIncrement(QSize(0, 0));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgba(255, 255, 255,0);"));
        ExeFrameIcon = new QPushButton(widget_4);
        ExeFrameIcon->setObjectName("ExeFrameIcon");
        ExeFrameIcon->setGeometry(QRect(370, 305, 74, 64));
        ExeFrameIcon->setMinimumSize(QSize(74, 64));
        ExeFrameIcon->setMaximumSize(QSize(74, 64));
        ExeFrameIcon->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(widget_4, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 0, 1, 1, 1);


        retranslateUi(Backpack);

        QMetaObject::connectSlotsByName(Backpack);
    } // setupUi

    void retranslateUi(QWidget *Backpack)
    {
        Backpack->setWindowTitle(QCoreApplication::translate("Backpack", "Form", nullptr));
        searchIconLabel->setText(QString());
        queryButton->setText(QCoreApplication::translate("Backpack", "q u e r y", nullptr));
        hideButton->setText(QCoreApplication::translate("Backpack", "\345\205\263\351\227\255", nullptr));
        lineEdit->setText(QString());
        SearchButton->setText(QCoreApplication::translate("Backpack", "Search", nullptr));
        characterLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("Backpack", "==>", nullptr));
        ExeFrameIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Backpack: public Ui_Backpack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKPACK_H
