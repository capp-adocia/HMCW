#ifndef BAR_H
#define BAR_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QMimeData>
#include <Frame/CustomFrame.h>
#include <QLabel>
#include <Menu/menu.h>
#include <QPushButton>
#include <QTimer>
#include <QElapsedTimer>
#include <Rest/rest.h>
#include <QMenu>
#include <ObjectBar/backpack.h>
#include <SignalManager/signalmanger.h>
#include <QDir>
#include <Help/tips.h>
#include <QSystemTrayIcon>

#define MOVESTEP 10 // 移动步长

QT_BEGIN_NAMESPACE
namespace Ui {
class Bar;
}
QT_END_NAMESPACE

class Bar : public QMainWindow
{
    Q_OBJECT

public:
    Bar(QWidget *parent = nullptr);
    ~Bar();
    void createPixmap(); // 创建图片
    qreal dpiRatio; // 屏幕 DPI
    void createAndSetupCustomFrames();
    void changeHeart(); // connect连接工作/休息信号 改变生命值
    void changeHungry(); // connect连接饥饿/饱腹信号 改变饱食度
    void hideObjectBar(); // 隐藏物品栏

protected:
    bool eventFilter(QObject *obj, QEvent *event) override; // 拖拽窗口
    void mousePressEvent(QMouseEvent *event) override; // 左键点击显示
    void keyPressEvent(QKeyEvent *event) override; // 键盘事件，点击E可以切换物品栏或人物物品栏，点击H可以切换物品栏的显示或隐藏
private slots:
    void onFrameClicked(CustomFrame *frame);
    void toggleFullScreen();
    void updataHealth_UP(QTime breakTime); // 更新生命值图片(增加)
    void updataHealth_DOWN(QTime workTime); // 更新生命值图片(减少)
    void updateHungry_UP(QTime eatingTime); // 更新饱食度图片(增加)
    void updateHungry_DOWN(QTime intervalTime); // 更新饱食度图片(减少)
    void upDateProgressBar(); // 更新经验条
private:
    Ui::Bar *ui;
    static constexpr QSize BarWidget = QSize(611,120); // 整个窗口的尺寸
    static constexpr QSize heartSize = QSize(25, 28); // 爱心图片尺寸
    static constexpr QSize hungrySize = QSize(30, 28); // 饱食度图片尺寸
    QPoint mousePressPos;
    bool mousePressed; // 是否按压
    CustomFrame* customPanes[9]; // 方格类对象
    QString panes_styleSheet;
    QString frames_styleSheet;
    QString progressBar_styleSheet;
    QFrame* frames[9];
    QPixmap health_pixmap; // 生命值图片
    QPixmap hungry_pixmap; // 饱食度图片
    QPixmap half_pixmap; // 半个爱心图片
    QPixmap emptyHeart_pixmap; // 空的爱心图片
    QPixmap whiteBorder_pixmap; // 白边框完整爱心图片
    QPixmap darkWhiteBorder_pixmap; // 淡色白边框爱心图片
    QPixmap darkWhiteBorderHalf_pixmap; // 淡色白边框半个爱心图片
    QPixmap whiteBorderEmpty_health; // 白边框的空爱心图片
    QPixmap whiteBorderHalf_health; // 白边框的半个爱心图片
    QPixmap emptyHungry_pixmap; // 空的饱食度图片
    QVector<QLabel*> heartLabels; // 生命值图像容器
    QVector<QLabel*> hungryLabels; // 饱食度图像容器
    QVector<QLabel*> progressBarLabels; // 进度条
    qint8 progressBarIndex; // 进度条的索引
    int currentLevel; // 当前等级
    Menu *menu; // 工具类对象
    Rest *rest; // 休息类
    bool isHideObjectBar; // 是否隐藏物品栏
    QTimer *workTimer;
    QTimer *breakTimer;
    qint8 heartIndex; // 当前heartLabels的索引
    QTimer *eatingTimer;
    QTimer *intervalTimer;
    qint8 hungryIndex; // 当前hungryLabels的索引
    Backpack *backpack; // 人物物品栏
    Tips *tips;
    bool isAlwaysOnTop; // 用于跟踪窗口的置顶状态
    QSystemTrayIcon *trayIcon;



};
#endif // BAR_H
