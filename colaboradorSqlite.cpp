#include <QSqlQuery>
#include <QVariant>
#include <QFile>

#include "colaboradorSqlite.h"
#include "colaboradordatabase.h"


ColaboradorSqlite::ColaboradorSqlite(){
    query = QSqlQuery(ColaboradorDatabase::getInstance());
}

QList<Colaborador> ColaboradorSqlite::getAllColaborador(){
    QList<Colaborador> *result = new QList<Colaborador>();
    query.exec("SELECT pk_colaborador, col_nome, col_email FROM  db_colaborador");
    Colaborador *c = new Colaborador();
    while (query.next()) {
        c->setId(query.value(0).toInt());
        c->setNome(query.value(1).toString());
        c->setEmail(query.value(2).toString());
        result->append(*c);
    }
    return *result;

}

Colaborador ColaboradorSqlite::getColaborador(int id){
    query.exec("SELECT pk_colaborador, col_nome, col_email FROM  db_colaborador"
                  " WHERE pk_colaborador="+QString::number(id));
    query.next();
    Colaborador *c = new Colaborador(query.value(0).toInt(),
                                     query.value(1).toString(),
                                     query.value(2).toString());
    return *c;
}

bool ColaboradorSqlite::removeColaborador(Colaborador c){
    return query.exec("DELETE FROM db_colaborador WHERE pk_colaborador="+QString::number(c.getId()));
}

bool ColaboradorSqlite::updateColaborador(Colaborador c){

    QString sql = "UPDATE db_colaborador SET col_nome = \'"+c.getNome()+"\', "
        "col_email = \'"+c.getEmail()+"\' WHERE pk_colaborador = "+QString::number(c.getId());
    return query.exec(sql);

}

bool ColaboradorSqlite::addColaborador(Colaborador c){
    query.prepare("INSERT INTO db_colaborador (col_nome, col_email) "
                     "VALUES (:col_nome, :col_email)");
    query.bindValue(":col_nome",c.getNome());
    query.bindValue(":col_email",c.getEmail());
    return query.exec();

}

QString ColaboradorSqlite::getQuery(){
    return QString("SELECT pk_colaborador, col_nome, col_email FROM  db_colaborador");
}
