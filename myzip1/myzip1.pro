#-------------------------------------------------
#
# Project created by QtCreator 2016-10-20T13:37:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = myzip1
TEMPLATE = app


# Set variables
## need to change on your local machine
#QUAZIPCODEDIR = "/home/alex/joy/cpp_zip/quazip-0.7.2/quazip/"
#ZLIBCODEDIR = "/home/alex/joy/cpp_zip/zlib-1.2.8/"

## OR use a precompiled path
QUAZIPCODEDIR = "/home/alex/joy/cpp_zip/quazip-0.7.2/quazip/"
ZLIBCODEDIR = "/home/alex/joy/cpp_zip/Libs/Unix/"

# include the compiled code
unix {
    LIBS += -L$${ZLIBCODEDIR} -lz
}

win32 {
    LIBS += -L$${ZLIBCODEDIR} -lzdll
}

# include files
INCLUDEPATH += $${QUAZIPCODEDIR}
HEADERS += $${QUAZIPCODEDIR}/*.h


SOURCES += $${QUAZIPCODEDIR}/*.cpp
SOURCES += $${QUAZIPCODEDIR}/*.c

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
