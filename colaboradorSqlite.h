#ifndef COLABORADORSQLITE_H
#define COLABORADORSQLITE_H

#include "colaboradordao.h"
#include <QSqlDatabase>
#include <QSqlQuery>

class ColaboradorSqlite : public virtual ColaboradorDAO
{
public:
    ColaboradorSqlite();
    ColaboradorSqlite(QSqlDatabase);
};

#endif // COLABORADORSQLITE_H
