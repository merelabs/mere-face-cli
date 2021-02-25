QT -= gui

CONFIG += c++11
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        src/command.cpp \
        src/command/create.cpp \
        src/command/install.cpp \
        src/command/list.cpp \
        src/command/remove.cpp \
        src/faceapp.cpp \
        src/main.cpp

HEADERS += \
    src/command.h \
    src/command/create.h \
    src/command/install.h \
    src/command/list.h \
    src/command/remove.h \
    src/faceapp.h \

INCLUDEPATH += /usr/local/include

LIBS += -lmere-face

#
# Install
#
unix
{
    target.path = /usr/local/bin
    INSTALLS += target
}
