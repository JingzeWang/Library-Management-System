#include "payfine.h"
#include "ui_payfine.h"
#include "widget.h"
#include <QMessageBox>
#include <regex>
#include "testh.h"
#include "widget.h"

payFine::payFine(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::payFine)
{
	ui->setupUi(this);

	//限制最大输入长度：
	ui->lineEdit->setMaxLength(20);
	ui->lineEdit_2->setMaxLength(8);

	//id固定长度为20位：
	QRegExp rid("[a-z0-9]{20,20}");
	//罚款的格式限制：
	QRegExp rfine("[\\-0-9]{1,8}");

	ui->lineEdit->setValidator(new QRegExpValidator(rid, this));//id
	ui->lineEdit_2->setValidator(new QRegExpValidator(rfine, this));//fine
}

payFine::~payFine()
{
	delete ui;
}

void payFine::on_pushButton_clicked()//确定-缴纳罚款
{
	QString s1 = ui->lineEdit->text();//账号
	QString s2 = ui->lineEdit_2->text();//缴纳钱数

	int money;
	int realMoney = s2.toInt();

	//【修改添加】显示当前欠款或存款数
	//int getFine(string id, int &money) 1：成功 0：不成功
	int result;
	result = getFine(s1.toStdString(), money);

	//id后19位规则
	std::regex ridNum("[0-9]{19,19}");
	//获取后19位id号码
	std::string idNum = s1.mid(1, 19).toStdString();

	if (s1.mid(0, 1) != "b" && s1.mid(0, 1) != "l")
	{
		QMessageBox m;
		m.setText("账号输入错误，应以b或l开头！");
		m.exec();
	}
	else if (!regex_match(idNum, ridNum))
	{
		QMessageBox m;
		m.setText("⚠警告：账号后19位为数字！");
		m.exec();
	}
	else if (!hasId(s1.toStdString()))//【修改添加】不存在该账号 int hasId(string id) 1:存在 0:不存在
	{
		QMessageBox m;
		m.setText("⚠警告：不存在该账号！");
		m.exec();
	}
	else if (result == 0)
	{
		QMessageBox m;
		m.setText("⚠警告：欠款或存款获取失败！");
		m.exec();
	}
	else {
		//【修改添加】对该账号的money进行修改
		//int payMoney(string id, int pay_, int &money)缴纳钱数pay，对money进行修改，获得缴纳后的当前money记录
		//1：成功 0：失败（<0表示账号有存款）
		if(realMoney) payMoney(s1.toStdString(), realMoney, money);

		//参数传递检测：
		//ui->label_5->setText("检测：pay-"+QString::number(realMoney,10)+"money-"+QString::number(money,10));

		if (money > 0)
		{
			ui->label_4->setText("[欠款]" + QString::number(money, 10));
		}
		else
		{
			int yu;
			yu = -money;
			ui->label_4->setText("[余额]" + QString::number(yu, 10));
		}

		QMessageBox m;
		if (realMoney) m.setText("缴纳成功！");
		else m.setText("查询成功！");
		m.exec();
	}
}
