#include "Rest/Game/game_2048.h"
#include "ui_game_2048.h"

Game_2048::Game_2048(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Game_2048)
{
    ui->setupUi(this);
    // label方格样式
    labelStyleSheet_2 = QStringLiteral("background-color: rgb(170, 255, 85); border: 2px solid rgba(0,0,0,0.6)"); // 淡绿色
    labelStyleSheet_4 = QStringLiteral("background-color: rgb(85, 85, 255); border: 2px solid rgba(0,0,0,0.6)"); // 淡蓝色
    labelStyleSheet_8 = QStringLiteral("background-color: rgb(255, 160, 183); border: 2px solid rgba(0,0,0,0.6)"); // 淡粉色
    labelStyleSheet_16 = QStringLiteral("background-color: rgb(255, 255, 85); border: 2px solid rgba(0,0,0,0.6)"); // 淡黄色
    labelStyleSheet_32 = QStringLiteral("background-color: rgb(255, 85, 85); border: 2px solid rgba(0,0,0,0.6)"); // 淡红色
    labelStyleSheet_64 = QStringLiteral("background-color: rgb(170, 255, 255); border: 2px solid rgba(0,0,0,0.6)"); // 淡青色
    labelStyleSheet_128 = QStringLiteral("background-color: rgb(255, 140, 123); border: 2px solid rgba(0,0,0,0.6)"); // 淡橙色
    labelStyleSheet_256 = QStringLiteral("background-color: rgb(140, 0, 255); border: 2px solid rgba(0,0,0,0.6)"); // 淡紫色
    labelStyleSheet_512 = QStringLiteral("background-color: rgb(85, 0, 0); border: 2px solid rgba(0,0,0,0.6)"); // 淡暗红色
    labelStyleSheet_1024 = QStringLiteral("background-color: rgb(0, 255, 191); border: 2px solid rgba(0,0,0,0.6)"); // 淡青绿色
    labelStyleSheet_2048 = QStringLiteral("background-color: rgb(255, 255, 100); border: 2px solid rgba(0,0,0,0.6)"); // 淡黄色

    originalStyleSheet = QStringLiteral("border:2px solid rgba(0,0,0,0.6)");

    // 设置鼠标点击获取焦点
    setFocusPolicy(Qt::ClickFocus);
    // 设置字体大小
    ft.setPointSize(30);

    for (qint8 i = 1; i <= 16; i++)
    {
        QString parentFrameName = QString("frame_%1").arg(i);
        QFrame *parentFrame = ui->widget->findChild<QFrame*>(parentFrameName);
        QGridLayout *gridLayout = new QGridLayout(parentFrame);
        gridLayout->setContentsMargins(0, 0, 0, 0); // 设置边距为零

        QLabel *label = new QLabel(parentFrame);
        label->setStyleSheet(originalStyleSheet);

        label->setFixedSize(116, 116);
        // label->setText(QString("label_%1").arg(i));
        label->setAlignment(Qt::AlignCenter);
        label->setFont(ft);
        labelVector.append(label);

        gridLayout->addWidget(label);
        parentFrame->setLayout(gridLayout);
    }
    // 初始化生成两个位置
    randomInitPosition();
    // 重新开始
    connect(ui->reStartButton, &QPushButton::clicked, this, &Game_2048::randomInitPosition);

    ui->reStartButton->setStyleSheet("QPushButton{"
                                     "color: rgb(255, 255, 255);"
                                     "background-color: rgb(109, 109, 109);"
                                     "border-left:4px solid rgb(184, 184, 185);"
                                     "border-top:4px solid rgb(184, 184, 185);"
                                     "border-right:4px solid rgb(88, 88, 88);"
                                     "border-bottom:4px solid rgb(88, 88, 88);"
                                     "}"
                                     "QPushButton:hover{"
                                     "color: rgb(255, 255, 255);"
                                     "background-color: rgb(109, 109, 109);"
                                     "border:5px solid rgb(224, 226, 224);"
                                     "}");

    ui->widget_2->setStyleSheet("QWidget#widget_2{background-image:url(:/Image/rockBackground.png);}");

}

void Game_2048::randomInitPosition()
{
    for(auto label : labelVector)
    {
        label->setStyleSheet(originalStyleSheet);
        label->setText("");
    }
    // 生成两个随机位置
    int randomPosition1 = QRandomGenerator::global()->bounded(16);
    int randomPosition2 = QRandomGenerator::global()->bounded(16);
    while (randomPosition2 == randomPosition1) {
        randomPosition2 = QRandomGenerator::global()->bounded(16);
    }
    // 随机两个位置出现方块

    labelVector[randomPosition1]->setStyleSheet(labelStyleSheet_2);
    labelVector[randomPosition1]->setText("2");

    labelVector[randomPosition2]->setStyleSheet(labelStyleSheet_2);
    labelVector[randomPosition2]->setText("2");
}

