#include "frmcolaborador.h"
#include "ui_frmcolaborador.h"
#include "colaboradordao.h"
#include "colaboradorSqlite.h"

frmColaborador::frmColaborador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmColaborador)
{
    ui->setupUi(this);
    connect(ui->btnRefresh,SIGNAL(clicked(bool)),this,SLOT(refreshColaborador()));
    QStringList labels;
    model = new QStandardItemModel();
    labels << "ID" << "Nome" << "Email";
    model->setHorizontalHeaderLabels(labels);
    refreshColaborador();
    ui->tbColaborador->setModel(model);
}

frmColaborador::~frmColaborador()
{
    delete ui;
}

void frmColaborador::refreshColaborador(){
    ColaboradorDAO *c = new ColaboradorSqlite();
    QList<Colaborador> list = c->getAllColaborador();
    int listNum = list.size();
    for (int i = 0; i < listNum; i++) {
        int id = list.at(i).getId();
        QString nome = list.at(i).getNome();
        QString email = list.at(i).getEmail();
        model->setItem(i,0,new QStandardItem(QString::number(id)));
        model->setItem(i,1,new QStandardItem(nome));
        model->setItem(i,2,new QStandardItem(email));
    }

    ui->tbColaborador->setModel(model);
}
