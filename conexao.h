#ifndef CONEXAO_H
#define CONEXAO_H

#include <QString>
#include <QSqlDatabase>

class Conexao : public QSqlDatabase
{
public:
    static Conexao* getInstance();

private:
    static Conexao* instance;
    Conexao();
};

#endif
