#-------------------------------------------------
#
# Project created by QtCreator 2015-08-17T09:48:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = flightKiosk
TEMPLATE = app


SOURCES += main.cpp\
        flightkiosk.cpp

HEADERS  += flightkiosk.h

FORMS    += flightkiosk.ui

# deployment on Linux
unix {
    target.path = /usr/bin/
    #trdx-resources.path = /usr/bin/trdx-resources/
    trdx-resources.files = trdx-resources/*
    INSTALLS += target \
             #trdx-resources \
}

DISTFILES += \
    trdx-resources/clouds-gray.jpg \
    trdx-resources/banner.png \
    trdx-resources/banner3.png \
    trdx-resources/btn-toradex.png \
    trdx-resources/flight-info-trdx.png \
    trdx-resources/seats-plane.png \
    trdx-resources/top-bar.png \
    trdx-resources/top-text.png \
    trdx-resources/toradex-logo-white-small.png \
    trdx-resources/welcome-screen-toradex.png \
    trdx-resources/white-bar.png









