#include <QSqlDatabase>
#include <QVariant>


#include "colaboradorSqlite.h"
#include "qfile.h"
#include "colaboradordatabase.h"


ColaboradorSqlite::ColaboradorSqlite(){

}

QList<Colaborador> ColaboradorSqlite::getAllColaborador(){
    QSqlDatabase db = ColaboradorDatabase::getInstance();
    QSqlQuery query = QSqlQuery(db);
    QList<Colaborador> *result = new QList<Colaborador>();
    query.exec("SELECT * FROM  db_colaborador");
    int size = query.size();
    Colaborador *c = new Colaborador();
    while (query.next()) {
        c->setId(query.value(0).toInt());
        c->setNome(query.value(1).toString());
        c->setEmail(query.value(2).toString());
        result->append(*c);
    }

}

Colaborador ColaboradorSqlite::getColaborador(int id){

}

bool ColaboradorSqlite::removeColaborador(Colaborador){
    return true;
}

bool ColaboradorSqlite::updateColaborador(Colaborador){
    return true;
}

bool ColaboradorSqlite::addColaborador(Colaborador){

}
