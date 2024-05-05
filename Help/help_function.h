#ifndef HELP_FUNCTION_H
#define HELP_FUNCTION_H

#include <windows.h>
#include <shlobj.h>
#include <objbase.h>
#include <objidl.h>
#include <shlwapi.h>
#include <QPixmap>
#include <QTemporaryFile>
#include <QFileInfo>
#include <QFileIconProvider>
#include <tlhelp32.h>
#include <QProcess>
#include <QDir>

QString getIconFromExecutable(const QString &exePath);
QString resolveLinkTarget(const QString &linkPath);

#endif // HELP_FUNCTION_H
