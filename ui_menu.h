/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QFormLayout *formLayout;
    QStackedWidget *stackedWidget;
    QWidget *mainMenu;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QPushButton *saveButton;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QWidget *widget_9;
    QGridLayout *gridLayout_8;
    QPushButton *achievementButton;
    QWidget *widget_10;
    QGridLayout *gridLayout_9;
    QPushButton *suggestionButton;
    QWidget *widget_8;
    QGridLayout *gridLayout_7;
    QPushButton *optionButton;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QWidget *widget_11;
    QGridLayout *gridLayout_10;
    QPushButton *tellBugButton;
    QWidget *widget_12;
    QGridLayout *gridLayout_11;
    QPushButton *recordButton;
    QWidget *widget_13;
    QGridLayout *gridLayout_12;
    QPushButton *aboutButton;
    QWidget *widget_6;
    QGridLayout *gridLayout_5;
    QPushButton *exitButton;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(1005, 683);
        QFont font;
        font.setPointSize(9);
        Menu->setFont(font);
        Menu->setCursor(QCursor(Qt::ArrowCursor));
        Menu->setStyleSheet(QString::fromUtf8("background-color: rgba(29, 29, 29, 0.5);"));
        formLayout = new QFormLayout(Menu);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(Menu);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(29, 29, 29, 0);"));
        mainMenu = new QWidget();
        mainMenu->setObjectName("mainMenu");
        gridLayout_3 = new QGridLayout(mainMenu);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalSpacer = new QSpacerItem(280, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(280, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(44, 200, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 1, 1, 1);

        widget_3 = new QWidget(mainMenu);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 302));
        widget_3->setMaximumSize(QSize(16777215, 300));
        widget_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(603, 50));
        widget_5->setMaximumSize(QSize(603, 50));
        widget_5->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        saveButton = new QPushButton(widget_5);
        saveButton->setObjectName("saveButton");
        saveButton->setMinimumSize(QSize(600, 50));
        saveButton->setMaximumSize(QSize(600, 50));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setKerning(true);
        saveButton->setFont(font1);
        saveButton->setCursor(QCursor(Qt::PointingHandCursor));
        saveButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(saveButton, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_5);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName("widget_7");
        widget_7->setMinimumSize(QSize(0, 185));
        widget_7->setMaximumSize(QSize(16777215, 185));
        horizontalLayout = new QHBoxLayout(widget_7);
        horizontalLayout->setSpacing(24);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(8, 0, 8, 0);
        widget_2 = new QWidget(widget_7);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8(""));
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(0);
        gridLayout_4->setVerticalSpacing(4);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_9 = new QWidget(widget_2);
        widget_9->setObjectName("widget_9");
        widget_9->setMinimumSize(QSize(0, 50));
        widget_9->setMaximumSize(QSize(16777215, 50));
        widget_9->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);"));
        gridLayout_8 = new QGridLayout(widget_9);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        achievementButton = new QPushButton(widget_9);
        achievementButton->setObjectName("achievementButton");
        achievementButton->setMinimumSize(QSize(281, 50));
        achievementButton->setMaximumSize(QSize(281, 50));
        QFont font2;
        font2.setPointSize(16);
        achievementButton->setFont(font2);
        achievementButton->setCursor(QCursor(Qt::PointingHandCursor));
        achievementButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_8->addWidget(achievementButton, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_9, 3, 0, 1, 1);

        widget_10 = new QWidget(widget_2);
        widget_10->setObjectName("widget_10");
        widget_10->setMinimumSize(QSize(0, 50));
        widget_10->setMaximumSize(QSize(16777215, 50));
        widget_10->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);"));
        gridLayout_9 = new QGridLayout(widget_10);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        suggestionButton = new QPushButton(widget_10);
        suggestionButton->setObjectName("suggestionButton");
        suggestionButton->setMinimumSize(QSize(281, 50));
        suggestionButton->setMaximumSize(QSize(281, 50));
        suggestionButton->setFont(font2);
        suggestionButton->setCursor(QCursor(Qt::PointingHandCursor));
        suggestionButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_9->addWidget(suggestionButton, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_10, 4, 0, 1, 1);

        widget_8 = new QWidget(widget_2);
        widget_8->setObjectName("widget_8");
        widget_8->setMinimumSize(QSize(282, 50));
        widget_8->setMaximumSize(QSize(282, 50));
        widget_8->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);"));
        gridLayout_7 = new QGridLayout(widget_8);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        optionButton = new QPushButton(widget_8);
        optionButton->setObjectName("optionButton");
        optionButton->setMinimumSize(QSize(281, 50));
        optionButton->setMaximumSize(QSize(281, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font3.setPointSize(16);
        optionButton->setFont(font3);
        optionButton->setCursor(QCursor(Qt::PointingHandCursor));
        optionButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(optionButton, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_8, 5, 0, 1, 1);


        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(widget_7);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(0);
        gridLayout_6->setVerticalSpacing(6);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_11 = new QWidget(widget);
        widget_11->setObjectName("widget_11");
        widget_11->setMinimumSize(QSize(0, 50));
        widget_11->setMaximumSize(QSize(16777215, 50));
        widget_11->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);"));
        gridLayout_10 = new QGridLayout(widget_11);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        tellBugButton = new QPushButton(widget_11);
        tellBugButton->setObjectName("tellBugButton");
        tellBugButton->setMinimumSize(QSize(0, 50));
        tellBugButton->setMaximumSize(QSize(16777215, 50));
        tellBugButton->setFont(font2);
        tellBugButton->setCursor(QCursor(Qt::PointingHandCursor));
        tellBugButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_10->addWidget(tellBugButton, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_11, 0, 0, 1, 1);

        widget_12 = new QWidget(widget);
        widget_12->setObjectName("widget_12");
        widget_12->setMinimumSize(QSize(0, 50));
        widget_12->setMaximumSize(QSize(16777215, 50));
        widget_12->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);"));
        gridLayout_11 = new QGridLayout(widget_12);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName("gridLayout_11");
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        recordButton = new QPushButton(widget_12);
        recordButton->setObjectName("recordButton");
        recordButton->setMinimumSize(QSize(0, 50));
        recordButton->setMaximumSize(QSize(16777215, 50));
        recordButton->setFont(font2);
        recordButton->setCursor(QCursor(Qt::PointingHandCursor));
        recordButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_11->addWidget(recordButton, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_12, 1, 0, 1, 1);

        widget_13 = new QWidget(widget);
        widget_13->setObjectName("widget_13");
        widget_13->setMinimumSize(QSize(0, 50));
        widget_13->setMaximumSize(QSize(16777215, 50));
        widget_13->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);"));
        gridLayout_12 = new QGridLayout(widget_13);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        aboutButton = new QPushButton(widget_13);
        aboutButton->setObjectName("aboutButton");
        aboutButton->setMinimumSize(QSize(0, 50));
        aboutButton->setMaximumSize(QSize(16777215, 50));
        aboutButton->setFont(font2);
        aboutButton->setCursor(QCursor(Qt::PointingHandCursor));
        aboutButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_12->addWidget(aboutButton, 0, 0, 1, 1);


        gridLayout_6->addWidget(widget_13, 2, 0, 1, 1);


        horizontalLayout->addWidget(widget);


        verticalLayout->addWidget(widget_7);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(603, 50));
        widget_6->setMaximumSize(QSize(603, 50));
        widget_6->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(0, 0, 0);"));
        gridLayout_5 = new QGridLayout(widget_6);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(1);
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        exitButton = new QPushButton(widget_6);
        exitButton->setObjectName("exitButton");
        exitButton->setMinimumSize(QSize(600, 50));
        exitButton->setMaximumSize(QSize(600, 50));
        exitButton->setFont(font2);
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        exitButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout_5->addWidget(exitButton, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_6);


        gridLayout_3->addWidget(widget_3, 2, 1, 1, 1);

        widget_4 = new QWidget(mainMenu);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(600, 50));
        widget_4->setMaximumSize(QSize(600, 50));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0,0);"));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(widget_4);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 40));
        QFont font4;
        font4.setPointSize(18);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);


        gridLayout_3->addWidget(widget_4, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        stackedWidget->addWidget(mainMenu);

        formLayout->setWidget(0, QFormLayout::SpanningRole, stackedWidget);


        retranslateUi(Menu);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Form", nullptr));
        saveButton->setText(QCoreApplication::translate("Menu", "\345\233\236\345\210\260\347\225\214\351\235\242", nullptr));
        achievementButton->setText(QCoreApplication::translate("Menu", "\350\277\233\345\272\246", nullptr));
        suggestionButton->setText(QCoreApplication::translate("Menu", "\346\217\220\344\276\233\345\217\215\351\246\210", nullptr));
        optionButton->setText(QCoreApplication::translate("Menu", "\351\200\211\351\241\271...", nullptr));
        tellBugButton->setText(QCoreApplication::translate("Menu", "\346\212\245\345\221\212\346\274\217\346\264\236", nullptr));
        recordButton->setText(QCoreApplication::translate("Menu", "\347\273\237\350\256\241\344\277\241\346\201\257", nullptr));
        aboutButton->setText(QCoreApplication::translate("Menu", "\345\205\263\344\272\216", nullptr));
        exitButton->setText(QCoreApplication::translate("Menu", "\344\277\235\345\255\230\345\271\266\347\273\223\346\235\237", nullptr));
        label->setText(QCoreApplication::translate("Menu", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
