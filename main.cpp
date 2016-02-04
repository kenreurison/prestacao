#include <QCoreApplication>
#include "colaboradorSqlite.h"
#include "qfile.h"
#include "qtextstream.h"
#include "QStringList"


QStringList file2StringList(QString _file){
    QFile inputFile(_file);
    QString listresult = "";
    if (inputFile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&inputFile);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            listresult.append(line);
        }
        inputFile.close();
    }
    QStringList stringList = listresult.split(";");
    stringList.removeLast();
    for(int i=0;i<stringList.length()-1; i++){
        ((QString) stringList.at(i)).append(";");
    }
    return stringList;
}

QList<Colaborador> selecionarTodosColaboradores(){
    ColaboradorDAO *x = new ColaboradorSqlite();
    QList<Colaborador> result = x->getAllColaborador();
    return result;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("SQLITEdatabase.db");
    QString script(":/sqlite/criacao/script/sqliteCreateDatabase.txt");
    if(!file.exists()){
        QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("SQLITEdatabase.db");
        mydb.setConnectOptions("foreign_keys = ON");
        mydb.open();
        QSqlQuery query(mydb);
        QStringList stringList = file2StringList(script);
        for(int i=0; i<stringList.length(); i++){
            query.exec((QString) stringList.at(i));
        }
    }
    selecionarTodosColaboradores();
    return a.exec();
}
