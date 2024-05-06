/********************************************************************************
** Form generated from reading UI file 'suggestion.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUGGESTION_H
#define UI_SUGGESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Suggestion
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QWidget *BillboardUp;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *LargeScreendisplayButton;
    QSpacerItem *horizontalSpacer_8;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer;
    QWidget *BillboardDown;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Suggestion)
    {
        if (Suggestion->objectName().isEmpty())
            Suggestion->setObjectName("Suggestion");
        Suggestion->resize(945, 771);
        Suggestion->setStyleSheet(QString::fromUtf8("background-color: rgba(29, 29, 29, 0.5);"));
        gridLayout = new QGridLayout(Suggestion);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Suggestion);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 184, 184);"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(132, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(600, 577));
        widget_2->setMaximumSize(QSize(600, 577));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 230, 246,0);"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        BillboardUp = new QWidget(widget_2);
        BillboardUp->setObjectName("BillboardUp");
        BillboardUp->setMinimumSize(QSize(600, 290));
        BillboardUp->setMaximumSize(QSize(600, 290));
        BillboardUp->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 255, 230);"));
        gridLayout_5 = new QGridLayout(BillboardUp);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalSpacer_7 = new QSpacerItem(239, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        LargeScreendisplayButton = new QPushButton(BillboardUp);
        LargeScreendisplayButton->setObjectName("LargeScreendisplayButton");

        gridLayout_5->addWidget(LargeScreendisplayButton, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(239, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        textBrowser = new QTextBrowser(BillboardUp);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));

        gridLayout_5->addWidget(textBrowser, 1, 0, 1, 3);


        gridLayout_2->addWidget(BillboardUp, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(272, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        BillboardDown = new QWidget(widget_2);
        BillboardDown->setObjectName("BillboardDown");
        BillboardDown->setMinimumSize(QSize(40, 290));
        BillboardDown->setMaximumSize(QSize(40, 290));
        BillboardDown->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 255, 230);"));

        gridLayout_2->addWidget(BillboardDown, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(272, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_4->addWidget(widget_2, 0, 1, 1, 1);

        backButton = new QPushButton(widget);
        backButton->setObjectName("backButton");
        backButton->setMinimumSize(QSize(100, 60));
        backButton->setMaximumSize(QSize(100, 60));
        QFont font;
        font.setPointSize(16);
        backButton->setFont(font);
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 253, 253);"));

        gridLayout_4->addWidget(backButton, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(16, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Suggestion);

        QMetaObject::connectSlotsByName(Suggestion);
    } // setupUi

    void retranslateUi(QWidget *Suggestion)
    {
        Suggestion->setWindowTitle(QCoreApplication::translate("Suggestion", "Form", nullptr));
        LargeScreendisplayButton->setText(QString());
        backButton->setText(QCoreApplication::translate("Suggestion", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Suggestion: public Ui_Suggestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUGGESTION_H
