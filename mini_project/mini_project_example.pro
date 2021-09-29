#-------------------------------------------------
#
# Project created by QtCreator 2015-04-28T17:36:41
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
DESTDIR   = $$PWD
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mini_project_example
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    role.cpp \
    obstacle.cpp \
    easymusic.cpp \
    start_page.cpp \
    bg.cpp \
    floor.cpp

HEADERS  += mainwindow.h \
    role.h \
    obstacle.h \
    easymusic.h \
    start_page.h \
    bg.h \
    floor.h

RESOURCES += \
    resource.qrc

DISTFILES +=
