#-------------------------------------------------
#
# Project created by QtCreator 2016-02-11T18:05:28
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Contas
TEMPLATE = app


SOURCES += main.cpp\
        frmprincipal.cpp \
    colaborador.cpp \
    colaboradorSqlite.cpp \
    frmcolaborador.cpp \
    colaboradordatabase.cpp

HEADERS  += frmprincipal.h \
    colaborador.h \
    colaboradordao.h \
    colaboradorSqlite.h \
    colaboradordatabase.h \
    frmcolaborador.h

FORMS    += frmprincipal.ui \
    frmcolaborador.ui

RESOURCES += \
    myresources.qrc
