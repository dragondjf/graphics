#-------------------------------------------------
#
# Project created by QtCreator 2015-06-14T21:03:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = graphice
TEMPLATE = app

include(./widgets/widgets.pri)

SOURCES += main.cpp \
    app/graphiceview.cpp \
    app/graphicesence.cpp \
    app/desktopitem.cpp \
    app/pixmaptextitem.cpp

HEADERS  += \
    app/graphicssence.h \
    app/graphicsview.h \
    app/desktopitem.h \
    app/pixmaptextitem.h

RESOURCES += \
    skin.qrc
