#ifndef FRMPRINCIPAL_H
#define FRMPRINCIPAL_H

#include <QMainWindow>
#include "frmcolaborador.h"

namespace Ui {
class frmPrincipal;
}

class frmPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit frmPrincipal(QWidget *parent = 0);
    ~frmPrincipal();

private:
    Ui::frmPrincipal *ui;

private slots:
    void openColaboradores();
};

#endif // FRMPRINCIPAL_H
