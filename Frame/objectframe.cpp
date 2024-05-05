#include "objectframe.h"

Objectframe::Objectframe(QWidget *parent, const QString &objectName) :
    QFrame(parent)
    , objectName(objectName) // 保存对象名称
    , queryImgLabelClicked(false)
{
    setAcceptDrops(true);

    // 初始化一个QLabel控件用于显示图片
    imageLabel = new QLabel(this);
    imageLabel->setFixedSize(49, 49); // 设置 Label 大小为 49 x 49
    imageLabel->setAlignment(Qt::AlignCenter); // 图片居中显示
    imageLabel->setGeometry(0, 0, 49, 49);

    connect(&SignalManager::instance(),&SignalManager::queryImageLabelReset,[=]{
        resetObjectFrame(); // 重置后重新加载
        loadSettings();
    });
    // 当Bar中有快捷方式被拖拽进来时重新加载图标
    connect(&SignalManager::instance(),&SignalManager::ReloadObjectFrame,this,&Objectframe::loadSettings);
}

void Objectframe::dragMoveEvent(QDragMoveEvent *event) {
    // 移动事件
    event->accept();
}

void Objectframe::dragEnterEvent(QDragEnterEvent *event) {
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

void Objectframe::dropEvent(QDropEvent *event) {
    // 放置事件
    if (event->mimeData()->hasFormat("application/custom-data")) {
        QByteArray data = event->mimeData()->data("application/custom-data");
        QDataStream stream(&data, QIODevice::ReadOnly);

        QString urlIconPath;
        QString exeFilePath;
        stream >> urlIconPath >> exeFilePath;
        QWidget *source = qobject_cast<QWidget*>(event->source());
        // 如果拖拽进入的是同一个对象
        if(this->m_filePath != exeFilePath)
        {
            this->m_iconPath = urlIconPath; // 图标路径
            this->m_filePath = exeFilePath;   // exe文件路径
            // 在QLabel中显示图片
            QPixmap pixmap(urlIconPath);
            QPixmap scaledPixmap = pixmap.scaled(45, 45, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            imageLabel->setPixmap(scaledPixmap);

            // 保存图片到 save 文件夹中
            QString saveFolderPath = QDir::currentPath() + "/save";
            scaledPixmap.save(saveFolderPath); // 保存图片

            // 保存图片路径到 config.ini 文件的 storageFrameIconPath 组中，使用对象的唯一标识作为 key
            QSettings settings("config.ini", QSettings::IniFormat);
            settings.beginGroup("objectFrameIconPath");
            settings.setValue(objectName, m_iconPath);
            settings.endGroup();

            // 保存其exe文件路径到 config.ini 文件中的 storageFrameIconPath 组中
            QString keyName = objectName + "Path";
            settings.beginGroup("objectFrameIconFilePath");
            settings.setValue(keyName, m_filePath);
            settings.endGroup();

            // 重置源对象的状态
            if (source) {
                Objectframe *sourceObject = qobject_cast<Objectframe*>(source);
                if (sourceObject) {
                    sourceObject->ResetDragSource();
                }
            }
            emit SignalManager::instance().customFrame_loadSetting(); // 通知Bar重新加载配置
        }
        // 重置StorageFrame源对象的方格状态
        emit StorageFrameToObjectFrameDrag(source);
    }
}

void Objectframe::enterEvent(QEnterEvent *event){
    QToolTip::showText(mapToGlobal(QPoint(0,35)),m_filePath);// 显示图表信息
    QFrame::enterEvent(event);
}

void Objectframe::leaveEvent(QEvent *event)
{
    QToolTip::hideText(); // 鼠标离开时隐藏信息
    QFrame::leaveEvent(event);
}

void Objectframe::mousePressEvent(QMouseEvent *event)
{
    // 如果为空就不保存不读取
    if(this->m_iconPath != "")
    {
        // 放置当前m_iconPath 只有查询图标被点击了就代表就需要 保存 数据了
        if (event->button() == Qt::LeftButton && rect().contains(event->pos()) && queryImgLabelClicked) {
            // 在QLabel中显示图片
            QPixmap pixmap(m_iconPath);
            QPixmap scaledPixmap = pixmap.scaled(45, 45, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            imageLabel->setPixmap(scaledPixmap);
            // 保存图片路径到config.ini文件的objectFrameIconPath组中，使用对象的唯一标识作为key
            QSettings settings("config.ini", QSettings::IniFormat);
            settings.beginGroup("objectFrameIconPath");
            settings.setValue(objectName, m_iconPath);
            settings.endGroup();

            settings.beginGroup("objectFrameIconFilePath");
            QString keyName = objectName + "Path";
            settings.setValue(keyName,m_filePath);
            settings.endGroup();
            // 保存图片到save文件夹中
            QString saveFolder = QDir::currentPath() + "/save";
            QString savePath = saveFolder + "/" + QFileInfo(m_iconPath).fileName();
            // 保存图片到save文件夹中
            scaledPixmap.save(savePath);

            emit objectFrameClick();
        }
        // 如果没提前点击queryframe 就 读取 当前的save文件下的这个图标文件
        else if( (event->button() == Qt::LeftButton && rect().contains(event->pos()) && !queryImgLabelClicked))
        {
            QPixmap pixmap(m_iconPath);
            QPixmap scaledPixmap = pixmap.scaled(45, 45, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            imageLabel->setPixmap(scaledPixmap);
            // 创建拖放操作
            QDrag *drag = new QDrag(this);
            QMimeData *mimeData = new QMimeData;

            // 设置 URL 图标的路径和 exe 文件路径
            QString urlIconPath = m_iconPath; // "URL图标路径"
            QString exeFilePath = m_filePath; // "exe文件路径"
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
        // 右键点击删除所有信息
        else if(event->button() == Qt::RightButton && rect().contains(event->pos()))
        {
            // 先重置
            resetObjectFrame();
            // 再保存
            QSettings settings("config.ini", QSettings::IniFormat);

            settings.beginGroup("objectFrameIconPath");
            settings.remove(objectName);
            settings.endGroup();

            settings.beginGroup("objectFrameIconFilePath");
            QString keyName = objectName + "Path";
            settings.remove(keyName);
            settings.endGroup();
            // 最后加载
            loadSettings();
        }
    }

    emit SignalManager::instance().customFrame_loadSetting(); // 通知Bar重新加载配置
}

void Objectframe::ListeningIconPath(const QString &iconPath, const QString &filePath)
{
    this->m_iconPath = iconPath;
    this->m_filePath = filePath;
    this->queryImgLabelClicked = true; // 在点击这个对象所需的判断标识
}

void Objectframe::loadSettings()
{
    //从config.ini文件的objectFrameIconPath组中读取图片路径，使用对象的唯一标识作为key
    QSettings settings("config.ini", QSettings::IniFormat);
    settings.beginGroup("objectFrameIconPath");
    if(settings.contains(objectName))
    {
        QString imagePath= settings.value(objectName).toString();
        QPixmap pixmap(imagePath);
        if(!pixmap.isNull())
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
    // 如果没有这个键就清空内容
    else
    {
        resetObjectFrame();
    }
    settings.endGroup();
    settings.beginGroup("objectFrameIconFilePath");
    QString keyName = objectName + "Path";
    if(settings.contains(keyName)){
        this->m_filePath = settings.value(keyName).toString();
    }
    settings.endGroup();
}

void Objectframe::resetObjectFrame() // 重置信号
{
    this->m_iconPath = ""; // 必须重置
    this->m_filePath = "";
    this->queryImgLabelClicked = false; // 点击标识重置为false
    imageLabel->clear();
}

void Objectframe::ResetDragSource()
{
    this->m_iconPath = ""; // 重置图标路径为""
    this->m_filePath = ""; // 重置文件路径为""
    this->queryImgLabelClicked = false; // 重置点击标识为false
    imageLabel->clear(); // 清空图片显示

    QSettings settings("config.ini", QSettings::IniFormat);
    // 移除objectFrameIconPath组中对应objectName的key和value
    settings.beginGroup("objectFrameIconPath");
    settings.remove(objectName);
    settings.endGroup();

    // 移除objectFrameIconFilePath组中对应objectNamePath的key和value
    settings.beginGroup("objectFrameIconFilePath");
    QString keyName = objectName + "Path";
    settings.remove(keyName);
    settings.endGroup();
}

Objectframe::~Objectframe()
{

}
