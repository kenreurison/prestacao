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
        int getId() const;
        QString getNome() const;
        QString getEmail() const;
        void setNome(QString);
        void setEmail(QString);
        void setId(int);
};

#endif // COLABORADOR_H
