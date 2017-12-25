#-------------------------------------------------
#
# Project created by QtCreator 2017-10-22T19:24:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GPS
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    map.cpp \
    browser.cpp \
    music_player.cpp \
    mythread.cpp

HEADERS  += widget.h \
    map.h \
    browser.h \
    music_player.h \
    mythread.h

FORMS    += widget.ui \
    map.ui \
    browser.ui \
    music_player.ui

QT += webkitwidgets
QT += multimedia
RESOURCES += \
    image.qrc
