/********************************************************************************
** Form generated from reading UI file 'tips.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPS_H
#define UI_TIPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tips
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *achievementTitleLabel;
    QLabel *iconLabel;
    QLabel *achievementLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Tips)
    {
        if (Tips->objectName().isEmpty())
            Tips->setObjectName("Tips");
        Tips->resize(450, 75);
        Tips->setMinimumSize(QSize(450, 75));
        Tips->setMaximumSize(QSize(450, 75));
        QFont font;
        font.setPointSize(9);
        Tips->setFont(font);
        Tips->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0,0);\n"
""));
        gridLayout_2 = new QGridLayout(Tips);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Tips);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(450, 68));
        widget->setMaximumSize(QSize(450, 68));
        widget->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(160, 160, 160);\n"
"border: 6px solid rgb(121, 121, 121);\n"
"border-radius:15px;"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        achievementTitleLabel = new QLabel(widget);
        achievementTitleLabel->setObjectName("achievementTitleLabel");
        achievementTitleLabel->setMinimumSize(QSize(354, 20));
        achievementTitleLabel->setMaximumSize(QSize(354, 20));
        QFont font1;
        font1.setPointSize(13);
        achievementTitleLabel->setFont(font1);
        achievementTitleLabel->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-radius:0;\n"
"color: rgb(85, 85, 255);"));

        gridLayout->addWidget(achievementTitleLabel, 0, 2, 1, 1);

        iconLabel = new QLabel(widget);
        iconLabel->setObjectName("iconLabel");
        iconLabel->setMinimumSize(QSize(50, 50));
        iconLabel->setMaximumSize(QSize(50, 50));
        iconLabel->setStyleSheet(QString::fromUtf8("border:0;\n"
"color:white;\n"
"border-radius:0;"));

        gridLayout->addWidget(iconLabel, 0, 1, 1, 1);

        achievementLabel = new QLabel(widget);
        achievementLabel->setObjectName("achievementLabel");
        achievementLabel->setMinimumSize(QSize(354, 20));
        achievementLabel->setMaximumSize(QSize(354, 20));
        achievementLabel->setFont(font1);
        achievementLabel->setStyleSheet(QString::fromUtf8("border:0;\n"
"border-radius:0;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(achievementLabel, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Tips);

        QMetaObject::connectSlotsByName(Tips);
    } // setupUi

    void retranslateUi(QDialog *Tips)
    {
        Tips->setWindowTitle(QCoreApplication::translate("Tips", "Dialog", nullptr));
        achievementTitleLabel->setText(QCoreApplication::translate("Tips", "TextLabel\345\267\262\350\276\276\346\210\220", nullptr));
        iconLabel->setText(QCoreApplication::translate("Tips", "TextLabel", nullptr));
        achievementLabel->setText(QCoreApplication::translate("Tips", "TextLabel\346\225\264\350\243\205\344\270\212\351\230\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tips: public Ui_Tips {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPS_H
