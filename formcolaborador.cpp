#include "formcolaborador.h"
#include "ui_formcolaborador.h"

FormColaborador::FormColaborador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormColaborador)
{
    ui->setupUi(this);
}

FormColaborador::~FormColaborador()
{
    delete ui;
}
