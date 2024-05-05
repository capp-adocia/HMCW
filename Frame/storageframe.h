#ifndef STORAGEFRAME_H
#define STORAGEFRAME_H

#include <QFrame>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QSettings>
#include <QLabel>
#include <QDir>
#include <SignalManager/signalmanger.h>
#include <QDrag>
#include <QToolTip>

class Storageframe : public QFrame{
    Q_OBJECT
public:
    explicit Storageframe(QWidget *parent, const QString &objectName);
    ~Storageframe();
    void loadSettings(); // 初始化加载配置
    void ListeningIconPath(const QString &iconPath, const QString &filePath);
    void resetStorageFrame(); // 重置 所有的类对象的m_iconPath 重置 queryImgLabelClicked
    void ResetDragSource(); // 重置拖拽源的对象并把其config.ini清空
protected:
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void enterEvent(QEnterEvent *event) override; // 鼠标进入后显示其信息
    void leaveEvent(QEvent *event) override; // 鼠标离开后隐藏信息

signals:
    void storageFrameClick(); // 通知查询图标重置样式 当在有先点击了查询图标时的情况，再点击人物物品栏就可以清空查询图标的样式和内容信息
    void ObjectFrameDragToStorageFrame(QWidget *ObjectSource); // 当拖拽objectframe到storageframe时，重新加载objectframe
public slots:

private:
    QString m_iconPath; // 是完整的图标路径
    QString filePath;
    QLabel *imageLabel; // 显示图片
    QString objectName; // 对象唯一标识符
    bool queryImgLabelClicked; // 判断是否之前一次点击了查询里面的方格
};

#endif // STORAGEFRAME_H