void Game_2048::randomPosition()
{
    bool allSet = true; // 是否所有的label设置了方格样式
    for(qint8 i = 0;i < labelVector.length();i++)
    {
        if(labelVector[i]->styleSheet() == originalStyleSheet)
        {
            allSet = false;
            break;
        }
    }
    if(!allSet)
    {
        // 生成随机位置
        int randomIndex = QRandomGenerator::global()->bounded(labelVector.size());

        // 查找没有样式的 label
        QLabel *label = labelVector[randomIndex];
        while (label->styleSheet() != originalStyleSheet)
        {
            // 如果 label 已经有样式，则重新生成随机位置
            randomIndex = QRandomGenerator::global()->bounded(labelVector.size());
            label = labelVector[randomIndex];
        }
        label->setStyleSheet(labelStyleSheet_2);
        label->setText("2");
    }

}

// 检查游戏是否结束
bool Game_2048::checkGameOver()
{
    // 检查是否还有空格
    for (int i = 0; i < labelVector.size(); i++)
    {
        if (labelVector[i]->text() == "")
        {
            return false;
        }
    }

    // 检查是否还有可以合并的相邻方块
    for (int i = 0; i < labelVector.size(); i++)
    {
        if (i % 4 != 3 && labelVector[i]->text() == labelVector[i + 1]->text())
        {
            return false;
        }
        if (i < 12 && labelVector[i]->text() == labelVector[i + 4]->text())
        {
            return false;
        }
    }
    return true; // 游戏结束
}

QString Game_2048::LabelStyleSheet(const QString& text)
{
    int num = text.toInt();
    switch (num) {
    case 4:
        return labelStyleSheet_4;
    case 8:
        return labelStyleSheet_8;
    case 16:
        return labelStyleSheet_16;
    case 32:
        return labelStyleSheet_32;
    case 64:
        return labelStyleSheet_64;
    case 128:
        return labelStyleSheet_128;
    case 256:
        return labelStyleSheet_256;
    case 512:
        return labelStyleSheet_512;
    case 1024:
        return labelStyleSheet_1024;
    case 2048:
        return labelStyleSheet_2048;
    default:
        return QString();
    }
}

// 上移
void Game_2048::labelMoveUp()
{
    // 是否随机生成方块
    bool isRandomGenerateLabel = false;
    while (true)
    {
        // 判断是否有方块移动
        bool hasMove = false;

        // 循环,所有方块向上移动到上边,不合并
        for (qint8 i = 0; i < 4; i++)
        {
            qint8 StartRow = i + 4; // 存储开始的行索引
            for (qint8 j = i + 4; j < StartRow + 12; j += 4)
            {
                // 上一个是原始样式就正常移动
                if (labelVector[j]->styleSheet() != originalStyleSheet && labelVector[j - 4]->styleSheet() == originalStyleSheet)
                {
                    QString preText = labelVector[j]->text();
                    labelVector[j - 4]->setStyleSheet(labelVector[j]->styleSheet());
                    labelVector[j - 4]->setText(preText);
                    labelVector[j]->setStyleSheet(originalStyleSheet);
                    labelVector[j]->setText("");
                    isRandomGenerateLabel = true;
                    hasMove = true;
                }
            }
        }

        // 如果没有方块移动,则退出循环
        if (!hasMove)
        {
            break;
        }
    }

    for (qint8 i = 0; i < 4; i++)
    {
        qint8 StartRow = i + 4; // 存储开始的行索引
        for (qint8 j = i + 4; j < StartRow + 12; j += 4)
        {
            // 上一个是特殊label样式就判断 j 和 j-4 两个文本是否相等
            if (labelVector[j]->text() == labelVector[j - 4]->text() && labelVector[j]->text() != "")
            {
                labelVector[j]->setText("");
                labelVector[j]->setStyleSheet(originalStyleSheet);
                labelVector[j - 4]->setText(QString::number((labelVector[j - 4]->text()).toInt() * 2));
                labelVector[j - 4]->setStyleSheet(LabelStyleSheet(labelVector[j - 4]->text()));
                isRandomGenerateLabel = true;
            }
        }
    }

    QTimer::singleShot(150, [this,isRandomGenerateLabel]() {

        // 如果没有移动或者合成就不随机生成方块
        if (isRandomGenerateLabel)
        {
            this->randomPosition();
        }
    });

    if(checkGameOver())
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("游戏");
        msgBox.setText("很遗憾游戏结束!<br>请问是否再来一次");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.setTextFormat(Qt::RichText); // 设置文本格式为富文本
        int ret = msgBox.exec();
        if(ret == QMessageBox::Ok)
        {
            for(qint8 i = 0;i < labelVector.length();i++)
            {
                labelVector[i]->setStyleSheet(originalStyleSheet);
                labelVector[i]->setText("");
            }
            randomInitPosition();
        }
    }
}

