#ifndef COLABORADOR_H
#define COLABORADOR_H

#include <QString>

class Colaborador
{
    private:
        QString nome;
        QString email;
        int id;

    public:
        Colaborador();
        Colaborador(QString nome, QString email);
        Colaborador(int id, QString nome, QString email);
        int getId();
        QString getNome();
        QString getEmail();
        void setNome(QString);
        void setEmail(QString);
        void setId(int);
};

#endif // COLABORADOR_H
