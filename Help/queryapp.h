#ifndef QUERYAPP_H
#define QUERYAPP_H

#include <QThread>
#include <QDir>
#include <QFileInfo>
#include <Help/help_function.h>
#include <QDebug>
#include <QDir>

class Queryapp : public QThread
{
    Q_OBJECT
public:
    explicit Queryapp();
    void searchDirectory(const QDir &dir, QStringList &foundFilePaths);
    void setDirPath_fileName(const QString &dirPath); // 修改路径名
public slots:
    void stopThread(); // 停止线程
signals:
    void executableFound(const QStringList &filePaths,const QStringList &iconPaths);
    void querying();
    void finished();

protected:
    void run() override;

private:
    QString m_dirPath; // 目录名
    QStringList iconPaths; // 图标路径容器
};

#endif // QUERYAPP_H
