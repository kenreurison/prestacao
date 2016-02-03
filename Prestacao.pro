QT += core
QT -= gui
QT += sql

TARGET = Prestacao
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    colaborador.cpp \
    colaboradorSqlite.cpp

HEADERS += \
    colaborador.h \
    colaboradordao.h \
    colaboradorSqlite.h \
    colaboradordatabase.h

RESOURCES += \
    myresources.qrc

