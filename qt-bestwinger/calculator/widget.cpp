#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMaximumSize(400,600);
    this->setMinimumSize(400,600);

    this->setWindowTitle("Calculator");

    //change background of equal button
    ui->equalBtn->setStyleSheet("background:blue");

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_oneBtn_clicked()
{
    expression +="1";
    ui->lineEdit->setText(expression);

}

void Widget::on_twoBtn_clicked()
{
    expression +="2";
    ui->lineEdit->setText(expression);
}

void Widget::on_threeBtn_clicked()
{
    expression +="3";
    ui->lineEdit->setText(expression);
}

void Widget::on_fourBtn_clicked()
{
    expression +="4";
    ui->lineEdit->setText(expression);
}

void Widget::on_fiveBtn_clicked()
{
    expression +="5";
    ui->lineEdit->setText(expression);
}

void Widget::on_sixBtn_clicked()
{
    expression +="6";
    ui->lineEdit->setText(expression);
}

void Widget::on_sevenBtn_clicked()
{
    expression +="7";
    ui->lineEdit->setText(expression);
}

void Widget::on_eightBtn_clicked()
{
    expression +="8";
    ui->lineEdit->setText(expression);
}

void Widget::on_nineBtn_clicked()
{
    expression +="9";
    ui->lineEdit->setText(expression);
}

void Widget::on_addBtn_clicked()
{
    expression +="+";
    ui->lineEdit->setText(expression);
}

void Widget::on_minusBtn_clicked()
{
    expression +="-";
    ui->lineEdit->setText(expression);
}

void Widget::on_multiBtn_clicked()
{
    expression +="*";
    ui->lineEdit->setText(expression);
}

void Widget::on_divideBtn_clicked()
{
    expression +="/";
    ui->lineEdit->setText(expression);
}

void Widget::on_clearBtn_clicked()
{
    expression.clear();
    ui->lineEdit->setText(expression);
}

void Widget::on_deleteBtn_clicked()
{
    expression.chop(1);
    ui->lineEdit->setText(expression);
}
