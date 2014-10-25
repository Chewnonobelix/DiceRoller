#-------------------------------------------------
#
# Project created by QtCreator 2014-06-30T17:53:23
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DiceRoller
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    langage.cpp

HEADERS  += mainwindow.h \
    langage.h

FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Dice/release/ -lDice
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Dice/debug/ -lDice

INCLUDEPATH += $$PWD/../Dice
DEPENDPATH += $$PWD/../Dice

QMAKE_CXXFLAGS += -std=c++11

TRANSLATIONS += dice_fr.ts \
    dice_en.ts \
