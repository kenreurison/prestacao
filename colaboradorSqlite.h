#ifndef COLABORADORSQLITE_H
#define COLABORADORSQLITE_H

#include "colaboradordao.h"
#include <QSqlDatabase>
#include <QSqlQuery>


class ColaboradorSqlite : public ColaboradorDAO
{
protected:
    QSqlQuery query;
public:
    ColaboradorSqlite();
    QList<Colaborador> getAllColaborador();
    Colaborador getColaborador(int id);
    bool updateColaborador(Colaborador);
    bool addColaborador(Colaborador);
    bool removeColaborador(Colaborador);
};

#endif // COLABORADORSQLITE_H
