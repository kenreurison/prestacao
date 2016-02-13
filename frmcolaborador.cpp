#include "frmcolaborador.h"
#include "ui_frmcolaborador.h"
#include "colaboradordao.h"
#include "colaboradorSqlite.h"
#include <qsqlquerymodel.h>
#include "colaboradordatabase.h"

frmColaborador::frmColaborador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmColaborador)
{
    ui->setupUi(this);
    connect(ui->btnRefresh,SIGNAL(clicked(bool)),this,SLOT(refreshColaborador()));
    refreshColaborador();
}

frmColaborador::~frmColaborador()
{
    delete ui;
}

void frmColaborador::refreshColaborador(){
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT pk_colaborador, col_nome, col_email FROM db_colaborador", ColaboradorDatabase::getInstance());
    model->setHeaderData(0,Qt::Horizontal, tr("ID"));
    model->setHeaderData(1,Qt::Horizontal, tr("Nome"));
    model->setHeaderData(2,Qt::Horizontal, tr("Email"));
    ui->tbColaborador->setModel(model);
    ui->tbColaborador->setAlternatingRowColors(true);
    ui->tbColaborador->show();
}

void frmColaborador::on_tbColaborador_clicked(const QModelIndex &index)
{
    ui->tbColaborador->model()->index(index.row(),2);
    QModelIndex id = ui->tbColaborador->model()->index(index.row(),0);
    QModelIndex nome = ui->tbColaborador->model()->index(index.row(),1);
    QModelIndex email = ui->tbColaborador->model()->index(index.row(),2);
    QString strId = ui->tbColaborador->model()->data(id).toString();
    QString strNome = ui->tbColaborador->model()->data(nome).toString();
    QString strEmail = ui->tbColaborador->model()->data(email).toString();
    ui->lineEditID->setText(strId);
    ui->lineEditNome->setText(strNome);
    ui->lineEditEmail->setText(strEmail);
}









