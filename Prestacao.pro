QT += core
QT -= gui
QT += sql

TARGET = Prestacao
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    colaborador.cpp \
    sqlitecolaborador.cpp

HEADERS += \
    colaborador.h \
    colaboradordao.h \
    sqlitecolaborador.h

RESOURCES += \
    myresources.qrc

