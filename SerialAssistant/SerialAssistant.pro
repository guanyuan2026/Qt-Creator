#-------------------------------------------------
#
# Project created by QtCreator 2021-03-30T20:20:10
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SerialAssistant
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

RC_ICONS=serial_iocn.ico
