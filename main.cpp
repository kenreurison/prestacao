#include <QApplication>
#include "colaboradorSqlite.h"
#include "qfile.h"
#include "qtextstream.h"
#include "QStringList"
#include "frmprincipal.h"

QStringList file2StringList(QString _file){
    QFile inputFile(_file);
    QString listresult = "";
    if (inputFile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&inputFile);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            listresult.append(line);
        }
        inputFile.close();
    }
    QStringList stringList = listresult.split(";");
    stringList.removeLast();
    for(int i=0;i<stringList.length()-1; i++){
        ((QString) stringList.at(i)).append(";");
    }
    return stringList;
}

QList<Colaborador> selecionarTodosColaboradores(){
    ColaboradorDAO *x = new ColaboradorSqlite();
    QList<Colaborador> result = x->getAllColaborador();
    return result;
}

Colaborador selecionarColaborador(int i){
    ColaboradorDAO *x = new ColaboradorSqlite();
    return x->getColaborador(i);
}
bool adicionarColaborador(QString nome, QString email){
    Colaborador c = Colaborador(nome, email);
    ColaboradorDAO *x = new ColaboradorSqlite();
    return x->addColaborador(c);
//    adicionarColaborador("Kennedy Reurison Lopes", "kenreurison@gmail.com");
//    adicionarColaborador("Eliabe Silva de Araujo","eliabecivil@gmail.com");
}

bool modificarColaborador(Colaborador a, Colaborador b){
    ColaboradorDAO *x = new ColaboradorSqlite();
    a.setNome(b.getNome());
    a.setEmail(b.getEmail());
    return x->updateColaborador(a);
//    Colaborador x = selecionarColaborador(1);
//    Colaborador y = Colaborador("Kennedy","kenreurison@hotmail.com");
//    bool z = modificarColaborador(x,y);
}

bool removerColaborador(Colaborador c){
    ColaboradorDAO *x = new ColaboradorSqlite();
    return x->removeColaborador(c);
//    Colaborador c();
//    c.setId(1);
//    removerColaborador(c);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    frmPrincipal f;
    f.show();
    for(int i=0;i<10;i++){
        adicionarColaborador("Kennedy","kenreurison@gmail.com");
        adicionarColaborador("Larissa","larissamoura93@gmail.com");
    }
    return a.exec();
}
