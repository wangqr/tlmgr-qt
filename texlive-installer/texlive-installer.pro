#-------------------------------------------------
#
# Project created by QtCreator 2016-08-07T17:25:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = texlive-installer
TEMPLATE = app


SOURCES += main.cpp\
        texliveinstallerwindow.cpp \
    aboutwindow.cpp

HEADERS  += texliveinstallerwindow.h \
    aboutwindow.h

FORMS    += texliveinstallerwindow.ui \
    aboutwindow.ui

RESOURCES += \
    resources.qrc
