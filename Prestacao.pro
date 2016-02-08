QT -= gui
QT += sql

TARGET = Prestacao
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    colaborador.cpp \
    colaboradorSqlite.cpp \
    formcolaborador.cpp

HEADERS += \
    colaborador.h \
    colaboradordao.h \
    colaboradorSqlite.h \
    colaboradordatabase.h \
    formcolaborador.h

RESOURCES += \
    myresources.qrc

FORMS += \
    formcolaborador.ui

