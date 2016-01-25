#include "colaborador.h"


Colaborador::Colaborador()
{

}

Colaborador::Colaborador(int id, QString nome, QString email)
{
    this->id = id;
    this->nome = nome;
    this->email = email;
}

QString Colaborador::getNome()
{
    return nome;
}

QString Colaborador::getEmail()
{
    return email;
}

void Colaborador::setNome(QString nome)
{
    this->nome = nome;
}

void Colaborador::setEmail(QString email)
{
    this->email = email;
}

