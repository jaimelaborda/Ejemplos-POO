QT += core
QT -= gui

CONFIG += c++11

TARGET = timerOnQt
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mytimer.cpp

HEADERS += \
    mytimer.h
