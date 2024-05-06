#include "Help/queryimglabel.h"

QueryImgLabel *QueryImgLabel::m_lastClickedLabel = nullptr; // 存储上一次点击的对象
QString QueryImgLabel::originalStyleSheet = QStringLiteral(
    "background-color: rgb(139, 139, 139);"
    "border-left: 4px solid rgba(51, 51, 51,0.8);"
    "border-top: 4px solid rgba(51, 51, 51,0.8);"
    "border-right: 4px solid rgb(190, 190, 190);"
    "border-bottom: 4px solid rgb(251, 251, 251);"
    "}"
    "QLabel:hover {"
    "background-color: rgb(192, 192, 192);"
    );

QString QueryImgLabel::clickedStyleSheet = QStringLiteral(
    "background-color: rgb(139, 139, 139);"
    "border-left: 8px solid rgba(51, 51, 51,0.8);"
    "border-top: 8px solid rgba(51, 51, 51,0.8);"
    "border-right: 8px solid rgb(190, 190, 190);"
    "border-bottom: 8px solid rgb(251, 251, 251);"
    );

QueryImgLabel::QueryImgLabel(QWidget *parent) :
    QLabel(parent)
{

}

void QueryImgLabel::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        if (m_lastClickedLabel == this) {
            //如果上次点击了同一个queryImgLabel 就重置样式
            this->setStyleSheet(QueryImgLabel::originalStyleSheet); // 正常样式
            m_lastClickedLabel = nullptr;
            // 想storageframe和objectframe发送信号重置标识符为false
            emit SignalManager::instance().queryImageLabelReset();
        }
        else{
            // 如果上次没存储 即就是和上次点击的对象不同
            emit imageClicked(this,m_iconPath); // 发射信号，传递当前 QueryImgLabel 对象和图标路径
            // 更新上一次点击的对象
            m_lastClickedLabel = this;
        }
    }
}

void QueryImgLabel::setIconAndFile(const QString &iconPath, const QString &filePath) {
    QPixmap pixmap(iconPath);
    setPixmap(pixmap.scaled(55, 55, Qt::KeepAspectRatio));
    this->m_iconPath = iconPath;
    this->m_filePath = filePath;
    this->setStyleSheet(QueryImgLabel::originalStyleSheet); // 正常样式
}

void QueryImgLabel::enterEvent(QEnterEvent *event)
{
    QToolTip::showText(mapToGlobal(QPoint(5, 46)), m_filePath); // 在鼠标旁边显示信息
    QLabel::enterEvent(event);
}

void QueryImgLabel::leaveEvent(QEvent *event)
{
    QToolTip::hideText(); // 鼠标离开时隐藏信息
    QLabel::leaveEvent(event);
}

QString QueryImgLabel::getFilePath() const
{
    return this->m_filePath;
}

