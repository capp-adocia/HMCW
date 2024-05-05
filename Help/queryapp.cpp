#include "queryapp.h"

Queryapp::Queryapp()
{

}

void Queryapp::searchDirectory(const QDir &dir, QStringList &foundFilePaths) {
    QStringList fileList = dir.entryList(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);
    foreach (const QString &currentFileName, fileList) {
        QString filePath = dir.absoluteFilePath(currentFileName);
        QFileInfo fileInfo(filePath);

        if (fileInfo.isDir()) {
            searchDirectory(QDir(filePath), foundFilePaths); // 递归搜索子目录
        } else if (fileInfo.isFile() && fileInfo.suffix() == "exe") {
                iconPaths.append(getIconFromExecutable(filePath)); // 将转化的图标路径添加到列表中
                // 完整路径
                foundFilePaths.append(filePath); // 将找到的文件exe路径添加到列表中
        }
    }
    // 在遍历完所有目录和文件后停止递归
}

void Queryapp::run() {
    QStringList foundFilePaths; // 用于存储找到的文件路径
    if(!iconPaths.empty()) iconPaths.clear(); // 用于存储文件的图标路径

    // 获取系统中所有逻辑驱动器
    foreach (const QFileInfo &drive, QDir::drives()) {
        searchDirectory(drive.path(), foundFilePaths);
    }

    emit executableFound(foundFilePaths, iconPaths);
    emit finished();
}

void Queryapp::setDirPath_fileName(const QString &dirPath)
{
    this->m_dirPath = dirPath;
}

void Queryapp::stopThread() {
    quit(); // 停止线程事件循环
    // wait(); // 等待线程结束
}
