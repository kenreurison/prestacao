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
        Colaborador(int id, QString nome, QString email);
        QString getNome();
        QString getEmail();
        void setNome(QString);
        void setEmail(QString);
};

#endif // COLABORADOR_H
