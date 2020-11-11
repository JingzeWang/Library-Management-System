#include "borrowerdialog.h"
#include "ui_borrowerdialog.h"
#include <QDebug>
#include "testh.h"

borrowerDialog::borrowerDialog(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::borrowerDialog)
{
	ui->setupUi(this);

	//绑定三个按钮
	connect(ui->pushButton_1, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_1_clicked));
	connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(pushButton_2_clicked()));
	connect(ui->pushButton_3, SIGNAL(clicked(bool)), this, SLOT(pushButton_3_clicked()));
	connect(ui->pushButton_6, SIGNAL(clicked(bool)), this, SLOT(pushButton_6_clicked()));
}

borrowerDialog::~borrowerDialog()
{
	delete ui;
}

void borrowerDialog::on_pushButton_1_clicked()//查询
{
	qDebug() << "ok1" << endl;//调试

	newDiaSearch = new DialogSearch();
	newDiaSearch->show();
}

void borrowerDialog::pushButton_2_clicked()//借书
{
	qDebug() << "ok2" << endl;//调试

	newDiaBorrow = new DialogBorrow();
	newDiaBorrow->show();
}


void borrowerDialog::pushButton_3_clicked()//归还
{
	qDebug() << "ok3" << endl;//调试

	newDiaReturn = new DialogReturn();
	newDiaReturn->show();
}

void borrowerDialog::on_pushButton_4_clicked()//我的信息！
{
	qDebug() << "ok4" << endl;//调试

	newMyInformation = new MyInformation();
	newMyInformation->show();
}

void borrowerDialog::on_pushButton_5_clicked()//读者修改密码
{
	newChangeCode = new changecode();
	newChangeCode->show();
}

void borrowerDialog::on_pushButton_6_clicked()//当前借阅！
{
	newCurrentBorrow = new currentborrow();
	newCurrentBorrow->show();
}

void borrowerDialog::on_pushButton_7_clicked()//借阅历史！
{
	newHistoryBorrow = new historyborrow();
	newHistoryBorrow->show();
}
