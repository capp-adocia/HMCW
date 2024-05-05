#include "Frame/customframe.h"

CustomFrame::CustomFrame(QWidget *parent) :
    QFrame(parent)
{
    setAcceptDrops(true);
    iconLabel = new QLabel(this);
    iconLabel->setGeometry(3, 5, 45, 45);
    iconLabel->setScaledContents(true);
    iconLabel->setStyleSheet(
    "   border-left:0;"
    "   border-top:0;"
    "   border-right:0;"
    "   border-bottom:0;");

    connect(&SignalManager::instance(), &SignalManager::customFrame_loadSetting, this, &CustomFrame::readConfigFile);
}

void CustomFrame::dragEnterEvent(QDragEnterEvent *event) {
    if (event->mimeData()->hasUrls()) {
        event->acceptProposedAction();
    }
}

void CustomFrame::dropEvent(QDropEvent *event) {
    const QMimeData *mimeData = event->mimeData();
    if (mimeData->hasUrls()) {
        QList<QUrl> urlList = mimeData->urls();
        if (!urlList.isEmpty()) {
            QString localFilePath = urlList.first().toLocalFile();
            if (!localFilePath.isEmpty())
            {
                QFileInfo fileInfo(localFilePath);
                QString extension = fileInfo.suffix().toLower();
                if (extension == "lnk" || extension == "exe") {
                    QString targetPath = (extension == "lnk") ? resolveLinkTarget(localFilePath) : localFilePath;
                    if (!targetPath.isEmpty()) {
                        this->filePath = targetPath;
                        QString iconPath = getIconFromExecutable(targetPath);
                        if (!iconPath.isEmpty()) {
                            // 写入图片路径到 config.ini 文件
                            QSettings settings("config.ini", QSettings::IniFormat);
                            settings.beginGroup("objectFrameIconPath");
                            settings.setValue(objectName, iconPath);
                            settings.endGroup();
                            settings.beginGroup("objectFrameIconFilePath");
                            QString keyName = objectName + "Path";
                            settings.setValue(keyName,filePath);
                            settings.endGroup();
                            // 保存图标到 save 文件夹
                            QString saveFolder = QDir::currentPath() + "/save";
                            QDir saveDir(saveFolder);
                            QPixmap iconPixmap(iconPath);
                            if (!iconPixmap.isNull()) {
                                iconLabel->setPixmap(iconPixmap.scaled(iconLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
                            }
                            QString saveIconPath = saveFolder + "/" + QFileInfo(iconPath).fileName();
                            QFile::copy(iconPath, saveIconPath); // 复制图标文件到 save 文件夹
                            this->savedIconPath = iconPath; // 保存图标路径
                            // 向背包类发送信号更新objectframe的图标
                            emit SignalManager::instance().ReloadObjectFrame();
                        }
                    }
                }
            }
        }
    }
}

void CustomFrame::setObjectBarName(const QString &objectName)
{
    this->objectName = objectName;
}

void CustomFrame::readConfigFile()
{
    loadIconPath();
    loadFilePath();
}

//返回pans的父元素
QFrame* CustomFrame::getParentFrame() const
{
    return qobject_cast<QFrame*>(parent());
}

//鼠标点击事件
void CustomFrame::mousePressEvent(QMouseEvent *event)
{
    // 第一种情况 如果是拖拽进来的图标
    if (event->button() == Qt::LeftButton)
    {
        setProperty("isLaunched", true);
        emit frameClicked(this);

        QTimer::singleShot(200, this, [this]() {
            if (!filePath.isEmpty()) {
                if (filePath == "msedge.exe") {
                    // 如果目标文件是 Edge 浏览器,直接使用 QDesktopServices::openUrl 打开
                    QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
                } else {
                    // 对于其他应用程序
                    QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
                    setProperty("isLaunched", false);
                }
            }
            setProperty("isLaunched", false);
            emit frameClicked(this);
        });
        if(filePath != "")
        {
            // 更新统计信息中的程序启动次数
            emit SignalManager::instance().updateLaunchApp();
        }
    }
}

void CustomFrame::enterEvent(QEnterEvent *event){
    QFileInfo fileInfo(filePath);
    QToolTip::showText(mapToGlobal(QPoint(0,-40)),fileInfo.baseName());// 显示exe文件信息
    QFrame::enterEvent(event);
}

void CustomFrame::leaveEvent(QEvent *event)
{
    QToolTip::hideText(); // 鼠标离开时隐藏信息
    QFrame::leaveEvent(event);
}

void CustomFrame::loadIconPath()
{
    QSettings settings("config.ini", QSettings::IniFormat);
    settings.beginGroup("objectFrameIconPath");
    // 读取图标路径
    QStringList keys = settings.childKeys();
    bool iconFound = false;
    foreach (const QString &key, keys) {
        if (key == this->objectName) {
            QString fileName = settings.value(key).toString();
            QString saveFolder = QDir::currentPath() + "/save";
            QString iconPath = saveFolder + "/" + QFileInfo(fileName).fileName();
            this->savedIconPath = iconPath;
            QPixmap iconPixmap(iconPath);
            iconLabel->setPixmap(iconPixmap.scaled(iconLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
            iconFound = true;
            break; // 找到后退出
        }
    }
    if (!iconFound) {
        // 如果未找到图标，将图标置为空图标 exe文件置为空
        iconLabel->setPixmap(QPixmap());
        filePath = "";
    }
    settings.endGroup();
}

void CustomFrame::loadFilePath()
{
    QSettings settings("config.ini", QSettings::IniFormat);
    settings.beginGroup("objectFrameIconFilePath");
    QString keyName = objectName + "Path";
    // 读取所有键值对
    QStringList keys = settings.childKeys();
    foreach (const QString &key, keys) {
        if (key == keyName) {
            this->filePath = settings.value(key).toString();
            break; // 找到对应的键值后退出循环
        }
    }
    settings.endGroup();
}

// 清空所有内容信息
void CustomFrame::clearInfo()
{
    // 先重置
    this->filePath = "";
    this->savedIconPath = "";
    // 再保存
    QSettings settings("config.ini", QSettings::IniFormat);

    settings.beginGroup("objectFrameIconPath");
    settings.remove(objectName);
    settings.endGroup();

    settings.beginGroup("objectFrameIconFilePath");
    QString keyName = objectName + "Path";
    settings.remove(keyName);
    settings.endGroup();
    // 然后重新加载图标及其信息
    this->readConfigFile();
    // 最后发送信号让背包类 Backpack 更新响应信息
    emit SignalManager::instance().ReloadObjectFrame();
}


CustomFrame::~CustomFrame(){
    if(iconLabel){
        delete iconLabel;
        iconLabel = nullptr;
    }

}
