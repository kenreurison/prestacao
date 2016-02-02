#include <QCoreApplication>
#include "sqlitecolaborador.h"
#include "qfile.h"
#include "qtextstream.h"


QString file2String(QString _file){
    QFile inputFile(_file);
    QString result = "";
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
          QString line = in.readLine();
          result.append(line);
       }
       inputFile.close();
    }
    return result;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QFile file("SQLITEdatabase.db");
    //file.remove();
    QString script("sqliteCreateDatabase.txt");
    if(!file.exists()){
        file.close();
        QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("SQLITEdatabase.db");
        mydb.setConnectOptions("foreign_keys = ON");
        mydb.open();
        QSqlQuery query(mydb);
        query.exec(file2String(script));
        /*query.exec("CREATE TABLE db_colaborador ("
                       "pk_colaborador	INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
                       "col_nome INTEGER"
                   ");");
        query.exec("CREATE TABLE db_detalhes ("
                       "pk_detalhes INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,"
                       "col_parcelamento INTEGER,"
                       "col_valor_total FLOAT,"
                       "col_data_vencimento INTEGER,"
                       "col_data_cartao TEXT"
                   ");");
        query.exec("create table db_transferencia("
                       "col_descricao TEXT,"
                       "col_comentarios TEXT,"
                       "pk_transferencia INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT, "
                       "fk_colaborador_out INTEGER,"
                       "fk_colaborador_in INTEGER,"
                       "fk_detalhes INTEGER,"
                       "FOREIGN KEY (fk_detalhes) REFERENCES db_opcao(pk_detalhes),"
                       "FOREIGN KEY(fk_colaborador_out, fk_colaborador_in) REFERENCES db_colaborador(pk_colaborador, pk_colaborador)"
                   ");");*/
    }
    return a.exec();
}
