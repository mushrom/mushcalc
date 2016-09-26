#ifndef CALC_H
#define CALC_H

#include <QMainWindow>

namespace Ui {
class calc;
}

class calc : public QMainWindow
{
    Q_OBJECT

public:
    explicit calc(QWidget *parent = 0);
    ~calc();

private:
    Ui::calc *ui;
};

#endif // CALC_H
