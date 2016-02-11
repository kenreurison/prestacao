#ifndef FRMCOLABORADOR_H
#define FRMCOLABORADOR_H

#include <QDialog>

namespace Ui {
class frmColaborador;
}

class frmColaborador : public QDialog
{
    Q_OBJECT

public:
    explicit frmColaborador(QWidget *parent = 0);
    ~frmColaborador();

private:
    Ui::frmColaborador *ui;
};

#endif // FRMCOLABORADOR_H
