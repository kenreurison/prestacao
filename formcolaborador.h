#ifndef FORMCOLABORADOR_H
#define FORMCOLABORADOR_H

#include <QWidget>

namespace Ui {
class FormColaborador;
}

class FormColaborador : public QWidget
{
    Q_OBJECT

public:
    explicit FormColaborador(QWidget *parent = 0);
    ~FormColaborador();

private:
    Ui::FormColaborador *ui;
};

#endif // FORMCOLABORADOR_H
