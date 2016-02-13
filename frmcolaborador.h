#ifndef FRMCOLABORADOR_H
#define FRMCOLABORADOR_H

#include <QDialog>
#include <qstandarditemmodel>

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

private slots:
    void on_tbColaborador_clicked(const QModelIndex &index);

private:
    Ui::frmColaborador *ui;
    QStandardItemModel *model;
};

#endif // FRMCOLABORADOR_H
