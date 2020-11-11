#include "borrowerdialog.h"
#include "ui_borrowerdialog.h"
#include <QDebug>

borrowerDialog::borrowerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrowerDialog)
{
    ui->setupUi(this);

    //绑定三个按钮
    connect(ui->pushButton_1,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_1_clicked));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(pushButton_2_clicked()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(pushButton_3_clicked()));
}

borrowerDialog::~borrowerDialog()
{
    delete ui;
}

void borrowerDialog::on_pushButton_1_clicked()//查询
{
    qDebug()<<"ok1"<<endl;//调试

    newDiaSearch=new DialogSearch();
    newDiaSearch->show();
}

void borrowerDialog::pushButton_2_clicked()//借书
{
    qDebug()<<"ok2"<<endl;//调试

    newDiaBorrow=new DialogBorrow();
    newDiaBorrow->show();
}


void borrowerDialog::pushButton_3_clicked()//归还
{
    qDebug()<<"ok3"<<endl;//调试

    newDiaReturn=new DialogReturn();
    newDiaReturn->show();
}
