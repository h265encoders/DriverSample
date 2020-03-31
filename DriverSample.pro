#-------------------------------------------------
#
# Project created by QtCreator 2020-03-30T22:13:03
#
#-------------------------------------------------

QT       -= gui

TARGET = DriverSample
TEMPLATE = lib

chip = HI3519A
include(../LinkLib/Link.pri)

DEFINES += DRIVERSAMPLE_LIBRARY

SOURCES += DriverSample.cpp

HEADERS += DriverSample.h\
        driversample_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
