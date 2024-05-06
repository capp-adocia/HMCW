/********************************************************************************
** Form generated from reading UI file 'rest.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REST_H
#define UI_REST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rest
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QStackedWidget *RestStackedWidget;
    QWidget *game01;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QWidget *rest01;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *amusement;
    QGridLayout *gridLayout_6;
    QPushButton *game_2048;
    QWidget *relaxBody;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton;
    QPushButton *skipButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Rest)
    {
        if (Rest->objectName().isEmpty())
            Rest->setObjectName("Rest");
        Rest->resize(987, 637);
        Rest->setStyleSheet(QString::fromUtf8("background-color: rgba(29, 29, 29, 0.5);"));
        gridLayout = new QGridLayout(Rest);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Rest);
        widget->setObjectName("widget");
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        RestStackedWidget = new QStackedWidget(widget);
        RestStackedWidget->setObjectName("RestStackedWidget");
        RestStackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 181, 181);"));
        game01 = new QWidget();
        game01->setObjectName("game01");
        gridLayout_4 = new QGridLayout(game01);
        gridLayout_4->setObjectName("gridLayout_4");
        label = new QLabel(game01);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(24);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        RestStackedWidget->addWidget(game01);
        rest01 = new QWidget();
        rest01->setObjectName("rest01");
        gridLayout_5 = new QGridLayout(rest01);
        gridLayout_5->setObjectName("gridLayout_5");
        label_2 = new QLabel(rest01);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        RestStackedWidget->addWidget(rest01);

        gridLayout_3->addWidget(RestStackedWidget, 1, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(471, 0));
        widget_2->setMaximumSize(QSize(471, 16777215));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 10, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

        tabWidget = new QTabWidget(widget_3);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(0, 388));
        tabWidget->setMaximumSize(QSize(16777215, 388));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(180, 180, 180);\n"
"color: rgb(0, 0, 0);"));
        amusement = new QWidget();
        amusement->setObjectName("amusement");
        gridLayout_6 = new QGridLayout(amusement);
        gridLayout_6->setObjectName("gridLayout_6");
        game_2048 = new QPushButton(amusement);
        game_2048->setObjectName("game_2048");
        game_2048->setMinimumSize(QSize(281, 50));
        game_2048->setMaximumSize(QSize(281, 50));
        QFont font2;
        font2.setPointSize(15);
        game_2048->setFont(font2);
        game_2048->setCursor(QCursor(Qt::PointingHandCursor));
        game_2048->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_6->addWidget(game_2048, 0, 0, 1, 1);

        tabWidget->addTab(amusement, QString());
        relaxBody = new QWidget();
        relaxBody->setObjectName("relaxBody");
        gridLayout_7 = new QGridLayout(relaxBody);
        gridLayout_7->setObjectName("gridLayout_7");
        pushButton = new QPushButton(relaxBody);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(281, 50));
        pushButton->setMaximumSize(QSize(281, 50));
        pushButton->setFont(font2);

        gridLayout_7->addWidget(pushButton, 0, 0, 1, 1);

        tabWidget->addTab(relaxBody, QString());

        gridLayout_2->addWidget(tabWidget, 4, 0, 1, 4);

        skipButton = new QPushButton(widget_3);
        skipButton->setObjectName("skipButton");
        skipButton->setMinimumSize(QSize(281, 50));
        skipButton->setMaximumSize(QSize(281, 50));
        skipButton->setFont(font2);
        skipButton->setCursor(QCursor(Qt::PointingHandCursor));
        skipButton->setStyleSheet(QString::fromUtf8("background-color: rgb(165, 165, 165);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(skipButton, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 2, 1, 1);


        verticalLayout->addWidget(widget_3);


        gridLayout_3->addWidget(widget_2, 1, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Rest);

        RestStackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Rest);
    } // setupUi

    void retranslateUi(QWidget *Rest)
    {
        Rest->setWindowTitle(QCoreApplication::translate("Rest", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Rest", "\344\274\221\346\201\257\344\270\255......", nullptr));
        label->setText(QCoreApplication::translate("Rest", "\345\274\200\345\247\213\344\274\221\346\201\257\345\220\247\357\274\201", nullptr));
        label_2->setText(QCoreApplication::translate("Rest", "\346\224\276\346\235\276\350\272\253\344\275\223\357\274\214\345\212\237\350\203\275\345\276\205\345\274\200\345\217\221......", nullptr));
        game_2048->setText(QCoreApplication::translate("Rest", "2048\345\220\257\345\212\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(amusement), QCoreApplication::translate("Rest", "\344\274\221\351\227\262\346\270\270\346\210\217", nullptr));
        pushButton->setText(QCoreApplication::translate("Rest", "\345\276\205\345\274\200\345\217\221......", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(relaxBody), QCoreApplication::translate("Rest", "\346\224\276\346\235\276\350\272\253\344\275\223", nullptr));
        skipButton->setText(QCoreApplication::translate("Rest", "\350\267\263\350\277\207\346\255\244\346\254\241\344\274\221\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rest: public Ui_Rest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REST_H
