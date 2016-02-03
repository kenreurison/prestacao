#ifndef COLABORADORDATABASE_H
#define COLABORADORDATABASE_H
#include <QSqlDatabase>


class ColaboradorDatabase : QSqlDatabase
{
private:
    static ColaboradorDatabase *instance = 0;
    ColaboradorDatabase(){}

public:
    static ColaboradorDatabase& getInstance(){
        if(!instance) instance = new ColaboradorDatabase();
        return *instance;
    }
};

#endif // COLABORADORDATABASE_H
