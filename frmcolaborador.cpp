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
    refreshColaborador();
}