// // 下移
void Game_2048::labelMoveDown()
{
    // 是否随机生成方块
    bool isRandomGenerateLabel = false;

    while (true)
    {
        // 判断是否有方块移动
        bool hasMove = false;

        // 循环,所有方块向下移动到下边,不合并
        for (qint8 i = 0; i < 4; i++)
        {
            qint8 StartRow = i + 8; // 存储开始的行索引
            for (qint8 j = i + 8; j > StartRow - 12; j -= 4)
            {
                // 下一个是原始样式就正常移动
                if (labelVector[j]->styleSheet() != originalStyleSheet && labelVector[j + 4]->styleSheet() == originalStyleSheet)
                {
                    QString preText = labelVector[j]->text();
                    labelVector[j + 4]->setStyleSheet(labelVector[j]->styleSheet());
                    labelVector[j + 4]->setText(preText);
                    labelVector[j]->setStyleSheet(originalStyleSheet);
                    labelVector[j]->setText("");
                    hasMove = true;
                    isRandomGenerateLabel = true;
                }
            }
        }

        // 如果没有方块移动,则退出循环
        if (!hasMove)
        {
            break;
        }
    }

    for (qint8 i = 0; i < 4; i++)
    {
        qint8 StartRow = i + 8; // 存储开始的行索引
        for (qint8 j = i + 8; j > StartRow - 12; j -= 4)
        {
            // 下一个是特殊label样式就判断 j 和 j+4 两个文本是否相等
            if (labelVector[j]->text() == labelVector[j + 4]->text() && labelVector[j]->text() != "")
            {
                labelVector[j]->setText("");
                labelVector[j]->setStyleSheet(originalStyleSheet);
                labelVector[j + 4]->setText(QString::number((labelVector[j + 4]->text()).toInt() * 2));
                labelVector[j + 4]->setStyleSheet(LabelStyleSheet(labelVector[j + 4]->text()));
                isRandomGenerateLabel = true;
            }
        }
    }

    QTimer::singleShot(150, [this,isRandomGenerateLabel]() {
        // 如果没有移动或者合成就不随机生成方块
        if (isRandomGenerateLabel)
        {
            this->randomPosition();
        }
    });

    if(checkGameOver())
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("游戏");
        msgBox.setText("很遗憾游戏结束!<br>请问是否再来一次");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.setTextFormat(Qt::RichText); // 设置文本格式为富文本
        int ret = msgBox.exec();
        if(ret == QMessageBox::Ok)
        {
            for(qint8 i = 0;i < labelVector.length();i++)
            {
                labelVector[i]->setStyleSheet(originalStyleSheet);
                labelVector[i]->setText("");
            }
            randomInitPosition();
        }
    }
}

// 左移
void Game_2048::labelMoveLeft()
{
    // 是否随机生成方块
    bool isRandomGenerateLabel = false;

    while (true)
    {
        // 判断是否有方块移动
        bool hasMove = false;

        // 循环,所有方块向左移动到左边,不合并
        for (qint8 i = 0; i < 4; i++)
        {
            qint8 StartCol = i * 4 + 1; // 存储开始的列索引
            for (qint8 j = i * 4 + 1; j < StartCol + 3; j++)
            {
                // 前一个是原始样式就正常移动
                if (labelVector[j]->styleSheet() != originalStyleSheet && labelVector[j - 1]->styleSheet() == originalStyleSheet)
                {
                    QString preText = labelVector[j]->text();
                    labelVector[j - 1]->setStyleSheet(labelVector[j]->styleSheet());
                    labelVector[j - 1]->setText(preText);
                    labelVector[j]->setStyleSheet(originalStyleSheet);
                    labelVector[j]->setText("");
                    hasMove = true;
                    isRandomGenerateLabel = true;
                }
            }
        }

        // 如果没有方块移动,则退出循环
        if (!hasMove)
        {
            break;
        }
    }

    for (qint8 i = 0; i < 4; i++)
    {
        qint8 StartCol = i * 4 + 1; // 存储开始的列索引
        for (qint8 j = i * 4 + 1; j < StartCol + 3; j++)
        {
            // 前一个是特殊label样式就判断 j 和 j-1 两个文本是否相等

            if (labelVector[j]->text() == labelVector[j - 1]->text() && labelVector[j]->text() != "")
            {
                labelVector[j]->setText("");
                labelVector[j]->setStyleSheet(originalStyleSheet);
                labelVector[j - 1]->setText(QString::number((labelVector[j - 1]->text()).toInt() * 2));
                labelVector[j - 1]->setStyleSheet(LabelStyleSheet(labelVector[j - 1]->text()));
                isRandomGenerateLabel = true;
            }
        }
    }

    QTimer::singleShot(150, [this,isRandomGenerateLabel]() {
        // 如果没有移动或者合成就不随机生成方块
        if (isRandomGenerateLabel)
        {
            this->randomPosition();
        }
    });

    if(checkGameOver())
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("游戏");
        msgBox.setText("很遗憾游戏结束!<br>请问是否再来一次");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.setTextFormat(Qt::RichText); // 设置文本格式为富文本
        int ret = msgBox.exec();
        if(ret == QMessageBox::Ok)
        {
            for(qint8 i = 0;i < labelVector.length();i++)
            {
                labelVector[i]->setStyleSheet(originalStyleSheet);
                labelVector[i]->setText("");
            }
            randomInitPosition();
        }
    }
}

