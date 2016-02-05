#include <QSqlQuery>
#include <QVariant>


#include "colaboradorSqlite.h"
#include "qfile.h"
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

bool ColaboradorSqlite::removeColaborador(Colaborador){
    return true;
}

bool ColaboradorSqlite::updateColaborador(Colaborador){
    return true;
}

bool ColaboradorSqlite::addColaborador(Colaborador){
    return true;
}
