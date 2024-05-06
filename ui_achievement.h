/********************************************************************************
** Form generated from reading UI file 'achievement.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACHIEVEMENT_H
#define UI_ACHIEVEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Achievement
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *GeneralTab;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QPushButton *backButton;
    QScrollArea *GeneralWidget;
    QWidget *GeneralContents;
    QFrame *line_20;
    QFrame *line_22;
    QFrame *line_2;
    QFrame *line_19;
    QFrame *LaunchAppCount;
    QFrame *UseTime;
    QFrame *line_26;
    QFrame *MarathonRuunner;
    QFrame *line_18;
    QFrame *ResearchCount;
    QFrame *GoldenUser;
    QFrame *line_23;
    QFrame *SearchWizard;
    QFrame *InfoNinja;
    QFrame *SearchMaestro;
    QFrame *line;
    QFrame *SearchConqueror;
    QFrame *line_15;
    QFrame *line_14;
    QFrame *line_16;
    QFrame *InfoConnoisseur;
    QFrame *line_4;
    QFrame *Launch_o_maniac;
    QFrame *line_3;
    QFrame *line_5;
    QFrame *QueryUpdataCount;
    QFrame *line_11;
    QFrame *Launchaholic;
    QFrame *line_27;
    QFrame *line_12;
    QFrame *TimeTraveler;
    QFrame *line_21;
    QFrame *line_17;
    QFrame *line_24;
    QFrame *LaunchEnthusiast;
    QFrame *line_13;
    QFrame *DataDynamo;
    QFrame *DedicatedUser;
    QFrame *App_o_holic;
    QFrame *SearchSleuth;
    QFrame *AAA;
    QWidget *TimeManagerTab;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QScrollArea *TimeManagerWidget;
    QWidget *TimeManagerContents;
    QFrame *line_25;
    QFrame *line_28;
    QFrame *line_6;
    QFrame *line_29;
    QFrame *LaunchAppCount_2;
    QFrame *AllEatingCount;
    QFrame *MarathonRuunner_2;
    QFrame *line_31;
    QFrame *ResearchCount_2;
    QFrame *line_32;
    QFrame *SearchWizard_2;
    QFrame *InfoNinja_2;
    QFrame *SearchMaestro_2;
    QFrame *line_7;
    QFrame *line_33;
    QFrame *line_34;
    QFrame *line_35;
    QFrame *InfoConnoisseur_2;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *AAAAA;
    QFrame *WorkingCount;
    QFrame *line_36;
    QFrame *Launchaholic_2;
    QFrame *line_38;
    QFrame *TimeTraveler_2;
    QFrame *line_39;
    QFrame *line_40;
    QFrame *LaunchEnthusiast_2;
    QFrame *line_42;
    QFrame *DataDynamo_2;
    QFrame *DedicatedUser_2;
    QFrame *App_o_holic_2;
    QFrame *SearchSleuth_2;
    QPushButton *backButton_2;

    void setupUi(QWidget *Achievement)
    {
        if (Achievement->objectName().isEmpty())
            Achievement->setObjectName("Achievement");
        Achievement->resize(914, 655);
        Achievement->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Achievement);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(Achievement);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(900, 0));
        tabWidget->setMaximumSize(QSize(900, 16777215));
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        GeneralTab = new QWidget();
        GeneralTab->setObjectName("GeneralTab");
        GeneralTab->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);\n"
"border-left:6px solid white;\n"
"border-top:6px solid white;\n"
"border-right:6px solid rgba(0, 0, 0,0.5);\n"
"border-bottom:6px solid rgba(0, 0, 0,0.5);"));
        gridLayout_3 = new QGridLayout(GeneralTab);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(GeneralTab);
        label->setObjectName("label");
        label->setMinimumSize(QSize(100, 36));
        label->setMaximumSize(QSize(100, 36));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border:0;"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        backButton = new QPushButton(GeneralTab);
        backButton->setObjectName("backButton");
        backButton->setMinimumSize(QSize(0, 50));
        backButton->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setPointSize(16);
        backButton->setFont(font1);
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:0;"));

        gridLayout_3->addWidget(backButton, 3, 0, 1, 1);

        GeneralWidget = new QScrollArea(GeneralTab);
        GeneralWidget->setObjectName("GeneralWidget");
        GeneralWidget->setMinimumSize(QSize(850, 495));
        GeneralWidget->setMaximumSize(QSize(300, 495));
        GeneralWidget->setStyleSheet(QString::fromUtf8("border:3px solid rgba(62, 62, 62,0.8);"));
        GeneralWidget->setLineWidth(0);
        GeneralWidget->setWidgetResizable(true);
        GeneralWidget->setAlignment(Qt::AlignCenter);
        GeneralContents = new QWidget();
        GeneralContents->setObjectName("GeneralContents");
        GeneralContents->setGeometry(QRect(0, 0, 844, 489));
        line_20 = new QFrame(GeneralContents);
        line_20->setObjectName("line_20");
        line_20->setGeometry(QRect(500, 57, 30, 5));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_20->sizePolicy().hasHeightForWidth());
        line_20->setSizePolicy(sizePolicy);
        line_20->setMinimumSize(QSize(30, 5));
        line_20->setMaximumSize(QSize(30, 5));
        line_20->setFrameShape(QFrame::Shape::HLine);
        line_20->setFrameShadow(QFrame::Shadow::Sunken);
        line_22 = new QFrame(GeneralContents);
        line_22->setObjectName("line_22");
        line_22->setGeometry(QRect(501, 286, 30, 5));
        sizePolicy.setHeightForWidth(line_22->sizePolicy().hasHeightForWidth());
        line_22->setSizePolicy(sizePolicy);
        line_22->setMinimumSize(QSize(30, 5));
        line_22->setMaximumSize(QSize(30, 5));
        line_22->setFrameShape(QFrame::Shape::HLine);
        line_22->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(GeneralContents);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(170, 57, 5, 351));
        line_2->setMinimumSize(QSize(5, 0));
        line_2->setMaximumSize(QSize(5, 16777215));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_19 = new QFrame(GeneralContents);
        line_19->setObjectName("line_19");
        line_19->setGeometry(QRect(390, 402, 30, 5));
        sizePolicy.setHeightForWidth(line_19->sizePolicy().hasHeightForWidth());
        line_19->setSizePolicy(sizePolicy);
        line_19->setMinimumSize(QSize(30, 5));
        line_19->setMaximumSize(QSize(30, 5));
        line_19->setFrameShape(QFrame::Shape::HLine);
        line_19->setFrameShadow(QFrame::Shadow::Sunken);
        LaunchAppCount = new QFrame(GeneralContents);
        LaunchAppCount->setObjectName("LaunchAppCount");
        LaunchAppCount->setGeometry(QRect(200, 365, 80, 80));
        LaunchAppCount->setMinimumSize(QSize(80, 80));
        LaunchAppCount->setMaximumSize(QSize(80, 80));
        LaunchAppCount->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        LaunchAppCount->setFrameShape(QFrame::StyledPanel);
        LaunchAppCount->setFrameShadow(QFrame::Raised);
        UseTime = new QFrame(GeneralContents);
        UseTime->setObjectName("UseTime");
        UseTime->setGeometry(QRect(200, 20, 80, 80));
        UseTime->setMinimumSize(QSize(80, 80));
        UseTime->setMaximumSize(QSize(80, 80));
        UseTime->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        UseTime->setFrameShape(QFrame::StyledPanel);
        UseTime->setFrameShadow(QFrame::Raised);
        line_26 = new QFrame(GeneralContents);
        line_26->setObjectName("line_26");
        line_26->setGeometry(QRect(610, 285, 30, 5));
        sizePolicy.setHeightForWidth(line_26->sizePolicy().hasHeightForWidth());
        line_26->setSizePolicy(sizePolicy);
        line_26->setMinimumSize(QSize(30, 5));
        line_26->setMaximumSize(QSize(30, 5));
        line_26->setFrameShape(QFrame::Shape::HLine);
        line_26->setFrameShadow(QFrame::Shadow::Sunken);
        MarathonRuunner = new QFrame(GeneralContents);
        MarathonRuunner->setObjectName("MarathonRuunner");
        MarathonRuunner->setGeometry(QRect(310, 20, 80, 80));
        MarathonRuunner->setMinimumSize(QSize(80, 80));
        MarathonRuunner->setMaximumSize(QSize(80, 80));
        MarathonRuunner->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        MarathonRuunner->setFrameShape(QFrame::StyledPanel);
        MarathonRuunner->setFrameShadow(QFrame::Raised);
        line_18 = new QFrame(GeneralContents);
        line_18->setObjectName("line_18");
        line_18->setGeometry(QRect(391, 287, 30, 5));
        sizePolicy.setHeightForWidth(line_18->sizePolicy().hasHeightForWidth());
        line_18->setSizePolicy(sizePolicy);
        line_18->setMinimumSize(QSize(30, 5));
        line_18->setMaximumSize(QSize(30, 5));
        line_18->setFrameShape(QFrame::Shape::HLine);
        line_18->setFrameShadow(QFrame::Shadow::Sunken);
        ResearchCount = new QFrame(GeneralContents);
        ResearchCount->setObjectName("ResearchCount");
        ResearchCount->setGeometry(QRect(203, 249, 80, 80));
        ResearchCount->setMinimumSize(QSize(80, 80));
        ResearchCount->setMaximumSize(QSize(80, 80));
        ResearchCount->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        ResearchCount->setFrameShape(QFrame::StyledPanel);
        ResearchCount->setFrameShadow(QFrame::Raised);
        GoldenUser = new QFrame(GeneralContents);
        GoldenUser->setObjectName("GoldenUser");
        GoldenUser->setGeometry(QRect(640, 19, 80, 80));
        GoldenUser->setMinimumSize(QSize(80, 80));
        GoldenUser->setMaximumSize(QSize(80, 80));
        GoldenUser->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        GoldenUser->setFrameShape(QFrame::StyledPanel);
        GoldenUser->setFrameShadow(QFrame::Raised);
        line_23 = new QFrame(GeneralContents);
        line_23->setObjectName("line_23");
        line_23->setGeometry(QRect(500, 401, 30, 5));
        sizePolicy.setHeightForWidth(line_23->sizePolicy().hasHeightForWidth());
        line_23->setSizePolicy(sizePolicy);
        line_23->setMinimumSize(QSize(30, 5));
        line_23->setMaximumSize(QSize(30, 5));
        line_23->setFrameShape(QFrame::Shape::HLine);
        line_23->setFrameShadow(QFrame::Shadow::Sunken);
        SearchWizard = new QFrame(GeneralContents);
        SearchWizard->setObjectName("SearchWizard");
        SearchWizard->setGeometry(QRect(530, 248, 80, 80));
        SearchWizard->setMinimumSize(QSize(80, 80));
        SearchWizard->setMaximumSize(QSize(80, 80));
        SearchWizard->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        SearchWizard->setFrameShape(QFrame::StyledPanel);
        SearchWizard->setFrameShadow(QFrame::Raised);
        InfoNinja = new QFrame(GeneralContents);
        InfoNinja->setObjectName("InfoNinja");
        InfoNinja->setGeometry(QRect(530, 132, 80, 80));
        InfoNinja->setMinimumSize(QSize(80, 80));
        InfoNinja->setMaximumSize(QSize(80, 80));
        InfoNinja->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        InfoNinja->setFrameShape(QFrame::StyledPanel);
        InfoNinja->setFrameShadow(QFrame::Raised);
        SearchMaestro = new QFrame(GeneralContents);
        SearchMaestro->setObjectName("SearchMaestro");
        SearchMaestro->setGeometry(QRect(421, 249, 80, 80));
        SearchMaestro->setMinimumSize(QSize(80, 80));
        SearchMaestro->setMaximumSize(QSize(80, 80));
        SearchMaestro->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        SearchMaestro->setFrameShape(QFrame::StyledPanel);
        SearchMaestro->setFrameShadow(QFrame::Raised);
        line = new QFrame(GeneralContents);
        line->setObjectName("line");
        line->setGeometry(QRect(140, 236, 30, 5));
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setMinimumSize(QSize(30, 5));
        line->setMaximumSize(QSize(30, 5));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        SearchConqueror = new QFrame(GeneralContents);
        SearchConqueror->setObjectName("SearchConqueror");
        SearchConqueror->setGeometry(QRect(640, 247, 80, 80));
        SearchConqueror->setMinimumSize(QSize(80, 80));
        SearchConqueror->setMaximumSize(QSize(80, 80));
        SearchConqueror->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        SearchConqueror->setFrameShape(QFrame::StyledPanel);
        SearchConqueror->setFrameShadow(QFrame::Raised);
        line_15 = new QFrame(GeneralContents);
        line_15->setObjectName("line_15");
        line_15->setGeometry(QRect(280, 403, 30, 5));
        sizePolicy.setHeightForWidth(line_15->sizePolicy().hasHeightForWidth());
        line_15->setSizePolicy(sizePolicy);
        line_15->setMinimumSize(QSize(30, 5));
        line_15->setMaximumSize(QSize(30, 5));
        line_15->setFrameShape(QFrame::Shape::HLine);
        line_15->setFrameShadow(QFrame::Shadow::Sunken);
        line_14 = new QFrame(GeneralContents);
        line_14->setObjectName("line_14");
        line_14->setGeometry(QRect(283, 287, 30, 5));
        sizePolicy.setHeightForWidth(line_14->sizePolicy().hasHeightForWidth());
        line_14->setSizePolicy(sizePolicy);
        line_14->setMinimumSize(QSize(30, 5));
        line_14->setMaximumSize(QSize(30, 5));
        line_14->setFrameShape(QFrame::Shape::HLine);
        line_14->setFrameShadow(QFrame::Shadow::Sunken);
        line_16 = new QFrame(GeneralContents);
        line_16->setObjectName("line_16");
        line_16->setGeometry(QRect(390, 57, 30, 5));
        sizePolicy.setHeightForWidth(line_16->sizePolicy().hasHeightForWidth());
        line_16->setSizePolicy(sizePolicy);
        line_16->setMinimumSize(QSize(30, 5));
        line_16->setMaximumSize(QSize(30, 5));
        line_16->setFrameShape(QFrame::Shape::HLine);
        line_16->setFrameShadow(QFrame::Shadow::Sunken);
        InfoConnoisseur = new QFrame(GeneralContents);
        InfoConnoisseur->setObjectName("InfoConnoisseur");
        InfoConnoisseur->setGeometry(QRect(420, 133, 80, 80));
        InfoConnoisseur->setMinimumSize(QSize(80, 80));
        InfoConnoisseur->setMaximumSize(QSize(80, 80));
        InfoConnoisseur->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        InfoConnoisseur->setFrameShape(QFrame::StyledPanel);
        InfoConnoisseur->setFrameShadow(QFrame::Raised);
        line_4 = new QFrame(GeneralContents);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(173, 287, 30, 5));
        sizePolicy.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy);
        line_4->setMinimumSize(QSize(30, 5));
        line_4->setMaximumSize(QSize(30, 5));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        Launch_o_maniac = new QFrame(GeneralContents);
        Launch_o_maniac->setObjectName("Launch_o_maniac");
        Launch_o_maniac->setGeometry(QRect(640, 362, 80, 80));
        Launch_o_maniac->setMinimumSize(QSize(80, 80));
        Launch_o_maniac->setMaximumSize(QSize(80, 80));
        Launch_o_maniac->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        Launch_o_maniac->setFrameShape(QFrame::StyledPanel);
        Launch_o_maniac->setFrameShadow(QFrame::Raised);
        line_3 = new QFrame(GeneralContents);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(170, 57, 30, 5));
        sizePolicy.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy);
        line_3->setMinimumSize(QSize(30, 5));
        line_3->setMaximumSize(QSize(30, 5));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(GeneralContents);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(170, 403, 30, 5));
        sizePolicy.setHeightForWidth(line_5->sizePolicy().hasHeightForWidth());
        line_5->setSizePolicy(sizePolicy);
        line_5->setMinimumSize(QSize(30, 5));
        line_5->setMaximumSize(QSize(30, 5));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        QueryUpdataCount = new QFrame(GeneralContents);
        QueryUpdataCount->setObjectName("QueryUpdataCount");
        QueryUpdataCount->setGeometry(QRect(200, 134, 80, 80));
        QueryUpdataCount->setMinimumSize(QSize(80, 80));
        QueryUpdataCount->setMaximumSize(QSize(80, 80));
        QueryUpdataCount->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        QueryUpdataCount->setFrameShape(QFrame::StyledPanel);
        QueryUpdataCount->setFrameShadow(QFrame::Raised);
        line_11 = new QFrame(GeneralContents);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(170, 172, 30, 5));
        sizePolicy.setHeightForWidth(line_11->sizePolicy().hasHeightForWidth());
        line_11->setSizePolicy(sizePolicy);
        line_11->setMinimumSize(QSize(30, 5));
        line_11->setMaximumSize(QSize(30, 5));
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        Launchaholic = new QFrame(GeneralContents);
        Launchaholic->setObjectName("Launchaholic");
        Launchaholic->setGeometry(QRect(420, 364, 80, 80));
        Launchaholic->setMinimumSize(QSize(80, 80));
        Launchaholic->setMaximumSize(QSize(80, 80));
        Launchaholic->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        Launchaholic->setFrameShape(QFrame::StyledPanel);
        Launchaholic->setFrameShadow(QFrame::Raised);
        line_27 = new QFrame(GeneralContents);
        line_27->setObjectName("line_27");
        line_27->setGeometry(QRect(610, 400, 30, 5));
        sizePolicy.setHeightForWidth(line_27->sizePolicy().hasHeightForWidth());
        line_27->setSizePolicy(sizePolicy);
        line_27->setMinimumSize(QSize(30, 5));
        line_27->setMaximumSize(QSize(30, 5));
        line_27->setFrameShape(QFrame::Shape::HLine);
        line_27->setFrameShadow(QFrame::Shadow::Sunken);
        line_12 = new QFrame(GeneralContents);
        line_12->setObjectName("line_12");
        line_12->setGeometry(QRect(280, 57, 30, 5));
        sizePolicy.setHeightForWidth(line_12->sizePolicy().hasHeightForWidth());
        line_12->setSizePolicy(sizePolicy);
        line_12->setMinimumSize(QSize(30, 5));
        line_12->setMaximumSize(QSize(30, 5));
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);
        TimeTraveler = new QFrame(GeneralContents);
        TimeTraveler->setObjectName("TimeTraveler");
        TimeTraveler->setGeometry(QRect(420, 19, 80, 80));
        TimeTraveler->setMinimumSize(QSize(80, 80));
        TimeTraveler->setMaximumSize(QSize(80, 80));
        TimeTraveler->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        TimeTraveler->setFrameShape(QFrame::StyledPanel);
        TimeTraveler->setFrameShadow(QFrame::Raised);
        line_21 = new QFrame(GeneralContents);
        line_21->setObjectName("line_21");
        line_21->setGeometry(QRect(500, 170, 30, 5));
        sizePolicy.setHeightForWidth(line_21->sizePolicy().hasHeightForWidth());
        line_21->setSizePolicy(sizePolicy);
        line_21->setMinimumSize(QSize(30, 5));
        line_21->setMaximumSize(QSize(30, 5));
        line_21->setFrameShape(QFrame::Shape::HLine);
        line_21->setFrameShadow(QFrame::Shadow::Sunken);
        line_17 = new QFrame(GeneralContents);
        line_17->setObjectName("line_17");
        line_17->setGeometry(QRect(390, 171, 30, 5));
        sizePolicy.setHeightForWidth(line_17->sizePolicy().hasHeightForWidth());
        line_17->setSizePolicy(sizePolicy);
        line_17->setMinimumSize(QSize(30, 5));
        line_17->setMaximumSize(QSize(30, 5));
        line_17->setFrameShape(QFrame::Shape::HLine);
        line_17->setFrameShadow(QFrame::Shadow::Sunken);
        line_24 = new QFrame(GeneralContents);
        line_24->setObjectName("line_24");
        line_24->setGeometry(QRect(610, 57, 30, 5));
        sizePolicy.setHeightForWidth(line_24->sizePolicy().hasHeightForWidth());
        line_24->setSizePolicy(sizePolicy);
        line_24->setMinimumSize(QSize(30, 5));
        line_24->setMaximumSize(QSize(30, 5));
        line_24->setFrameShape(QFrame::Shape::HLine);
        line_24->setFrameShadow(QFrame::Shadow::Sunken);
        LaunchEnthusiast = new QFrame(GeneralContents);
        LaunchEnthusiast->setObjectName("LaunchEnthusiast");
        LaunchEnthusiast->setGeometry(QRect(310, 365, 80, 80));
        LaunchEnthusiast->setMinimumSize(QSize(80, 80));
        LaunchEnthusiast->setMaximumSize(QSize(80, 80));
        LaunchEnthusiast->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        LaunchEnthusiast->setFrameShape(QFrame::StyledPanel);
        LaunchEnthusiast->setFrameShadow(QFrame::Raised);
        line_13 = new QFrame(GeneralContents);
        line_13->setObjectName("line_13");
        line_13->setGeometry(QRect(280, 172, 30, 5));
        sizePolicy.setHeightForWidth(line_13->sizePolicy().hasHeightForWidth());
        line_13->setSizePolicy(sizePolicy);
        line_13->setMinimumSize(QSize(30, 5));
        line_13->setMaximumSize(QSize(30, 5));
        line_13->setFrameShape(QFrame::Shape::HLine);
        line_13->setFrameShadow(QFrame::Shadow::Sunken);
        DataDynamo = new QFrame(GeneralContents);
        DataDynamo->setObjectName("DataDynamo");
        DataDynamo->setGeometry(QRect(310, 134, 80, 80));
        DataDynamo->setMinimumSize(QSize(80, 80));
        DataDynamo->setMaximumSize(QSize(80, 80));
        DataDynamo->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        DataDynamo->setFrameShape(QFrame::StyledPanel);
        DataDynamo->setFrameShadow(QFrame::Raised);
        DedicatedUser = new QFrame(GeneralContents);
        DedicatedUser->setObjectName("DedicatedUser");
        DedicatedUser->setGeometry(QRect(530, 19, 80, 80));
        DedicatedUser->setMinimumSize(QSize(80, 80));
        DedicatedUser->setMaximumSize(QSize(80, 80));
        DedicatedUser->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        DedicatedUser->setFrameShape(QFrame::StyledPanel);
        DedicatedUser->setFrameShadow(QFrame::Raised);
        App_o_holic = new QFrame(GeneralContents);
        App_o_holic->setObjectName("App_o_holic");
        App_o_holic->setGeometry(QRect(530, 363, 80, 80));
        App_o_holic->setMinimumSize(QSize(80, 80));
        App_o_holic->setMaximumSize(QSize(80, 80));
        App_o_holic->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        App_o_holic->setFrameShape(QFrame::StyledPanel);
        App_o_holic->setFrameShadow(QFrame::Raised);
        SearchSleuth = new QFrame(GeneralContents);
        SearchSleuth->setObjectName("SearchSleuth");
        SearchSleuth->setGeometry(QRect(311, 249, 80, 80));
        SearchSleuth->setMinimumSize(QSize(80, 80));
        SearchSleuth->setMaximumSize(QSize(80, 80));
        SearchSleuth->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        SearchSleuth->setFrameShape(QFrame::StyledPanel);
        SearchSleuth->setFrameShadow(QFrame::Raised);
        AAA = new QFrame(GeneralContents);
        AAA->setObjectName("AAA");
        AAA->setGeometry(QRect(60, 200, 80, 80));
        AAA->setMinimumSize(QSize(80, 80));
        AAA->setMaximumSize(QSize(80, 80));
        AAA->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        AAA->setFrameShape(QFrame::StyledPanel);
        AAA->setFrameShadow(QFrame::Raised);
        GeneralWidget->setWidget(GeneralContents);

        gridLayout_3->addWidget(GeneralWidget, 2, 0, 1, 1);

        tabWidget->addTab(GeneralTab, QString());
        TimeManagerTab = new QWidget();
        TimeManagerTab->setObjectName("TimeManagerTab");
        TimeManagerTab->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);\n"
"border-left:6px solid white;\n"
"border-top:6px solid white;\n"
"border-right:6px solid rgba(0, 0, 0,0.5);\n"
"border-bottom:6px solid rgba(0, 0, 0,0.5);"));
        gridLayout_2 = new QGridLayout(TimeManagerTab);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(TimeManagerTab);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 36));
        label_2->setMaximumSize(QSize(100, 36));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border:0;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        TimeManagerWidget = new QScrollArea(TimeManagerTab);
        TimeManagerWidget->setObjectName("TimeManagerWidget");
        TimeManagerWidget->setMinimumSize(QSize(850, 495));
        TimeManagerWidget->setMaximumSize(QSize(850, 495));
        TimeManagerWidget->setStyleSheet(QString::fromUtf8("border:3px solid rgba(62, 62, 62,0.8);"));
        TimeManagerWidget->setLineWidth(0);
        TimeManagerWidget->setWidgetResizable(true);
        TimeManagerWidget->setAlignment(Qt::AlignCenter);
        TimeManagerContents = new QWidget();
        TimeManagerContents->setObjectName("TimeManagerContents");
        TimeManagerContents->setGeometry(QRect(0, 0, 844, 489));
        line_25 = new QFrame(TimeManagerContents);
        line_25->setObjectName("line_25");
        line_25->setGeometry(QRect(500, 60, 30, 5));
        sizePolicy.setHeightForWidth(line_25->sizePolicy().hasHeightForWidth());
        line_25->setSizePolicy(sizePolicy);
        line_25->setMinimumSize(QSize(30, 5));
        line_25->setMaximumSize(QSize(30, 5));
        line_25->setFrameShape(QFrame::Shape::HLine);
        line_25->setFrameShadow(QFrame::Shadow::Sunken);
        line_28 = new QFrame(TimeManagerContents);
        line_28->setObjectName("line_28");
        line_28->setGeometry(QRect(501, 289, 30, 5));
        sizePolicy.setHeightForWidth(line_28->sizePolicy().hasHeightForWidth());
        line_28->setSizePolicy(sizePolicy);
        line_28->setMinimumSize(QSize(30, 5));
        line_28->setMaximumSize(QSize(30, 5));
        line_28->setFrameShape(QFrame::Shape::HLine);
        line_28->setFrameShadow(QFrame::Shadow::Sunken);
        line_6 = new QFrame(TimeManagerContents);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(170, 60, 5, 351));
        line_6->setMinimumSize(QSize(5, 0));
        line_6->setMaximumSize(QSize(5, 16777215));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        line_29 = new QFrame(TimeManagerContents);
        line_29->setObjectName("line_29");
        line_29->setGeometry(QRect(390, 405, 30, 5));
        sizePolicy.setHeightForWidth(line_29->sizePolicy().hasHeightForWidth());
        line_29->setSizePolicy(sizePolicy);
        line_29->setMinimumSize(QSize(30, 5));
        line_29->setMaximumSize(QSize(30, 5));
        line_29->setFrameShape(QFrame::Shape::HLine);
        line_29->setFrameShadow(QFrame::Shadow::Sunken);
        LaunchAppCount_2 = new QFrame(TimeManagerContents);
        LaunchAppCount_2->setObjectName("LaunchAppCount_2");
        LaunchAppCount_2->setGeometry(QRect(200, 368, 80, 80));
        LaunchAppCount_2->setMinimumSize(QSize(80, 80));
        LaunchAppCount_2->setMaximumSize(QSize(80, 80));
        LaunchAppCount_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        LaunchAppCount_2->setFrameShape(QFrame::StyledPanel);
        LaunchAppCount_2->setFrameShadow(QFrame::Raised);
        AllEatingCount = new QFrame(TimeManagerContents);
        AllEatingCount->setObjectName("AllEatingCount");
        AllEatingCount->setGeometry(QRect(200, 23, 80, 80));
        AllEatingCount->setMinimumSize(QSize(80, 80));
        AllEatingCount->setMaximumSize(QSize(80, 80));
        AllEatingCount->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        AllEatingCount->setFrameShape(QFrame::StyledPanel);
        AllEatingCount->setFrameShadow(QFrame::Raised);
        MarathonRuunner_2 = new QFrame(TimeManagerContents);
        MarathonRuunner_2->setObjectName("MarathonRuunner_2");
        MarathonRuunner_2->setGeometry(QRect(310, 23, 80, 80));
        MarathonRuunner_2->setMinimumSize(QSize(80, 80));
        MarathonRuunner_2->setMaximumSize(QSize(80, 80));
        MarathonRuunner_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        MarathonRuunner_2->setFrameShape(QFrame::StyledPanel);
        MarathonRuunner_2->setFrameShadow(QFrame::Raised);
        line_31 = new QFrame(TimeManagerContents);
        line_31->setObjectName("line_31");
        line_31->setGeometry(QRect(391, 290, 30, 5));
        sizePolicy.setHeightForWidth(line_31->sizePolicy().hasHeightForWidth());
        line_31->setSizePolicy(sizePolicy);
        line_31->setMinimumSize(QSize(30, 5));
        line_31->setMaximumSize(QSize(30, 5));
        line_31->setFrameShape(QFrame::Shape::HLine);
        line_31->setFrameShadow(QFrame::Shadow::Sunken);
        ResearchCount_2 = new QFrame(TimeManagerContents);
        ResearchCount_2->setObjectName("ResearchCount_2");
        ResearchCount_2->setGeometry(QRect(203, 252, 80, 80));
        ResearchCount_2->setMinimumSize(QSize(80, 80));
        ResearchCount_2->setMaximumSize(QSize(80, 80));
        ResearchCount_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        ResearchCount_2->setFrameShape(QFrame::StyledPanel);
        ResearchCount_2->setFrameShadow(QFrame::Raised);
        line_32 = new QFrame(TimeManagerContents);
        line_32->setObjectName("line_32");
        line_32->setGeometry(QRect(500, 404, 30, 5));
        sizePolicy.setHeightForWidth(line_32->sizePolicy().hasHeightForWidth());
        line_32->setSizePolicy(sizePolicy);
        line_32->setMinimumSize(QSize(30, 5));
        line_32->setMaximumSize(QSize(30, 5));
        line_32->setFrameShape(QFrame::Shape::HLine);
        line_32->setFrameShadow(QFrame::Shadow::Sunken);
        SearchWizard_2 = new QFrame(TimeManagerContents);
        SearchWizard_2->setObjectName("SearchWizard_2");
        SearchWizard_2->setGeometry(QRect(530, 251, 80, 80));
        SearchWizard_2->setMinimumSize(QSize(80, 80));
        SearchWizard_2->setMaximumSize(QSize(80, 80));
        SearchWizard_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        SearchWizard_2->setFrameShape(QFrame::StyledPanel);
        SearchWizard_2->setFrameShadow(QFrame::Raised);
        InfoNinja_2 = new QFrame(TimeManagerContents);
        InfoNinja_2->setObjectName("InfoNinja_2");
        InfoNinja_2->setGeometry(QRect(530, 135, 80, 80));
        InfoNinja_2->setMinimumSize(QSize(80, 80));
        InfoNinja_2->setMaximumSize(QSize(80, 80));
        InfoNinja_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        InfoNinja_2->setFrameShape(QFrame::StyledPanel);
        InfoNinja_2->setFrameShadow(QFrame::Raised);
        SearchMaestro_2 = new QFrame(TimeManagerContents);
        SearchMaestro_2->setObjectName("SearchMaestro_2");
        SearchMaestro_2->setGeometry(QRect(421, 252, 80, 80));
        SearchMaestro_2->setMinimumSize(QSize(80, 80));
        SearchMaestro_2->setMaximumSize(QSize(80, 80));
        SearchMaestro_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        SearchMaestro_2->setFrameShape(QFrame::StyledPanel);
        SearchMaestro_2->setFrameShadow(QFrame::Raised);
        line_7 = new QFrame(TimeManagerContents);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(140, 237, 30, 5));
        sizePolicy.setHeightForWidth(line_7->sizePolicy().hasHeightForWidth());
        line_7->setSizePolicy(sizePolicy);
        line_7->setMinimumSize(QSize(30, 5));
        line_7->setMaximumSize(QSize(30, 5));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        line_33 = new QFrame(TimeManagerContents);
        line_33->setObjectName("line_33");
        line_33->setGeometry(QRect(280, 406, 30, 5));
        sizePolicy.setHeightForWidth(line_33->sizePolicy().hasHeightForWidth());
        line_33->setSizePolicy(sizePolicy);
        line_33->setMinimumSize(QSize(30, 5));
        line_33->setMaximumSize(QSize(30, 5));
        line_33->setFrameShape(QFrame::Shape::HLine);
        line_33->setFrameShadow(QFrame::Shadow::Sunken);
        line_34 = new QFrame(TimeManagerContents);
        line_34->setObjectName("line_34");
        line_34->setGeometry(QRect(283, 290, 30, 5));
        sizePolicy.setHeightForWidth(line_34->sizePolicy().hasHeightForWidth());
        line_34->setSizePolicy(sizePolicy);
        line_34->setMinimumSize(QSize(30, 5));
        line_34->setMaximumSize(QSize(30, 5));
        line_34->setFrameShape(QFrame::Shape::HLine);
        line_34->setFrameShadow(QFrame::Shadow::Sunken);
        line_35 = new QFrame(TimeManagerContents);
        line_35->setObjectName("line_35");
        line_35->setGeometry(QRect(390, 60, 30, 5));
        sizePolicy.setHeightForWidth(line_35->sizePolicy().hasHeightForWidth());
        line_35->setSizePolicy(sizePolicy);
        line_35->setMinimumSize(QSize(30, 5));
        line_35->setMaximumSize(QSize(30, 5));
        line_35->setFrameShape(QFrame::Shape::HLine);
        line_35->setFrameShadow(QFrame::Shadow::Sunken);
        InfoConnoisseur_2 = new QFrame(TimeManagerContents);
        InfoConnoisseur_2->setObjectName("InfoConnoisseur_2");
        InfoConnoisseur_2->setGeometry(QRect(420, 136, 80, 80));
        InfoConnoisseur_2->setMinimumSize(QSize(80, 80));
        InfoConnoisseur_2->setMaximumSize(QSize(80, 80));
        InfoConnoisseur_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        InfoConnoisseur_2->setFrameShape(QFrame::StyledPanel);
        InfoConnoisseur_2->setFrameShadow(QFrame::Raised);
        line_8 = new QFrame(TimeManagerContents);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(173, 290, 30, 5));
        sizePolicy.setHeightForWidth(line_8->sizePolicy().hasHeightForWidth());
        line_8->setSizePolicy(sizePolicy);
        line_8->setMinimumSize(QSize(30, 5));
        line_8->setMaximumSize(QSize(30, 5));
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        line_9 = new QFrame(TimeManagerContents);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(170, 60, 30, 5));
        sizePolicy.setHeightForWidth(line_9->sizePolicy().hasHeightForWidth());
        line_9->setSizePolicy(sizePolicy);
        line_9->setMinimumSize(QSize(30, 5));
        line_9->setMaximumSize(QSize(30, 5));
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        line_10 = new QFrame(TimeManagerContents);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(170, 406, 30, 5));
        sizePolicy.setHeightForWidth(line_10->sizePolicy().hasHeightForWidth());
        line_10->setSizePolicy(sizePolicy);
        line_10->setMinimumSize(QSize(30, 5));
        line_10->setMaximumSize(QSize(30, 5));
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        AAAAA = new QFrame(TimeManagerContents);
        AAAAA->setObjectName("AAAAA");
        AAAAA->setGeometry(QRect(60, 200, 80, 80));
        AAAAA->setMinimumSize(QSize(80, 80));
        AAAAA->setMaximumSize(QSize(80, 80));
        AAAAA->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        AAAAA->setFrameShape(QFrame::StyledPanel);
        AAAAA->setFrameShadow(QFrame::Raised);
        WorkingCount = new QFrame(TimeManagerContents);
        WorkingCount->setObjectName("WorkingCount");
        WorkingCount->setGeometry(QRect(200, 137, 80, 80));
        WorkingCount->setMinimumSize(QSize(80, 80));
        WorkingCount->setMaximumSize(QSize(80, 80));
        WorkingCount->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        WorkingCount->setFrameShape(QFrame::StyledPanel);
        WorkingCount->setFrameShadow(QFrame::Raised);
        line_36 = new QFrame(TimeManagerContents);
        line_36->setObjectName("line_36");
        line_36->setGeometry(QRect(170, 175, 30, 5));
        sizePolicy.setHeightForWidth(line_36->sizePolicy().hasHeightForWidth());
        line_36->setSizePolicy(sizePolicy);
        line_36->setMinimumSize(QSize(30, 5));
        line_36->setMaximumSize(QSize(30, 5));
        line_36->setFrameShape(QFrame::Shape::HLine);
        line_36->setFrameShadow(QFrame::Shadow::Sunken);
        Launchaholic_2 = new QFrame(TimeManagerContents);
        Launchaholic_2->setObjectName("Launchaholic_2");
        Launchaholic_2->setGeometry(QRect(420, 367, 80, 80));
        Launchaholic_2->setMinimumSize(QSize(80, 80));
        Launchaholic_2->setMaximumSize(QSize(80, 80));
        Launchaholic_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        Launchaholic_2->setFrameShape(QFrame::StyledPanel);
        Launchaholic_2->setFrameShadow(QFrame::Raised);
        line_38 = new QFrame(TimeManagerContents);
        line_38->setObjectName("line_38");
        line_38->setGeometry(QRect(280, 60, 30, 5));
        sizePolicy.setHeightForWidth(line_38->sizePolicy().hasHeightForWidth());
        line_38->setSizePolicy(sizePolicy);
        line_38->setMinimumSize(QSize(30, 5));
        line_38->setMaximumSize(QSize(30, 5));
        line_38->setFrameShape(QFrame::Shape::HLine);
        line_38->setFrameShadow(QFrame::Shadow::Sunken);
        TimeTraveler_2 = new QFrame(TimeManagerContents);
        TimeTraveler_2->setObjectName("TimeTraveler_2");
        TimeTraveler_2->setGeometry(QRect(420, 22, 80, 80));
        TimeTraveler_2->setMinimumSize(QSize(80, 80));
        TimeTraveler_2->setMaximumSize(QSize(80, 80));
        TimeTraveler_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        TimeTraveler_2->setFrameShape(QFrame::StyledPanel);
        TimeTraveler_2->setFrameShadow(QFrame::Raised);
        line_39 = new QFrame(TimeManagerContents);
        line_39->setObjectName("line_39");
        line_39->setGeometry(QRect(500, 173, 30, 5));
        sizePolicy.setHeightForWidth(line_39->sizePolicy().hasHeightForWidth());
        line_39->setSizePolicy(sizePolicy);
        line_39->setMinimumSize(QSize(30, 5));
        line_39->setMaximumSize(QSize(30, 5));
        line_39->setFrameShape(QFrame::Shape::HLine);
        line_39->setFrameShadow(QFrame::Shadow::Sunken);
        line_40 = new QFrame(TimeManagerContents);
        line_40->setObjectName("line_40");
        line_40->setGeometry(QRect(390, 174, 30, 5));
        sizePolicy.setHeightForWidth(line_40->sizePolicy().hasHeightForWidth());
        line_40->setSizePolicy(sizePolicy);
        line_40->setMinimumSize(QSize(30, 5));
        line_40->setMaximumSize(QSize(30, 5));
        line_40->setFrameShape(QFrame::Shape::HLine);
        line_40->setFrameShadow(QFrame::Shadow::Sunken);
        LaunchEnthusiast_2 = new QFrame(TimeManagerContents);
        LaunchEnthusiast_2->setObjectName("LaunchEnthusiast_2");
        LaunchEnthusiast_2->setGeometry(QRect(310, 368, 80, 80));
        LaunchEnthusiast_2->setMinimumSize(QSize(80, 80));
        LaunchEnthusiast_2->setMaximumSize(QSize(80, 80));
        LaunchEnthusiast_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        LaunchEnthusiast_2->setFrameShape(QFrame::StyledPanel);
        LaunchEnthusiast_2->setFrameShadow(QFrame::Raised);
        line_42 = new QFrame(TimeManagerContents);
        line_42->setObjectName("line_42");
        line_42->setGeometry(QRect(280, 175, 30, 5));
        sizePolicy.setHeightForWidth(line_42->sizePolicy().hasHeightForWidth());
        line_42->setSizePolicy(sizePolicy);
        line_42->setMinimumSize(QSize(30, 5));
        line_42->setMaximumSize(QSize(30, 5));
        line_42->setFrameShape(QFrame::Shape::HLine);
        line_42->setFrameShadow(QFrame::Shadow::Sunken);
        DataDynamo_2 = new QFrame(TimeManagerContents);
        DataDynamo_2->setObjectName("DataDynamo_2");
        DataDynamo_2->setGeometry(QRect(310, 137, 80, 80));
        DataDynamo_2->setMinimumSize(QSize(80, 80));
        DataDynamo_2->setMaximumSize(QSize(80, 80));
        DataDynamo_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        DataDynamo_2->setFrameShape(QFrame::StyledPanel);
        DataDynamo_2->setFrameShadow(QFrame::Raised);
        DedicatedUser_2 = new QFrame(TimeManagerContents);
        DedicatedUser_2->setObjectName("DedicatedUser_2");
        DedicatedUser_2->setGeometry(QRect(530, 22, 80, 80));
        DedicatedUser_2->setMinimumSize(QSize(80, 80));
        DedicatedUser_2->setMaximumSize(QSize(80, 80));
        DedicatedUser_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        DedicatedUser_2->setFrameShape(QFrame::StyledPanel);
        DedicatedUser_2->setFrameShadow(QFrame::Raised);
        App_o_holic_2 = new QFrame(TimeManagerContents);
        App_o_holic_2->setObjectName("App_o_holic_2");
        App_o_holic_2->setGeometry(QRect(530, 366, 80, 80));
        App_o_holic_2->setMinimumSize(QSize(80, 80));
        App_o_holic_2->setMaximumSize(QSize(80, 80));
        App_o_holic_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        App_o_holic_2->setFrameShape(QFrame::StyledPanel);
        App_o_holic_2->setFrameShadow(QFrame::Raised);
        SearchSleuth_2 = new QFrame(TimeManagerContents);
        SearchSleuth_2->setObjectName("SearchSleuth_2");
        SearchSleuth_2->setGeometry(QRect(311, 252, 80, 80));
        SearchSleuth_2->setMinimumSize(QSize(80, 80));
        SearchSleuth_2->setMaximumSize(QSize(80, 80));
        SearchSleuth_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(255, 254, 231);"));
        SearchSleuth_2->setFrameShape(QFrame::StyledPanel);
        SearchSleuth_2->setFrameShadow(QFrame::Raised);
        TimeManagerWidget->setWidget(TimeManagerContents);

        gridLayout_2->addWidget(TimeManagerWidget, 1, 0, 1, 1);

        backButton_2 = new QPushButton(TimeManagerTab);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setMinimumSize(QSize(0, 50));
        backButton_2->setMaximumSize(QSize(16777215, 50));
        backButton_2->setFont(font1);
        backButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        backButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border:0;"));

        gridLayout_2->addWidget(backButton_2, 2, 0, 1, 1);

        tabWidget->addTab(TimeManagerTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Achievement);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Achievement);
    } // setupUi

    void retranslateUi(QWidget *Achievement)
    {
        Achievement->setWindowTitle(QCoreApplication::translate("Achievement", "Form", nullptr));
        label->setText(QCoreApplication::translate("Achievement", "\350\277\233\345\272\246", nullptr));
        backButton->setText(QCoreApplication::translate("Achievement", "\345\256\214\346\210\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(GeneralTab), QCoreApplication::translate("Achievement", "Hello World", nullptr));
        label_2->setText(QCoreApplication::translate("Achievement", "\350\277\233\345\272\246", nullptr));
        backButton_2->setText(QCoreApplication::translate("Achievement", "\345\256\214\346\210\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TimeManagerTab), QCoreApplication::translate("Achievement", "\346\227\266\351\227\264\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Achievement: public Ui_Achievement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACHIEVEMENT_H
