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

private slots:
    void insert_str( const QString &str );
    void set_str( const QString &str );

    void on_pushButton_n1_clicked();
    void on_pushButton_n2_clicked();
    void on_pushButton_n3_clicked();
    void on_pushButton_n4_clicked();
    void on_pushButton_n5_clicked();
    void on_pushButton_n6_clicked();
    void on_pushButton_n7_clicked();
    void on_pushButton_n8_clicked();
    void on_pushButton_n9_clicked();
    void on_pushButton_n0_clicked();
    void on_pushButton_open_paren_clicked();
    void on_pushButton_close_paren_clicked();
    void on_pushButton_plus_clicked();
    void on_pushButton_minus_clicked();
    void on_pushButton_multiply_clicked();
    void on_pushButton_divide_clicked();
    void on_pushButton_enter_clicked();
    void on_pushButton_backspace_clicked();

private:
    Ui::calc *ui;
};

#endif // CALC_H
