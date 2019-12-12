QT += gui core widgets network xml xmlpatterns testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase c++17
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_dicetest.cpp

INCLUDEPATH += ../Dice
DEPENDPATH += $$OUT_PWD/../Dice/debug
LIBS += -L$$OUT_PWD/../Dice/debug -lDice