// // 右移
void Game_2048::labelMoveRight()
{
    // 是否随机生成方块
    bool isRandomGenerateLabel = false;

    while (true)
    {
        // 判断是否有方块移动
        bool hasMove = false;

        // 循环,所有方块向右移动到右边,不合并
        for (qint8 i = 3; i >= 0; i--)
        {
            qint8 StartCol = i * 4 + 2; // 存储开始的列索引
            for (qint8 j = i * 4 + 2; j > StartCol - 3; j--)
            {
                // 后一个是原始样式就正常移动
                if (labelVector[j]->styleSheet() != originalStyleSheet && labelVector[j + 1]->styleSheet() == originalStyleSheet)
                {
                    QString preText = labelVector[j]->text();
                    labelVector[j + 1]->setStyleSheet(labelVector[j]->styleSheet());
                    labelVector[j + 1]->setText(preText);
                    labelVector[j]->setStyleSheet(originalStyleSheet);
                    labelVector[j]->setText("");
                    hasMove = true;
                    isRandomGenerateLabel = true;
                }
            }
        }
        // 如果没有方块移动,则退出循环
        if (!hasMove)
        {
            break;
        }
    }
    for(qint8 i = 3;i >= 0;i--)
    {
        qint8 StartCol = i * 4 + 2; // 存储开始的列索引
        for(qint8 j = i * 4 + 2;j > StartCol - 3;j--)
        {
            // 后一个是特殊label样式就判断 j 和 j+1 两个文本是否相等
            if(labelVector[j]->text() == (labelVector[j+1]->text()) && labelVector[j]->text() != "")
            {
                labelVector[j]->setText("");
                labelVector[j]->setStyleSheet(originalStyleSheet);
                labelVector[j+1]->setText(QString::number((labelVector[j+1]->text()).toInt() * 2));
                labelVector[j+1]->setStyleSheet(LabelStyleSheet(labelVector[j+1]->text()));
                isRandomGenerateLabel = true;
            }
        }
    }
    QTimer::singleShot(150, [this,isRandomGenerateLabel]() {
        // 如果没有移动或者合成就不随机生成方块
        if(isRandomGenerateLabel)
        {
            this->randomPosition();
        }
    });

    if(checkGameOver())
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("游戏");
        msgBox.setText("很遗憾游戏结束!<br>请问是否再来一次");
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.setTextFormat(Qt::RichText); // 设置文本格式为富文本
        int ret = msgBox.exec();
        if(ret == QMessageBox::Ok)
        {
            for(qint8 i = 0;i < labelVector.length();i++)
            {
                labelVector[i]->setStyleSheet(originalStyleSheet);
                labelVector[i]->setText("");
            }
            randomInitPosition();
        }
    }
}

void Game_2048::keyReleaseEvent(QKeyEvent *event) //键盘松开事件
{
    if(hasFocus()){
        switch(event->key())
        {
        // 按下上键
        case Qt::Key_Up:
            labelMoveUp();
            return;
        // 按下下键
        case Qt::Key_Down:
            labelMoveDown();
            return;
        // 按下左键
        case Qt::Key_Left:
            labelMoveLeft();
            return;
        // 按下右键
        case Qt::Key_Right:
            labelMoveRight();
            return;
        default:
            QWidget::keyReleaseEvent(event);
        }
    }
    QWidget::keyReleaseEvent(event);
}

void Game_2048::resetGameState()
{
    // 重置状态
    for(qint8 i = 0;i < labelVector.length();i++)
    {
        labelVector[i]->setStyleSheet(originalStyleSheet);
        labelVector[i]->setText("");
    }
    randomInitPosition();
}

Game_2048::~Game_2048()
{
    delete ui;
}
