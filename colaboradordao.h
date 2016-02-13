#ifndef COLABORADORDAO_H
#define COLABORADORDAO_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QList>
#include "colaborador.h"
#include "list"

class ColaboradorDAO
{
public:
    ColaboradorDAO(){}
    virtual QList<Colaborador> getAllColaborador() = 0;
    virtual Colaborador getColaborador(int id) = 0;
    virtual bool updateColaborador(Colaborador) = 0;
    virtual bool addColaborador(Colaborador) = 0;
    virtual bool removeColaborador(Colaborador) = 0;
    virtual QString getQuery() = 0;
};

#endif // COLABORADORDAO_H
