#include "tips.h"
#include "ui_tips.h"

QList<Tips*> Tips::allTipsObject;
int Tips::currentAnimationCount = 0;
int Tips::Count = 0;
bool Tips::isFirst = true;

Tips::Tips(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Tips)
    , animation(nullptr)
    , timerId(0)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setAttribute(Qt::WA_TranslucentBackground);
    // 设置默认样式
    setAchieveProgressStyle();

}

void Tips::StartTips(const QString &url, const QString &achievementTitleText, const QString &achievementText, bool isAchievementStyle)
{
    // 检查是否已经存在相同的 Tips 对象
    bool found = false;
    for (Tips* tip : allTipsObject) {
        if (tip->url == url && tip->ui->achievementTitleLabel->text() == achievementTitleText && tip->ui->achievementLabel->text() == achievementText) {
            found = true;
            break;
        }
    }
    // 先把对象保存起来
    this->url = url;
    ui->achievementTitleLabel->setText(achievementTitleText);
    ui->achievementTitleLabel->setFont(QFont("Arial",16));
    ui->achievementLabel->setText(achievementText);
    ui->achievementLabel->setFont(QFont("Arial",14));
    QPixmap pixmap(url);
    QPixmap scaledPixmap = pixmap.scaled(45, 45, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->iconLabel->setPixmap(scaledPixmap);

    // 设置解锁新进度样式
    if(isAchievementStyle) setUnlockNewProgressStyle();


    if (!found) {
        Count++;
        allTipsObject.append(this);
        // qDebug() << "currentAnimationCount:" << currentAnimationCount;
        // 启动 Tips 对象
        if(currentAnimationCount == 0)
        {// 先启动第一个
            Tips* firstTip = allTipsObject.at(0);
            firstTip->startAnimation(0);
            currentAnimationCount++;
        }
        else if(currentAnimationCount == 1)
        {// 再启动第二个
            Tips* secondTip = allTipsObject.at(1);
            secondTip->startAnimation(1);
            currentAnimationCount++;
        }
    }
}

void Tips::timerEvent(QTimerEvent *event)
{
    if(event->timerId() == timerId){
        // 创建动画效果
        QPropertyAnimation* animation = new QPropertyAnimation(this, "pos");
        animation->setDuration(3000); // 动画持续时间
        animation->setStartValue(this->pos());
        animation->setEndValue(QPoint(this->pos().x() + 450, this->pos().y())); // 向右移动450个像素
        connect(animation, &QPropertyAnimation::finished, this, &QDialog::close); // 动画结束后关闭对话框
        animation->start();
        killTimer(timerId);
        timerId = 0;

        connect(animation, &QPropertyAnimation::finished, []{
            // 检查是否有等待的 Tips 对象
            if (!allTipsObject.isEmpty()) {
                // 动画结束后先弹出第一个对象
                allTipsObject.takeFirst();
                Count--;
                // 找到并执行下一个 Tips 对象
                if (!allTipsObject.isEmpty()) {
                    Tips* nextTip = allTipsObject.at(0);
                    // 如果是上一对象是在y = 0位置
                    if(isFirst)
                    {
                        nextTip->startAnimation(1);
                        isFirst = false;
                    }
                    else if(!isFirst)
                    {
                        nextTip->startAnimation(0);
                        isFirst = true;
                    }
                }
                else{
                    Count = 0;
                    currentAnimationCount = 0;
                }
            }
            else{
                Count = 0;
                currentAnimationCount = 0;
            }
        });
    }
}

void Tips::startAnimation(int order)
{
    this->show();
    // 设置对话框位置
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int dialogWidth = this->width();
    int screenWidth = screenGeometry.width();
    if(order == 0)
    {
        this->move(screenWidth - dialogWidth, 20);
    }
    else
    {
        this->move(screenWidth - dialogWidth, 95);
    }
    // 创建定时器,延迟数秒后开始动画
    timerId = startTimer(5000);

}

// 达成进度tip样式
void Tips::setAchieveProgressStyle()
{
    ui->iconLabel->setStyleSheet("border:0;"
                                 "color:white;"
                                 "background-color: rgb(33, 33, 33);"
                                 "border-radius:0;"
                                 );
    ui->achievementTitleLabel->setStyleSheet("border:0;"
                                             "color:rgb(230, 240, 143);"
                                             "background-color: rgb(33, 33, 33);"
                                             "border-radius:0;"
                                             );
    ui->achievementLabel->setStyleSheet("border:0;"
                                        "color:white;"
                                        "background-color: rgb(33, 33, 33);"
                                        "border-radius:0;"
                                        );
    ui->widget->setStyleSheet("border:0;"
                              "background-color: rgb(33, 33, 33);"
                              "border: 6px solid rgb(84, 84, 84);"
                              "border-top-left-radius:10px;"
                              "border-top-right-radius:10px;"
                              "border-bottom-right-radius:10px;"
                              "border-bottom-left-radius:10px;"
                              );
    setStyleSheet("background-color: rgba(0, 0, 0,0);");
}

// 解锁新进度tip样式
void Tips::setUnlockNewProgressStyle()
{
    ui->iconLabel->setStyleSheet("border:0;"
                                 "color:white;"
                                 "border-radius:0;"
                                 );
    ui->achievementTitleLabel->setStyleSheet("border:0;"
                                             "border-radius:0;"
                                             "color: rgb(85, 85, 255);"
                                             );
    ui->achievementLabel->setStyleSheet("border:0;"
                                        "border-radius:0;"
                                        "color: rgb(0, 0, 0);"
                                        );
    ui->widget->setStyleSheet("border:0;"
                              "background-color: rgb(160, 160, 160);"
                              "border: 6px solid rgb(121, 121, 121);"
                              "border-top-left-radius:10px;"
                              "border-top-right-radius:10px;"
                              "border-bottom-right-radius:10px;"
                              "border-bottom-left-radius:10px;"
                              );
}

Tips::~Tips()
{
    delete ui;
}
