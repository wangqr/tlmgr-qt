#-------------------------------------------------
#
# Project created by QtCreator 2016-08-08T12:02:28
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_texliveinstallertest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

include(../texlive-installer.pri)

SOURCES += tst_texliveinstallertest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"
