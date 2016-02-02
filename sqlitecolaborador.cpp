#include "sqlitecolaborador.h"
#include "qfile.h"


SqliteColaborador::SqliteColaborador()
{

}

Colaborador SqliteColaborador::colaboradorByID(int id){
    return Colaborador(id,"Kennedy","kenreurison@gmail.com");
}

Colaborador SqliteColaborador::colaboradorByEmail(QString email){
    return Colaborador(1,"Kennedy",email);
}


Colaborador SqliteColaborador::colaboradorByNome(QString nome){
    return Colaborador(1,nome,"kenreurison@gmail.com");
}
