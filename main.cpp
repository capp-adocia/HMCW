#include "ObjectBar/bar.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QIcon appIcon(":/Image/AchievementIcon/GeneralIcon/HelloWorld.png");
    a.setWindowIcon(appIcon);
    Bar bar;
    bar.setWindowTitle("HMCW");
    bar.show();
    return a.exec();
}
