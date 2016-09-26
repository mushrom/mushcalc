#include "calc.h"
#include "ui_calc.h"
#include <cstdio>

calc::calc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calc)
{
    ui->setupUi(this);
}

calc::~calc()
{
    delete ui;
}

void calc::insert_str( const QString &str ){
    ui->lineEdit->setText( ui->lineEdit->text() + str );
}

void calc::on_pushButton_n1_clicked() { insert_str( "1" ); }
void calc::on_pushButton_n2_clicked() { insert_str( "2" ); }
void calc::on_pushButton_n3_clicked() { insert_str( "3" ); }
void calc::on_pushButton_n4_clicked() { insert_str( "4" ); }
void calc::on_pushButton_n5_clicked() { insert_str( "5" ); }
void calc::on_pushButton_n6_clicked() { insert_str( "6" ); }
void calc::on_pushButton_n7_clicked() { insert_str( "7" ); }
void calc::on_pushButton_n8_clicked() { insert_str( "8" ); }
void calc::on_pushButton_n9_clicked() { insert_str( "9" ); }
void calc::on_pushButton_n0_clicked() { insert_str( "0" ); }
void calc::on_pushButton_open_paren_clicked()  { insert_str( "(" ); }
void calc::on_pushButton_close_paren_clicked() { insert_str( ")" ); }
void calc::on_pushButton_plus_clicked()        { insert_str( "+" ); }
void calc::on_pushButton_minus_clicked()       { insert_str( "-" ); }
void calc::on_pushButton_multiply_clicked()    { insert_str( "*" ); }
void calc::on_pushButton_divide_clicked()      { insert_str( "/" ); }

void calc::on_pushButton_enter_clicked()
{

}

void calc::on_pushButton_backspace_clicked()
{

}
