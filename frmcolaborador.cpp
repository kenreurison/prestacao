#include "frmcolaborador.h"
#include "ui_frmcolaborador.h"

frmColaborador::frmColaborador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmColaborador)
{
    ui->setupUi(this);
}

frmColaborador::~frmColaborador()
{
    delete ui;
}
