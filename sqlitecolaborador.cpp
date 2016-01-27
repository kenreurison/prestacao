#include "sqlitecolaborador.h"
#include "qfile.h"


SqliteColaborador::SqliteColaborador()
{
    QString pathname = "file2.db";
    QFile::remove("*.db");
    QString path = pathname;
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("prestacao.db");
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
