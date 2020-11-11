#include "borrowerinformation.h"
#include "ui_borrowerinformation.h"
#include "testh.h"

borrowerInformation::borrowerInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrowerInformation)
{
    ui->setupUi(this);

    //ui->label_2->setText("。。。");
}

borrowerInformation::~borrowerInformation()
{
    delete ui;
}
