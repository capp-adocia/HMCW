#ifndef OBJECTFRAME_H
#define OBJECTFRAME_H

#include <QFrame>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMouseEvent>
#include <QPainter>
#include <QSettings>
#include <QDir>
#include <QFileInfo>
#include <QLabel>
#include <SignalManager/signalmanger.h>
#include <QMimeData>
#include <QPoint>
#include <QApplication>
#include <QDrag>
#include <QToolTip>

// 人物物品栏方格类
class Objectframe : public QFrame {
    Q_OBJECT
public:
    explicit Objectframe(QWidget *parent, const QString &objectName);
    ~Objectframe();
    void ListeningIconPath(const QString &m_iconPath, const QString &filePath); // 根据接受到的图片资源来绘图
    void resetObjectFrame(); // 重置 所有的类对象的m_iconPath 重置 queryImgLabelClicked
    void ResetDragSource(); // 重置 拖拽源的对象并把其config.ini清空
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    void enterEvent(QEnterEvent *event) override; // 鼠标进入后显示其信息
    void leaveEvent(QEvent *event) override; // 鼠标离开后隐藏信息

signals:
    void objectFrameClick(); // 通知查询图标重置样式 当在有先点击了查询图标时的情况，再点击人物物品栏就可以清空查询图标的样式和内容信息
    void StorageFrameToObjectFrameDrag(QWidget *StorageSource); // 当拖拽storageframe到objectframe时，重新加载storageframe
public slots:
    void loadSettings(); // 初始化加载时调用
private:
    QString m_iconPath; // 搜索区域被点击选中的图片路径
    QString m_filePath; // 文件路径
    QLabel *imageLabel; // 图标
    QString objectName; // 对象唯一标识符
    bool queryImgLabelClicked; // 判断是否之前一次点击了查询里面的方格

};

#endif // OBJECTFRAME_H
