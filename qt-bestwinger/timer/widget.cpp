#include "widget.h"
#include "ui_widget.h"
#include<QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerEvent(QTimerEvent *e)
{
   if(e->timerId()==this->m_timerID)
   {
       qDebug()<<"triggered timer!";
   }
   else
       return;
}


void Widget::on_startBtn_clicked()
{
    //return timerId
   this->m_timerID= this->startTimer(1000);
}

void Widget::on_stopBtn_clicked()
{
    this->killTimer(this->m_timerID);
}
