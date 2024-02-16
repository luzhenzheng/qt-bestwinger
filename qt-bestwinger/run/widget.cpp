#include "widget.h"
#include "ui_widget.h"
#include<QProcess>
#include<QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //4 paramters 1.who sent signal 2. what signal sent3.received signal 4. what signal received


    connect(ui->cmdLineEdit,SIGNAL(returnPressed()),this,SLOT(on_commitBtn_clicked()));
    //    connect(ui->cmdLineEdit,&QLineEdit::returnPressed,[=](){on_commitBtn_clicked();});
    //    connect(ui->commitBtn,&QPushButton::clicked,[=](){qDebug()<<"clicked!";});
    connect(ui->cancelBtn,SIGNAL(clicked()),this,SLOT(on_cancelBtn_clicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_commitBtn_clicked()
{
    qDebug()<<"on_commitBtn_clicked()!";
    //get data in line edit
    QString program =
            ui->cmdLineEdit->text();
    QProcess *myProcess = new QProcess(this);
    myProcess->start(program);
}

void Widget::on_cancelBtn_clicked()
{
    qDebug()<<"on_cancelBtn_clicked()!";
    this->close();
}
