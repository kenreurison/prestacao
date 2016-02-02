#include <QCoreApplication>
#include "sqlitecolaborador.h"
#include "qfile.h"
#include "qtextcodec.h"

QString file2String(QString _file){
    QFile file(_file);
    file.open(QFile::ReadOnly|QFile::Text);
    QString result = QTextCodec::codecForMib(106)->toUnicode(file.readAll());
    result.
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("SQLITEdatabase.db");
    file.remove();
    QString script("sqliteCreateDatabase.txt");
    if(!file.exists()){
        file.close();
        QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("SQLITEdatabase.db");
        mydb.setConnectOptions("foreign_keys = ON");
        mydb.open();
        QSqlQuery query(mydb);
        QString scriptString = file2String(script);
        query.exec(scriptString);
    }
    return a.exec();
}
