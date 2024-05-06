/********************************************************************************
** Form generated from reading UI file 'tellbug.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELLBUG_H
#define UI_TELLBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TellBug
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QWidget *BillboardUp;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_7;
    QPushButton *submitButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_4;
    QLineEdit *mailEdit;
    QLabel *label_6;
    QLineEdit *passWordEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_2;
    QWidget *widget_4;
    QGridLayout *gridLayout_5;
    QRadioButton *maleRadioButton;
    QRadioButton *femaleRadioButton;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_5;
    QWidget *BillboardDown;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *TellBug)
    {
        if (TellBug->objectName().isEmpty())
            TellBug->setObjectName("TellBug");
        TellBug->resize(947, 737);
        TellBug->setStyleSheet(QString::fromUtf8("background-color: rgba(29, 29, 29, 0.5);"));
        gridLayout = new QGridLayout(TellBug);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(TellBug);
        widget->setObjectName("widget");
        widget->setCursor(QCursor(Qt::PointingHandCursor));
        widget->setMouseTracking(true);
        widget->setTabletTracking(true);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 184, 184);"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
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
        gridLayout_3 = new QGridLayout(BillboardUp);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_3 = new QWidget(BillboardUp);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 118, 118);\n"
"color:white;"));
        gridLayout_7 = new QGridLayout(widget_3);
        gridLayout_7->setObjectName("gridLayout_7");
        submitButton = new QPushButton(widget_3);
        submitButton->setObjectName("submitButton");
        submitButton->setMinimumSize(QSize(280, 0));
        submitButton->setMaximumSize(QSize(280, 16777215));
        QFont font;
        font.setPointSize(14);
        submitButton->setFont(font);
        submitButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(submitButton, 2, 1, 1, 2);

        horizontalSpacer_7 = new QSpacerItem(128, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 2, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(110, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName("widget_5");
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_5);
        label->setObjectName("label");
        label->setMinimumSize(QSize(50, 35));
        label->setMaximumSize(QSize(50, 35));
        label->setSizeIncrement(QSize(0, 0));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(233, 255, 251,0.6);\n"
"border-radius:10px;\n"
"color:black;\n"
"                               border-left:4px solid rgb(184, 184, 185);\n"
"                               border-top:4px solid rgb(184, 184, 185);\n"
"                               border-right:4px solid rgb(88, 88, 88);\n"
"                              border-bottom:4px solid rgb(88, 88, 88);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        nameEdit = new QLineEdit(widget_5);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setMinimumSize(QSize(50, 35));
        nameEdit->setMaximumSize(QSize(190, 35));
        QFont font1;
        font1.setPointSize(14);
        font1.setWeight(QFont::Medium);
        nameEdit->setFont(font1);
        nameEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 255, 251);\n"
"color:white;"));

        gridLayout_6->addWidget(nameEdit, 0, 1, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(50, 35));
        label_4->setMaximumSize(QSize(50, 35));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(233, 255, 251,0.6);\n"
"border-radius:10px;\n"
"color:black;\n"
"                               border-left:4px solid rgb(184, 184, 185);\n"
"                               border-top:4px solid rgb(184, 184, 185);\n"
"                               border-right:4px solid rgb(88, 88, 88);\n"
"                              border-bottom:4px solid rgb(88, 88, 88);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_4, 1, 0, 1, 1);

        mailEdit = new QLineEdit(widget_5);
        mailEdit->setObjectName("mailEdit");
        mailEdit->setMinimumSize(QSize(50, 35));
        mailEdit->setMaximumSize(QSize(190, 35));
        mailEdit->setFont(font1);
        mailEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 255, 251);\n"
"color:white;"));

        gridLayout_6->addWidget(mailEdit, 1, 1, 1, 1);

        label_6 = new QLabel(widget_5);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(50, 35));
        label_6->setMaximumSize(QSize(50, 35));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(233, 255, 251,0.6);\n"
"border-radius:10px;\n"
"color:black;\n"
"                               border-left:4px solid rgb(184, 184, 185);\n"
"                               border-top:4px solid rgb(184, 184, 185);\n"
"                               border-right:4px solid rgb(88, 88, 88);\n"
"                              border-bottom:4px solid rgb(88, 88, 88);"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_6, 2, 0, 1, 1);

        passWordEdit = new QLineEdit(widget_5);
        passWordEdit->setObjectName("passWordEdit");
        passWordEdit->setMinimumSize(QSize(50, 35));
        passWordEdit->setMaximumSize(QSize(190, 35));
        passWordEdit->setFont(font1);
        passWordEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 255, 251);\n"
"color:white;"));

        gridLayout_6->addWidget(passWordEdit, 2, 1, 1, 1);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(50, 35));
        label_3->setMaximumSize(QSize(50, 35));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(233, 255, 251,0.6);\n"
"border-radius:10px;\n"
"color:black;\n"
"                               border-left:4px solid rgb(184, 184, 185);\n"
"                               border-top:4px solid rgb(184, 184, 185);\n"
"                               border-right:4px solid rgb(88, 88, 88);\n"
"                              border-bottom:4px solid rgb(88, 88, 88);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_3, 3, 0, 1, 1);

        comboBox = new QComboBox(widget_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(0, 40));
        comboBox->setFont(font1);
        comboBox->setTabletTracking(true);
        comboBox->setIconSize(QSize(43, 44));

        gridLayout_6->addWidget(comboBox, 3, 1, 1, 1);

        label_2 = new QLabel(widget_5);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(50, 35));
        label_2->setMaximumSize(QSize(50, 35));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(233, 255, 251,0.6);\n"
"border-radius:10px;\n"
"color:black;\n"
"                               border-left:4px solid rgb(184, 184, 185);\n"
"                               border-top:4px solid rgb(184, 184, 185);\n"
"                               border-right:4px solid rgb(88, 88, 88);\n"
"                              border-bottom:4px solid rgb(88, 88, 88);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_2, 4, 0, 1, 1);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(162, 0));
        widget_4->setMaximumSize(QSize(100, 16777215));
        gridLayout_5 = new QGridLayout(widget_4);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        maleRadioButton = new QRadioButton(widget_4);
        maleRadioButton->setObjectName("maleRadioButton");
        maleRadioButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_5->addWidget(maleRadioButton, 0, 0, 1, 1);

        femaleRadioButton = new QRadioButton(widget_4);
        femaleRadioButton->setObjectName("femaleRadioButton");
        femaleRadioButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_5->addWidget(femaleRadioButton, 0, 1, 1, 1);


        gridLayout_6->addWidget(widget_4, 4, 1, 1, 1);


        gridLayout_7->addWidget(widget_5, 0, 0, 2, 2);

        plainTextEdit = new QPlainTextEdit(widget_3);
        plainTextEdit->setObjectName("plainTextEdit");
        QFont font2;
        font2.setPointSize(15);
        font2.setWeight(QFont::Medium);
        plainTextEdit->setFont(font2);
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 255, 251);\n"
"color:white;"));

        gridLayout_7->addWidget(plainTextEdit, 1, 2, 1, 2);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setMaximumSize(QSize(16777215, 30));
        QFont font3;
        font3.setPointSize(12);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(233, 255, 251,0.6);\n"
"border-radius:10px;\n"
"color:black;\n"
"                               border-left:4px solid rgb(184, 184, 185);\n"
"                               border-top:4px solid rgb(184, 184, 185);\n"
"                               border-right:4px solid rgb(88, 88, 88);\n"
"                              border-bottom:4px solid rgb(88, 88, 88);"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_5, 0, 2, 1, 2);


        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(BillboardUp, 0, 0, 1, 3);

        BillboardDown = new QWidget(widget_2);
        BillboardDown->setObjectName("BillboardDown");
        BillboardDown->setMinimumSize(QSize(40, 290));
        BillboardDown->setMaximumSize(QSize(40, 290));
        BillboardDown->setStyleSheet(QString::fromUtf8("background-color: rgb(249, 255, 230);"));

        gridLayout_2->addWidget(BillboardDown, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(272, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(272, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);


        gridLayout_4->addWidget(widget_2, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(132, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        backButton = new QPushButton(widget);
        backButton->setObjectName("backButton");
        backButton->setMinimumSize(QSize(100, 60));
        backButton->setMaximumSize(QSize(100, 60));
        QFont font4;
        font4.setPointSize(16);
        backButton->setFont(font4);
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 253, 253);"));

        gridLayout_4->addWidget(backButton, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(16, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(TellBug);

        QMetaObject::connectSlotsByName(TellBug);
    } // setupUi

    void retranslateUi(QWidget *TellBug)
    {
        TellBug->setWindowTitle(QCoreApplication::translate("TellBug", "Form", nullptr));
        submitButton->setText(QCoreApplication::translate("TellBug", "\346\217\220\344\272\244", nullptr));
        label->setText(QCoreApplication::translate("TellBug", "\345\220\215\345\255\227", nullptr));
        nameEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("TellBug", "\351\202\256\347\256\261", nullptr));
        mailEdit->setText(QString());
        label_6->setText(QCoreApplication::translate("TellBug", "\345\257\206\347\240\201", nullptr));
        passWordEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("TellBug", "\345\271\264\351\276\204", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("TellBug", "5\345\262\201", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("TellBug", "6\345\262\201", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("TellBug", "7\345\262\201", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("TellBug", "8\345\262\201", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("TellBug", "9\345\262\201", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("TellBug", "10\345\262\201", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("TellBug", "11\345\262\201", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("TellBug", "12\345\262\201", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("TellBug", "13\345\262\201", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("TellBug", "14\345\262\201", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("TellBug", "15\345\262\201", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("TellBug", "16\345\262\201", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("TellBug", "17\345\262\201", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("TellBug", "18\345\262\201", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("TellBug", "19\345\262\201", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("TellBug", "20\345\262\201", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("TellBug", "21\345\262\201", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("TellBug", "22\345\262\201", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("TellBug", "23\345\262\201", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("TellBug", "24\345\262\201", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("TellBug", "25\345\262\201", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("TellBug", "26\345\262\201", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("TellBug", "27\345\262\201", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("TellBug", "28\345\262\201", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("TellBug", "29\345\262\201", nullptr));
        comboBox->setItemText(26, QCoreApplication::translate("TellBug", "30\345\262\201", nullptr));
        comboBox->setItemText(27, QCoreApplication::translate("TellBug", "31\345\262\201", nullptr));
        comboBox->setItemText(28, QCoreApplication::translate("TellBug", "32\345\262\201", nullptr));
        comboBox->setItemText(29, QCoreApplication::translate("TellBug", "33\345\262\201", nullptr));
        comboBox->setItemText(30, QCoreApplication::translate("TellBug", "34\345\262\201", nullptr));
        comboBox->setItemText(31, QCoreApplication::translate("TellBug", "35\345\262\201", nullptr));
        comboBox->setItemText(32, QCoreApplication::translate("TellBug", "36\345\262\201", nullptr));
        comboBox->setItemText(33, QCoreApplication::translate("TellBug", "37\345\262\201", nullptr));
        comboBox->setItemText(34, QCoreApplication::translate("TellBug", "38\345\262\201", nullptr));
        comboBox->setItemText(35, QCoreApplication::translate("TellBug", "39\345\262\201", nullptr));
        comboBox->setItemText(36, QCoreApplication::translate("TellBug", "40\345\262\201", nullptr));
        comboBox->setItemText(37, QCoreApplication::translate("TellBug", "41\345\262\201", nullptr));
        comboBox->setItemText(38, QCoreApplication::translate("TellBug", "42\345\262\201", nullptr));
        comboBox->setItemText(39, QCoreApplication::translate("TellBug", "43\345\262\201", nullptr));
        comboBox->setItemText(40, QCoreApplication::translate("TellBug", "44\345\262\201", nullptr));
        comboBox->setItemText(41, QCoreApplication::translate("TellBug", "45\345\262\201", nullptr));
        comboBox->setItemText(42, QCoreApplication::translate("TellBug", "46\345\262\201", nullptr));
        comboBox->setItemText(43, QCoreApplication::translate("TellBug", "47\345\262\201", nullptr));
        comboBox->setItemText(44, QCoreApplication::translate("TellBug", "48\345\262\201", nullptr));
        comboBox->setItemText(45, QCoreApplication::translate("TellBug", "49\345\262\201", nullptr));
        comboBox->setItemText(46, QCoreApplication::translate("TellBug", "50\345\262\201", nullptr));
        comboBox->setItemText(47, QCoreApplication::translate("TellBug", "51\345\262\201", nullptr));
        comboBox->setItemText(48, QCoreApplication::translate("TellBug", "52\345\262\201", nullptr));
        comboBox->setItemText(49, QCoreApplication::translate("TellBug", "53\345\262\201", nullptr));
        comboBox->setItemText(50, QCoreApplication::translate("TellBug", "54\345\262\201", nullptr));
        comboBox->setItemText(51, QCoreApplication::translate("TellBug", "55\345\262\201", nullptr));
        comboBox->setItemText(52, QCoreApplication::translate("TellBug", "56\345\262\201", nullptr));
        comboBox->setItemText(53, QCoreApplication::translate("TellBug", "57\345\262\201", nullptr));
        comboBox->setItemText(54, QCoreApplication::translate("TellBug", "58\345\262\201", nullptr));
        comboBox->setItemText(55, QCoreApplication::translate("TellBug", "59\345\262\201", nullptr));
        comboBox->setItemText(56, QCoreApplication::translate("TellBug", "60\345\262\201", nullptr));
        comboBox->setItemText(57, QCoreApplication::translate("TellBug", "61\345\262\201", nullptr));
        comboBox->setItemText(58, QCoreApplication::translate("TellBug", "62\345\262\201", nullptr));
        comboBox->setItemText(59, QCoreApplication::translate("TellBug", "63\345\262\201", nullptr));
        comboBox->setItemText(60, QCoreApplication::translate("TellBug", "64\345\262\201", nullptr));
        comboBox->setItemText(61, QCoreApplication::translate("TellBug", "65\345\262\201", nullptr));
        comboBox->setItemText(62, QCoreApplication::translate("TellBug", "66\345\262\201", nullptr));
        comboBox->setItemText(63, QCoreApplication::translate("TellBug", "67\345\262\201", nullptr));
        comboBox->setItemText(64, QCoreApplication::translate("TellBug", "68\345\262\201", nullptr));
        comboBox->setItemText(65, QCoreApplication::translate("TellBug", "69\345\262\201", nullptr));
        comboBox->setItemText(66, QCoreApplication::translate("TellBug", "70\345\262\201", nullptr));

        label_2->setText(QCoreApplication::translate("TellBug", "\346\200\247\345\210\253", nullptr));
        maleRadioButton->setText(QCoreApplication::translate("TellBug", "Boy", nullptr));
        femaleRadioButton->setText(QCoreApplication::translate("TellBug", "Girl", nullptr));
        plainTextEdit->setPlainText(QString());
        label_5->setText(QCoreApplication::translate("TellBug", "\346\217\220\344\272\244bug\345\220\247", nullptr));
        backButton->setText(QCoreApplication::translate("TellBug", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TellBug: public Ui_TellBug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELLBUG_H
