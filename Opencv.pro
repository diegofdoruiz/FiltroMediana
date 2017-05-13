#-------------------------------------------------
#
# Project created by QtCreator 2017-05-06T10:49:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Opencv
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    filtromedianas.cpp

HEADERS  += mainwindow.h \
    filtromedianas.h

FORMS    += mainwindow.ui

INCLUDEPATH += /usr/local/include/opencv
LIBS += -L/usr/lib64/ -lopencv_core  -lopencv_highgui -lopencv_imgproc
