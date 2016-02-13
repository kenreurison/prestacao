#ifndef COLABORADORDATABASE_H
#define COLABORADORDATABASE_H
#include <QSqlDatabase>
#include "qfile.h"

class ColaboradorDatabase
{
private:
    QSqlDatabase mydb;
    static ColaboradorDatabase *instance;
    ColaboradorDatabase(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        runSqlDump();
        mydb.setDatabaseName("SQLITEdatabase.db");
        mydb.setConnectOptions("foreign_keys = ON");
        mydb.open();
    }
    void runSqlDump(){
        QFile *f = new QFile("SQLITEdatabase.db");
        if(!f->exists()){
            QFile::copy(":/banco/script/SQLITEdatabase.db", "SQLITEdatabase.db");
        }
    }

public:
    static QSqlDatabase getInstance(){
        if(!instance)
            instance = new ColaboradorDatabase();
        return instance->mydb;
    }
};


#endif // COLABORADORDATABASE_H
