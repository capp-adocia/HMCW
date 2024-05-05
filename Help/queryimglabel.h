#ifndef QUERYIMGLABEL_H
#define QUERYIMGLABEL_H

#include <QLabel>
#include <QEnterEvent>
#include <QToolTip>
#include <QMouseEvent>
#include <QObject>
#include <SignalManager/signalmanger.h>

class QueryImgLabel : public QLabel
{
    Q_OBJECT
public:
    QueryImgLabel(QWidget *parent = nullptr);
    void setIconAndFile(const QString &iconPath, const QString &filePath);
    QString getFilePath() const;
    static QueryImgLabel *m_lastClickedLabel; // 全局静态成员变量 存储前一次对象
    static QString originalStyleSheet; // 原本没被点击的样式
    static QString clickedStyleSheet; // 点击后的样式
signals:
    void imageClicked(QueryImgLabel *clickedLabel,const QString &iconPath);

public slots:

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void enterEvent(QEnterEvent *event) override; // 修改参数类型为 QEnterEvent
    void leaveEvent(QEvent *event) override;

private:
    QString m_iconPath; // 图标文件路径
    QString m_filePath; // 完整文件路径


};

#endif // QUERYIMGLABEL_H
