/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *BillboardDown;
    QSpacerItem *horizontalSpacer_2;
    QWidget *BillboardUp;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QPushButton *LargeScreendisplayButton;
    QSpacerItem *horizontalSpacer_4;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName("About");
        About->resize(951, 738);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        About->setStyleSheet(QString::fromUtf8("background-color: rgba(136, 136, 136,0);"));
        gridLayout = new QGridLayout(About);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(About);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 184, 184);"));
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(widget);
        backButton->setObjectName("backButton");
        backButton->setMinimumSize(QSize(100, 60));
        backButton->setMaximumSize(QSize(100, 60));
        QFont font;
        font.setPointSize(16);
        backButton->setFont(font);
        backButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 253, 253);"));

        gridLayout_6->addWidget(backButton, 0, 4, 2, 2);

        horizontalSpacer_6 = new QSpacerItem(132, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(600, 577));
        widget_2->setMaximumSize(QSize(600, 577));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 230, 246,0);"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(272, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        BillboardDown = new QWidget(widget_2);
        BillboardDown->setObjectName("BillboardDown");
        BillboardDown->setMinimumSize(QSize(50, 290));
        BillboardDown->setMaximumSize(QSize(50, 290));
        BillboardDown->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 255, 230);"));

        gridLayout_2->addWidget(BillboardDown, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(272, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        BillboardUp = new QWidget(widget_2);
        BillboardUp->setObjectName("BillboardUp");
        BillboardUp->setMinimumSize(QSize(0, 0));
        BillboardUp->setMaximumSize(QSize(16777215, 16777215));
        BillboardUp->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 255, 230);"));
        gridLayout_5 = new QGridLayout(BillboardUp);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalSpacer_3 = new QSpacerItem(239, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        widget_4 = new QWidget(BillboardUp);
        widget_4->setObjectName("widget_4");
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        LargeScreendisplayButton = new QPushButton(widget_4);
        LargeScreendisplayButton->setObjectName("LargeScreendisplayButton");

        gridLayout_4->addWidget(LargeScreendisplayButton, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget_4, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(239, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        textBrowser = new QTextBrowser(BillboardUp);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));

        gridLayout_5->addWidget(textBrowser, 1, 0, 1, 3);


        gridLayout_2->addWidget(BillboardUp, 0, 0, 1, 3);


        gridLayout_6->addWidget(widget_2, 0, 1, 2, 1);

        horizontalSpacer_7 = new QSpacerItem(16, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 0, 6, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("About", "\345\256\214\346\210\220", nullptr));
        LargeScreendisplayButton->setText(QCoreApplication::translate("About", "\345\244\247\345\261\217\346\265\217\350\247\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
