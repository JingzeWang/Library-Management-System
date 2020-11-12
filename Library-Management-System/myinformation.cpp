#include "myinformation.h"
#include "ui_myinformation.h"
#include "widget.h"
#include <QMessageBox>
#include "testh.h"

MyInformation::MyInformation(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::MyInformation)
{
	ui->setupUi(this);

	//确定修改按钮设置为只读
	ui->pushButton_2->setEnabled(false);

	//输入框的背景文字提示
	ui->lineEdit->setPlaceholderText("最大15位");//姓名
	ui->lineEdit_2->setPlaceholderText("[1,100]的整数");//年龄
	ui->lineEdit_3->setPlaceholderText("m为男，w为女");//性别

	//限制最大输入长度：
	ui->lineEdit->setMaxLength(15);
	ui->lineEdit_2->setMaxLength(3);
	ui->lineEdit_3->setMaxLength(1);

	//设置输入内容的格式限制：
	//QRegExp rname("[a-zA-Z0-9]{1,15}");
	QRegExp rage("[0-9]{1,3}");//还需要判断是否为空吗？？？？？？
	QRegExp rgender("[mw]{1,1}");//??????????

	//ui->lineEdit->setValidator(new QRegExpValidator(rname, this));//name
	ui->lineEdit_2->setValidator(new QRegExpValidator(rage, this));//age
	ui->lineEdit_3->setValidator(new QRegExpValidator(rgender, this));//gender

	ui->label_2->setText(ID0);//显示ID账号（为全局变量）

	std::string name;
	int age;
	char gender;
	int money;
	// <需要通过ID找到此借阅者>  并且得到并补充据此ID所得的其相关的所有数据：
	//int searchPeople(string id, string &name, int &age, char &gender, int &money)

	if (!searchPeople(ID0.toStdString(), name, age, gender, money))
	{
		QMessageBox m;
		m.setText("⚠警告：不存在该用户！");
		m.exec();
	}
	else
	{
		//string转换为QString:
		QString nameTemp = QString::fromStdString(name);
		//int转换为QString:
		QString ageTemp = QString::number(age, 10);
		QString moneyTemp = QString::number(-money, 10);

		//float转换为QString:
		//float realFineNum=(float)money/(float)100;
		//QString fineMoneyTemp=QString::number(realFineNum,'f',k);
		//QString fineMoneyTemp=QString("%1").arg(fineMoney);

		ui->lineEdit->setText(nameTemp);
		ui->lineEdit->setReadOnly(true);
		ui->lineEdit_2->setText(ageTemp);
		ui->lineEdit_2->setReadOnly(true);
		if (gender == 'w')
		{
			ui->lineEdit_3->setText("女");
			ui->lineEdit_3->setReadOnly(true);
		}
		else if (gender == 'm')
		{
			ui->lineEdit_3->setText("男");
			ui->lineEdit_3->setReadOnly(true);
		}
		ui->label_11->setText(moneyTemp);
	}
}

MyInformation::~MyInformation()
{
	delete ui;
}

void MyInformation::on_pushButton_clicked()//修改信息
{
	//变成可修改状态：
	ui->lineEdit->setReadOnly(false);
	ui->lineEdit_2->setReadOnly(false);
	ui->lineEdit_3->setReadOnly(false);
	ui->pushButton_2->setEnabled(true);
}

void MyInformation::on_pushButton_2_clicked()//确认修改
{
	int flag = 0;
	std::string name;
	int age;
	char gender;

	QString s1 = ui->lineEdit->text();
	QString s2 = ui->lineEdit_2->text();
	QString s3 = ui->lineEdit_3->text();
	name = s1.toStdString();

	age = s2.toInt();
	std::string genderTemp = s3.toStdString();

	if (s1 == "")
	{
		QMessageBox m;
		m.setText("⚠警告：姓名输入不能为空！");
		flag = 1;
		m.exec();
	}
	else if (s2 == "")
	{
		QMessageBox m;
		m.setText("⚠警告：年龄输入不能为空！");
		flag = 1;
		m.exec();
	}
	else if (s3 == "")
	{
		QMessageBox m;
		m.setText("⚠警告：性别输入不能为空！");
		flag = 1;
		m.exec();
	}
	else if (age < 1 || age>100)//age∈[1,100]条件判断：
	{
		QMessageBox m;
		m.setText("⚠警告：年龄输入不正确，[1,100]的整数！");
		flag = 1;
		m.exec();
	}
	//gender为w或m判断：
	else if (genderTemp == "w")
	{
		gender = 'w';
	}
	else if (genderTemp == "m")
	{
		gender = 'm';
	}
	else
	{
		QMessageBox m;
		m.setText("⚠警告：性别形式不正确，m为男，w为女！");
		flag = 1;
		m.exec();
	}
	// <需要通过ID找到此借阅者> 根据ID修改其相关的信息？？？？？？
	if (!hasId(ID0.toStdString()))
	{
		QMessageBox m;
		m.setText("⚠警告：不存在该ID借阅者！");
		m.exec();
	}
	else
	{
		//修改信息：int modifyPeople(string id, string name_, int age_, char gender_)
		if (!modifyPeople(ID0.toStdString(), name, age, gender))
		{
			QMessageBox m;
			m.setText("⚠警告：修改借阅者信息失败！");
			m.exec();
		}

		/*
		//为了检测转换为QString:
		//string转换为QString:
		QString nameTemp1=QString::fromStdString(name);
		//int转换为QString:
		QString ageTemp1=QString::number(age,10);
		//char转换为QString:
		QString genderTemp1;
		if(gender=='w')
		{
			genderTemp1="w";
		}
		else if(gender=='m')
		{
			genderTemp1="m";
		}
		//label_11
		ui->label_4->setText("姓名"+nameTemp1+"年龄"+ageTemp1+"性别"+genderTemp1+"欠款"+ui->label_11->text());
		*/

		if (flag == 0)
		{
			if (gender == 'w') {
				ui->lineEdit_3->setText("女");
			}
			else {
				ui->lineEdit_3->setText("男");
			}
			QMessageBox m;
			m.setText("修改成功");
			m.exec();
			ui->pushButton_2->setEnabled(false);
			//修改完成后变成只读状态：
			ui->lineEdit->setReadOnly(true);
			ui->lineEdit_2->setReadOnly(true);
			ui->lineEdit_3->setReadOnly(true);
		}
	}
}
