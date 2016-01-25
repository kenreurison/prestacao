#ifndef COLABORADORDAO_H
#define COLABORADORDAO_H

#include "colaborador.h"

class ColaboradorDAO
{
public:
    virtual Colaborador colaboradorByID(int id) = 0;
    virtual Colaborador colaboradorByNome(QString nome) = 0;
    virtual Colaborador colaboradorByEmail(QString email) = 0;
};

#endif // COLABORADORDAO_H
