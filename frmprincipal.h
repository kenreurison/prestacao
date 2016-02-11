#ifndef FRMPRINCIPAL_H
#define FRMPRINCIPAL_H

#include <QMainWindow>

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
};

#endif // FRMPRINCIPAL_H
