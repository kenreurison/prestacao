#ifndef SQLITECOLABORADOR_H
#define SQLITECOLABORADOR_H

#include "colaboradordao.h"
#include <QSqlDatabase>
#include <QSqlQuery>

class SqliteColaborador : public virtual ColaboradorDAO
{
public:
    SqliteColaborador();
    QSqlDatabase mydb;
    //Select Colaborador
    Colaborador colaboradorByID(int id);
    Colaborador colaboradorByEmail(QString email);
    Colaborador colaboradorByNome(QString email);
    //Delete Colaborador
    void deleteColaborador()
    //Insert Colaborador
    //Update Colaborador
};

#endif // SQLITECOLABORADOR_H
