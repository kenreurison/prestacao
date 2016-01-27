#include <QCoreApplication>
#include "sqlitecolaborador.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SqliteColaborador colaborador = SqliteColaborador();
    return a.exec();
}

