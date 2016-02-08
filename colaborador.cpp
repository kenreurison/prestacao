#include "colaborador.h"


Colaborador::Colaborador()
{

}

Colaborador::Colaborador(QString nome, QString email){
    this->nome = nome;
    this->email = email;
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

int Colaborador::getId()
{
    return id;
}

void Colaborador::setNome(QString nome)
{
    this->nome = nome;
}

void Colaborador::setId(int id)
{
    this->id = id;
}

void Colaborador::setEmail(QString email)
{
    this->email = email;
}

