#include "conexao.h"

Conexao* Conexao::instance = NULL;

Conexao::Conexao() : QSqlDatabase()
{
}

Conexao* Conexao::getInstance()
{
    if(instance == NULL){
        instance = new Conexao();
    }
    return instance;
}
