#ifndef COLABORADORDATABASE_H
#define COLABORADORDATABASE_H
#include <QSqlDatabase>

class ColaboradorDatabase
{
private:
    QSqlDatabase mydb;
    static ColaboradorDatabase *instance;
    ColaboradorDatabase(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("SQLITEdatabase.db");
        mydb.setConnectOptions("foreign_keys = ON");
        mydb.open();
    }
public:
    static QSqlDatabase getInstance(){
        if(!instance)
            instance = new ColaboradorDatabase();
        return instance->mydb;
    }
};

//Extremanente necessário essa linha de baixo.
ColaboradorDatabase *ColaboradorDatabase::instance = 0;


#endif // COLABORADORDATABASE_H
