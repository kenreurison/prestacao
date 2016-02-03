#ifndef COLABORADORDAO_H
#define COLABORADORDAO_H

#include <QList>
#include "colaborador.h"
#include "list"

class ColaboradorDAO
{
public:
    virtual QList<Colaborador> getAllColaborador() = 0;
    virtual Colaborador getColaborador(int id);
    virtual void updateColaborador();
};

#endif // COLABORADORDAO_H
