#include "frmprincipal.h"
#include "ui_frmprincipal.h"

frmPrincipal::frmPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frmPrincipal)
{
    ui->setupUi(this);
}

frmPrincipal::~frmPrincipal()
{
    delete ui;
}
