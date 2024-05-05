#include <Help/help_function.h>

QString getIconFromExecutable(const QString &exePath) {
    QFileInfo fileInfo(exePath);
    if (fileInfo.exists() && fileInfo.isFile()) {
        QFileIconProvider iconProvider;
        QIcon icon = iconProvider.icon(fileInfo);
        if (!icon.isNull()) {
            QPixmap pixmap = icon.pixmap(QSize(512, 512)); // 根据需要调整图标大小
            if (!pixmap.isNull()) {
                QString saveFolderPath = QDir::currentPath() + "/save/";
                QDir saveDir(saveFolderPath);
                if (!saveDir.exists()) {
                    saveDir.mkpath(saveFolderPath);
                }
                QString iconPath = QString("%1%2.png").arg(saveFolderPath, fileInfo.fileName());
                if (pixmap.save(iconPath, "PNG")) {
                    return iconPath;
                }
            }
        }
    }
    return QString();
}

QString resolveLinkTarget(const QString &linkPath) {
    HRESULT hres;
    QString targetPath;

    // 初始化 COM 库
    hres = CoInitialize(NULL);
    if (SUCCEEDED(hres)) {
        IShellLink* psl;
        // 创建一个 ShellLink 对象
        hres = CoCreateInstance(CLSID_ShellLink, NULL, CLSCTX_INPROC_SERVER, IID_IShellLink, (LPVOID*)&psl);
        if (SUCCEEDED(hres)) {
            IPersistFile* ppf;
            // 查询 IShellLink 的 IPersistFile 接口
            hres = psl->QueryInterface(IID_IPersistFile, (void**)&ppf);
            if (SUCCEEDED(hres)) {
                // 加载 .lnk 文件
                hres = ppf->Load((LPCOLESTR)linkPath.utf16(), STGM_READ);
                if (SUCCEEDED(hres)) {
                    // 解析链接,获取目标
                    WCHAR szGotPath[MAX_PATH];
                    hres = psl->GetPath(szGotPath, MAX_PATH, (WIN32_FIND_DATAW*)NULL, SLGP_UNCPRIORITY);
                    if (SUCCEEDED(hres)) {
                        targetPath = QString::fromWCharArray(szGotPath);
                    }
                }
                ppf->Release();
            }
            psl->Release();
        }
        CoUninitialize();
    }
    return targetPath;
}
