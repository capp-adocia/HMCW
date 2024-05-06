QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Frame/achievementframe.cpp \
    Frame/customframe.cpp \
    Frame/objectframe.cpp \
    Frame/storageframe.cpp \
    Help/help_function.cpp \
    Help/queryapp.cpp \
    Help/queryimglabel.cpp \
    Help/tips.cpp \
    Menu/function/about.cpp \
    Menu/function/achievement.cpp \
    Menu/function/option.cpp \
    Menu/function/record.cpp \
    Menu/function/suggestion.cpp \
    Menu/function/tellbug.cpp \
    Menu/menu.cpp \
    ObjectBar/backpack.cpp \
    ObjectBar/bar.cpp \
    Rest/Game/game_2048.cpp \
    Rest/rest.cpp \
    SignalManager/signalmanger.cpp \
    main.cpp

HEADERS += \
    Frame/achievementframe.h \
    Frame/customframe.h \
    Frame/objectframe.h \
    Frame/storageframe.h \
    Help/help_function.h \
    Help/queryapp.h \
    Help/queryimglabel.h \
    Help/tips.h \
    Menu/function/about.h \
    Menu/function/achievement.h \
    Menu/function/option.h \
    Menu/function/record.h \
    Menu/function/suggestion.h \
    Menu/function/tellbug.h \
    Menu/menu.h \
    ObjectBar/backpack.h \
    ObjectBar/bar.h \
    Rest/Game/game_2048.h \
    Rest/rest.h \
    SignalManager/signalmanger.h

FORMS += \
    about.ui \
    achievement.ui \
    backpack.ui \
    bar.ui \
    game_2048.ui \
    menu.ui \
    option.ui \
    record.ui \
    rest.ui \
    suggestion.ui \
    tellbug.ui \
    tips.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

LIBS += -lole32 -lshell32 -luuid

TARGET = HMCW

RESOURCES += \
    res.qrc

RC_FILE = ico.rc

DISTFILES += \
    Image/KeepExpect.png \
    Image/微信图片_20240505105514.jpg \
    Image/微信图片_20240505105521.jpg \
    ico.rc
