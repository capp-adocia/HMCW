#include "Frame/storageframe.h"

Storageframe::Storageframe(QWidget *parent, const QString &objectName) :
    QFrame(parent)
    , m_iconPath("")
    , filePath("")
    , objectName(objectName)
    , queryImgLabelClicked(false)
{
    setAcceptDrops(true);
    // 初始化一个QLabel控件用于显示图片
    imageLabel = new QLabel(this);
    imageLabel->setFixedSize(49, 49); // 设置 Label 大小为 49 x 49
    imageLabel->setAlignment(Qt::AlignCenter); // 图片居中显示
    imageLabel->setGeometry(0, 0, 49, 49);

    connect(&SignalManager::instance(),&SignalManager::queryImageLabelReset,[=]{
        resetStorageFrame(); // 重置后重新加载
        loadSettings();
    });

}

void Storageframe::dragMoveEvent(QDragMoveEvent *event) {
    // 移动事件
    event->accept();
}

void Storageframe::dragEnterEvent(QDragEnterEvent *event) {
    // 进入事件
    // 检查拖放的数据类型
    if (event->mimeData()->hasFormat("application/custom-data")) {
        // 如果拖放的数据类型为自定义类型，可以进行相应的操作
        event->acceptProposedAction();
    } else {
        // 其他情况下拒绝拖放操作
        event->ignore();
    }
}

