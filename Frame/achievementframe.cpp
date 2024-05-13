#include "Frame/achievementframe.h"

QString AchievementFrame::NoFinshedAchievementStyle = QStringLiteral(
        "color:white;"
        "background-color: rgb(3, 106, 149);" // 蓝色
        "border-top:4px solid rgb(7, 137, 190);"
        "border-left:4px solid rgb(7, 137, 190);"
        "border-bottom:4px solid rgba(255, 255, 255,0.6);"
        "border-right:4px solid rgba(255, 255, 255,0.6);"

    );
QString AchievementFrame::FinshedAchievementStyle  = QStringLiteral(
        "color:white;"
        "background-color: rgb(185, 143, 43);" // 黄色
        "border-top:4px solid rgb(212, 162, 38);"
        "border-left:4px solid rgb(212, 162, 38);"
        "border-bottom:4px solid rgba(255, 255, 255,0.6);"
        "border-right:4px solid rgba(255, 255, 255,0.6);"
    );

AchievementFrame::AchievementFrame(QWidget *parent)
    : QFrame(parent)
    , iconLabel(new QLabel(this))
{
    setFixedSize(80,80);
    setStyleSheet("border:0;");
    setAttribute(Qt::WA_TranslucentBackground);
}


void AchievementFrame::setPositon(int &x, int &y) // 坐标
{
    xPosition = x;
    yPosition = y;
}

void AchievementFrame::setAchievementName(const QString& FrameName) { this->FrameName = FrameName; } // 成就名

void AchievementFrame::setAchievementDescription(const QString& description) { this->description = description; } // 成就描述

void AchievementFrame::setAchievementIcon(const QString& IconResource) // 成就图标
{
    this->icon = IconResource;
    updatePixmap();
}

void AchievementFrame::updatePixmap()
{
    if (isFinshed)
    {
        QPixmap finishedPixmap(FinshedIcon);
        QPixmap scaledFinishedPixmap = finishedPixmap.scaled(70, 70, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        iconLabel->setPixmap(scaledFinishedPixmap);
    }
    else
    {
        QPixmap normalPixmap(icon);
        QPixmap scaledNormalPixmap = normalPixmap.scaled(70, 70, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        iconLabel->setPixmap(scaledNormalPixmap);
    }

    // 设置 QLabel 控件样式
    iconLabel->setStyleSheet(
        "background-color: rgb(139, 139, 139);"
        "border-bottom:5px solid rgba(0,0,0,0.6);"
        "border-right:5px solid rgba(0,0,0,0.6);"
        "border-top:5px solid rgba(255,255,255,0.6);"
        "border-left:5px solid rgba(255,255,255,0.6);");
    iconLabel->setFixedSize(80, 80);
}

void AchievementFrame::setAchievementFinshIcon(const QString& FinshedIconResource) { this->FinshedIcon = FinshedIconResource; } // 实现成就图标

void AchievementFrame::setAchievementIsFinshed(bool isFinshed) { this->isFinshed = isFinshed; }

const std::pair<int, int> AchievementFrame::getPosition() const { return std::make_pair(xPosition, yPosition); } // 返回坐标

const QString& AchievementFrame::getAchievementName() const { return FrameName; }

const QString& AchievementFrame::getAchievementDescription() const { return description; }

const QString& AchievementFrame::getAchievementIcon() const { return isFinshed ? FinshedIcon : icon; }

const QString& AchievementFrame::getAchievementStyle() const { return isFinshed ? FinshedAchievementStyle : NoFinshedAchievementStyle; }
