#include "sqlitecolaborador.h"
#include "qfile.h"


SqliteColaborador::SqliteColaborador()
{
    QString pathname = "SQLITEdatabase.db";
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName(pathname);
    mydb.open();

    QSqlQuery query;
    query.exec("CREATE TABLE"
               " db_colaborador (pk_colaborador	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
               "col_nome INTEGER)");
}

Colaborador SqliteColaborador::colaboradorByID(int id){
    return Colaborador(id,"Kennedy","kenreurison@gmail.com");
}

Colaborador SqliteColaborador::colaboradorByEmail(QString email){
    return Colaborador(1,"Kennedy",email);
}


Colaborador SqliteColaborador::colaboradorByNome(QString nome){
    return Colaborador(1,nome,"kenreurison@gmail.com");
}
