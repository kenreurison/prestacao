#ifndef CARTAO_H
#define CARTAO_H

#include <QDate>

enum BandeiraDoCartao {VISA, MASTER, HIPER};

class Cartao
{
private:
    BandeiraDoCartao bandeira;
    QDate dia;

public:
    Cartao();
};

#endif // CARTAO_H
