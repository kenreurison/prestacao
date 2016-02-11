#include "frmprincipal.h"
#include "ui_frmprincipal.h"
#include "frmcolaborador.h"

frmPrincipal::frmPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frmPrincipal)
{
    ui->setupUi(this);
    connect(ui->actionVisualizar_Colaboradores,SIGNAL(triggered(bool)),this,SLOT(openColaboradores()));

}

frmPrincipal::~frmPrincipal()
{
    delete ui;
}

void frmPrincipal::openColaboradores(){
    frmColaborador f(this);
    f.exec();
}
