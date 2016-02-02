#include <QCoreApplication>
#include "sqlitecolaborador.h"
#include "qfile.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("SQLITEdatabase.db");
    if(!file.exists()){
        QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("SQLITEdatabase.db");
        mydb.setConnectOptions("foreign_keys = ON");
        mydb.open();
        QSqlQuery query(mydb);
        QString script = file2String("sqliteCreateDatabase.txt");
        query.exec(script);

    }
    return a.exec();
}

QString file2String(QString file);
