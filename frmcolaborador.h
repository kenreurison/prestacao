#ifndef FRMCOLABORADOR_H
#define FRMCOLABORADOR_H

#include <QDialog>

#include "QStandardItemModel"

namespace Ui {
class frmColaborador;
}

class frmColaborador : public QDialog
{
    Q_OBJECT

public:
    explicit frmColaborador(QWidget *parent = 0);
    ~frmColaborador();

public slots:
    void refreshColaborador();

private:
    Ui::frmColaborador *ui;
    QStandardItemModel *model;
};

#endif // FRMCOLABORADOR_H
