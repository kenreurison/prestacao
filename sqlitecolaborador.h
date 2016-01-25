#ifndef SQLITECOLABORADOR_H
#define SQLITECOLABORADOR_H

#include "colaboradordao.h"
#include <QSqlDatabase>
#include <QSqlQuery>

class SqliteColaborador : public virtual ColaboradorDAO
{
public:
    SqliteColaborador();
    Colaborador colaboradorByID(int id);
    Colaborador colaboradorByEmail(QString email);
    Colaborador colaboradorByNome(QString email);
};

#endif // SQLITECOLABORADOR_H
