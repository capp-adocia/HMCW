#ifndef BACKPACK_H
#define BACKPACK_H

#include <QWidget>
#include <QMouseEvent>
#include <QFrame>
#include <Frame/objectframe.h>
#include <Frame/storageframe.h>
#include <QHBoxLayout>
#include <Help/queryapp.h>
#include <Help/queryimglabel.h>
#include <QFileDialog>
#include <QSettings>
#include <Help/tips.h>
#include <QProgressBar>
#include <QMessageBox>

namespace Ui {
class Backpack;
}
// 注意之前这里开始取名为ObjectBar 但后来觉得不合适，改成了Backpack 可是里面的ui控件名字还未改
class Backpack : public QWidget
{
    Q_OBJECT

public:
    explicit Backpack(QWidget *parent = nullptr);
    ~Backpack();
    void InitFrames();
    void QueryPath();
    void InitQuery(); // 初始化查询连接信号
    void LoadingAllIcon(); // 从save文件夹中把图片全部绘制上去
    void DrawIcon(const QStringList &filePaths,const QStringList &iconPaths); // 初始化绘制图片时或过滤信息时被调用
signals:

public slots:
    void AllExeFound(const QStringList &filePaths,const QStringList &iconPaths); // 把返回的图片路径绘制图上
    void switchLabelState(QueryImgLabel *clickedLabel); // 点击查询标签切换状态void Objectbar::resetState()
    void resetState(); // 重置查询图标的状态以及清空鼠标内容
    void ResetObjectFrame(QWidget *ObjectSource);
    void ResetStorageFrame(QWidget *StorageFrame);
    void FilterIcon(const QString &fileName); // 过滤查询图标
    void ClickStartQuery(); // 点击query按钮启动查询
protected:
    bool eventFilter(QObject *obj, QEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;

private:
    Ui::Backpack *ui;
    bool mousePressed;
    QPoint mousePressPos;
    QVector<QFrame*> objectsFrameVector; // 存储人物物品栏 Frames
    QVector<QFrame*> storageFrameVector; // 存储仓库物品栏 Frames
    Objectframe *objectframe[9];        // 9 * 人物物品栏
    Storageframe *storageframe[27];     // 27 * 仓库物品栏
    Queryapp *queryapp = nullptr;       // 子线程查询应用程序地址
    QVBoxLayout *pLayout;
    QVector<QString> temporaryIconPaths;
    QString iconPath; // 存储当前被点击图片路径
    QVector<QueryImgLabel*> queryImgLabelVector;
    Tips *notFoundMatchTips; // 过滤搜索没找到匹配的提示
    Tips *updataQueryTips; // 正在更新查询内容提示
    bool isExeQueryIconsHide; // 判断左侧区域是否显示
};

#endif // BACKPACK_H
