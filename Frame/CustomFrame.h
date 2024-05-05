#ifndef CUSTOMFRAME_H
#define CUSTOMFRAME_H

#include <QFrame>
#include <QPixmap>
#include <Help/help_function.h>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QDesktopServices>
#include <QTimer>
#include <QDir>
#include <QSettings>
#include <QLabel>
#include <SignalManager/signalmanger.h>
#include <QToolTip>
#include <QLabel>

class CustomFrame : public QFrame {
    Q_OBJECT
public:
    explicit CustomFrame(QWidget *parent);
    ~CustomFrame();
    QFrame* getParentFrame() const;
    void setObjectBarName(const QString &objectName); // 保存物品栏的名字
    void loadIconPath();
    void loadFilePath();
    void clearInfo(); // 清空内容

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void enterEvent(QEnterEvent *event) override; // 鼠标进入后显示其信息
    void leaveEvent(QEvent *event) override; // 鼠标离开后隐藏信息

private:
    QPixmap backgroundPixmap;
    QString filePath; // 图标应用程序目标路径
    QString savedIconPath; // 图标文件路径
    QString objectName; // 物品栏 名字 用于存储
    QLabel *iconLabel;

signals:
    void frameClicked(CustomFrame *frame);
public slots:
    void readConfigFile(); // 读取配置图标路径
};
#endif // CUSTOMFRAME_H
