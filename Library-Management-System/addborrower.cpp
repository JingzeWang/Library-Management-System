#include "addborrower.h"
#include "ui_addborrower.h"
#include <QDebug>
#include <QRegExpValidator>

addBorrower::addBorrower(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::addBorrower)
{
	ui->setupUi(this);
	ui->lineEdit_2->setMaxLength(15);
	ui->lineEdit_3->setMaxLength(15);//限制长度
	//QRegExp name("[a-z A-Z 0-9]{1,15}");
	QRegExp code("[a-z A-Z 0-9]{1,15}");
	QRegExp age("[0-9]{3}");
	QRegExp gender("[MmWw]{1}");//限制输入
	//ui->lineEdit_2->setValidator(new QRegExpValidator(name, this));
	ui->lineEdit_3->setValidator(new QRegExpValidator(code, this));
	ui->lineEdit_4->setValidator(new QRegExpValidator(age, this));
	ui->lineEdit_5->setValidator(new QRegExpValidator(gender, this));
	setWindowTitle("添加借阅者");
}

addBorrower::~addBorrower()
{
	delete ui;
}

void addBorrower::on_okButton_clicked()
{
	QString addBorrowerName = ui->lineEdit_2->text();
	QString addBorrowerAge = ui->lineEdit_4->text();
	QString addBorrowerGender = ui->lineEdit_5->text();
	QString addBorrowerCode = ui->lineEdit_3->text();
	theAge = atoi(addBorrowerAge.toStdString().c_str());//int
	//判断
	if (addBorrowerName.isEmpty() == 1 || addBorrowerAge.isEmpty() == 1 || addBorrowerGender.isEmpty() == 1 || addBorrowerCode.isEmpty() == 1)
	{
		QMessageBox::warning(NULL, "warning", "输入不能为空");
	}
	else if (theAge > 100 || theAge <= 0)
	{
		QMessageBox::warning(NULL, "warning", "年龄限制为[1,100]");
	}

	else
	{
		//类型转换Q->C
		theName = addBorrowerName.toStdString();
		theCode = addBorrowerCode.toStdString();
		//theAge = atoi(addBorrowerAge.toStdString().c_str());//int
		strAge = addBorrowerAge.toStdString();
		strGender = addBorrowerGender.toStdString();
		if (addBorrowerGender == "m" || addBorrowerGender == "M") theGender = 'm';
		else theGender = 'w';
		//添加借阅者，返回一个id
		//addPeople (theName, theAge, theGender, theCode);
		if (addPeople(theId, theName, theAge, theGender, theCode) == 1)
		{
			QString qsId = QString::fromStdString(theId);
			QMessageBox::information(this, tr("information"), tr("添加成功!\t\nId:%1").arg(qsId));
		}
		else
			QMessageBox::information(NULL, "information", "添加失败！");
	}
}

void addBorrower::on_pushButton_2_clicked()
{
	//取消
	this->close();
}