void Storageframe::dropEvent(QDropEvent *event) {
    // 放置事件
    if (event->mimeData()->hasFormat("application/custom-data")) {
        QByteArray data = event->mimeData()->data("application/custom-data");
        QDataStream stream(&data, QIODevice::ReadOnly);

        QString urlIconPath;
        QString exeFilePath;
        stream >> urlIconPath >> exeFilePath;
        QWidget *source = qobject_cast<QWidget*>(event->source());
        // 如果拖拽进入的是同一个对象
        if(this->filePath != exeFilePath)
        {
            this->m_iconPath = urlIconPath; // 图标路径
            this->filePath = exeFilePath;   // exe文件路径
            // 在QLabel中显示图片
            QPixmap pixmap(m_iconPath);
            QPixmap scaledPixmap = pixmap.scaled(45, 45, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            imageLabel->setPixmap(scaledPixmap);

            // 保存图片到 save 文件夹中
            QString saveFolderPath = QDir::currentPath() + "/save";
            scaledPixmap.save(saveFolderPath); // 保存图片

            // 保存图片路径到 config.ini 文件的 storageFrameIconPath 组中，使用对象的唯一标识作为 key
            QSettings settings("config.ini", QSettings::IniFormat);
            settings.beginGroup("storageFrameIconPath");
            settings.setValue(objectName, m_iconPath); // 是完整路径
            settings.endGroup();

            // 保存其exe文件路径到 config.ini 文件中的 storageFrameIconPath 组中
            QString keyName = objectName + "Path";
            settings.beginGroup("storageFrameIconFilePath");
            settings.setValue(keyName, filePath);
            settings.endGroup();

            // 重置源对象的状态
            if (source) {
                Storageframe *sourceObject = qobject_cast<Storageframe*>(source);
                if (sourceObject) {
                    sourceObject->ResetDragSource();
                }
            }
        }
        // 重置objectframe源对象的方格状态
        emit ObjectFrameDragToStorageFrame(source);
    }
}

void Storageframe::enterEvent(QEnterEvent *event){
    QToolTip::showText(mapToGlobal(QPoint(0,35)),filePath);// 显示图表信息
    QFrame::enterEvent(event);
}

void Storageframe::leaveEvent(QEvent *event)
{
    QToolTip::hideText(); // 鼠标离开时隐藏信息
    QFrame::leaveEvent(event);
}

void Storageframe::mousePressEvent(QMouseEvent *event){
    if(this->m_iconPath != "")
    {
        // 如果之前点击了一次查询图标，那么再点击这里则就需要保存图标
        if(event->button() == Qt::LeftButton && rect().contains(event->pos()) && queryImgLabelClicked)
        {
            // 在QLabel中显示图片
            QPixmap pixmap(m_iconPath);
            QPixmap scaledPixmap = pixmap.scaled(45, 45, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            imageLabel->setPixmap(scaledPixmap);
            // 保存图片路径到 config.ini 文件的 storageFrameIconPath 组中，使用对象的唯一标识作为key
            QSettings settings("config.ini", QSettings::IniFormat);
            settings.beginGroup("storageFrameIconPath");
            settings.setValue(objectName, m_iconPath);
            settings.endGroup();

            settings.beginGroup("storageFrameIconFilePath");
            QString keyName = objectName + "Path";
            settings.setValue(keyName,filePath);
            settings.endGroup();

            QString saveFolder = QDir::currentPath() + "/save";
            QString savePath = saveFolder + "/" + QFileInfo(m_iconPath).fileName();
            // 保存图片到save文件夹中
            scaledPixmap.save(savePath);
            emit storageFrameClick();
        }
        // 如果没有就重新加载图标
        else if(event->button() == Qt::LeftButton && rect().contains(event->pos()) && !queryImgLabelClicked)
        {
            QPixmap pixmap(m_iconPath);
            QPixmap scaledPixmap = pixmap.scaled(45, 45, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            imageLabel->setPixmap(scaledPixmap);

            // 创建拖放操作
            QDrag *drag = new QDrag(this);
            QMimeData *mimeData = new QMimeData;

            // 设置 URL 图标的路径和 exe 文件路径
            QString urlIconPath = m_iconPath; // "URL图标路径"
            QString exeFilePath = filePath; // "exe文件路径"
            QPixmap urlIconPixmap(urlIconPath);

            // 将 URL 图标路径和 exe 文件路径封装到 MIME 数据中
            QByteArray data;
            QDataStream stream(&data, QIODevice::WriteOnly);
            stream << urlIconPath << exeFilePath;
            mimeData->setData("application/custom-data", data);
            // 计算图标在鼠标中间的位置
            int offsetX = urlIconPixmap.width() / 2;
            int offsetY = urlIconPixmap.height() / 2;
            // 设置拖放操作的偏移量
            drag->setHotSpot(QPoint(offsetX, offsetY));
            // 设置拖动的图标
            drag->setPixmap(urlIconPixmap);
            // 设置拖放操作的 MIME 数据
            drag->setMimeData(mimeData);
            // 执行拖放操作
            drag->exec();
        }
        else if(event->button() == Qt::RightButton && rect().contains(event->pos()))
        {
            // 先重置
            resetStorageFrame();
            // 再保存
            QSettings settings("config.ini", QSettings::IniFormat);

            settings.beginGroup("storageFrameIconPath");
            settings.remove(objectName);
            settings.endGroup();

            settings.beginGroup("storageFrameIconFilePath");
            QString keyName = objectName + "Path";
            settings.remove(keyName);
            settings.endGroup();
            // 最后加载
            loadSettings();
        }
    }
}

void Storageframe::loadSettings(){
    //从 config.ini 文件的 storageFrameIconPath 组中读取图片路径，使用对象的唯一标识作为key
    QSettings settings("config.ini", QSettings::IniFormat);
    settings.beginGroup("storageFrameIconPath");
    if(settings.contains(objectName)){
        QString imagePath = settings.value(objectName).toString();
        QPixmap pixmap(imagePath);
        if(!imagePath.isNull())
        {
            QPixmap scaledPixmap = pixmap.scaled(45, 45, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            imageLabel->setPixmap(scaledPixmap);
        }
        else
        {
            imageLabel->clear();
        }
        this->m_iconPath = imagePath;
        imageLabel->show();
    }
    settings.endGroup();
    settings.beginGroup("storageFrameIconFilePath");
    QString keyName = objectName + "Path";
    if(settings.contains(keyName)){
        this->filePath = settings.value(keyName).toString();
    }
    settings.endGroup();
}

void Storageframe::ListeningIconPath(const QString &iconPath, const QString &filePath)
{
    this->m_iconPath = iconPath; // 使用文件名而不是完整路径
    this->filePath = filePath;
    this->queryImgLabelClicked = true; // 在点击这个对象所需的判断标识
}

void Storageframe::resetStorageFrame()
{
    this->m_iconPath = "";
    this->filePath = "";
    this->queryImgLabelClicked = false; // 点击标识重置为false
    imageLabel->clear();
}

void Storageframe::ResetDragSource()
{
    this->m_iconPath = ""; // 必须重置
    this->filePath = "";
    this->queryImgLabelClicked = false; // 点击标识重置为false
    imageLabel->clear();

    QSettings settings("config.ini", QSettings::IniFormat);
    // 移除storageFrameIconPath组中对应objectName的key和value
    settings.beginGroup("storageFrameIconPath");
    settings.remove(objectName);
    settings.endGroup();

    // 移除storageFrameIconFilePath组中对应objectNamePath的key和value
    settings.beginGroup("storageFrameIconFilePath");
    QString keyName = objectName + "Path";
    settings.remove(keyName);
    settings.endGroup();
}

Storageframe::~Storageframe()
{

}
