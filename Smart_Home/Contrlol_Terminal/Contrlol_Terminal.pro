#-------------------------------------------------
#
# Project created by QtCreator 2017-11-21T14:38:10
#
#-------------------------------------------------

QT       += core gui sql
QT       += network
QT       += serialport
#QT       += multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Contrlol_Terminal
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    setting.cpp \
    setting_menu.cpp \
    mythread.cpp \
    myserial.cpp \
    camera.cpp \
    common.cpp \
    led.cpp \
    house_app.cpp \
    userdata.cpp

HEADERS  += widget.h \
    setting.h \
    setting_menu.h \
    mythread.h \
    myserial.h \
    camera.h \
    common.h \
    led.h \
    house_app.h \
    userdata.h

FORMS    += widget.ui \
    setting.ui \
    setting_menu.ui \
    myserial.ui \
    camera.ui \
    led.ui \
    house_app.ui \
    userdata.ui

RESOURCES += \
    resource.qrc

DISTFILES +=





