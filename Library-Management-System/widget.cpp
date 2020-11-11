#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include <regex>
#include "testh.h"

QString ID0 = "空";//账号

Widget::Widget(QWidget* parent) :
	QWidget(parent),
	ui(new Ui::Widget)
{
	ui->setupUi(this);
	//绑定按钮
	connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_clicked));

	//密码输入框设置为密文显示:
	ui->lineEdit_2->setEchoMode(QLineEdit::Password);

	//限制最大输入长度：
	ui->lineEdit->setMaxLength(20);
	ui->lineEdit_2->setMaxLength(15);

	//id固定长度为20位code为1-15位：
	QRegExp rid("[bl0-9]{20,20}");
	QRegExp rcode("[a-zA-Z0-9]{1,15}");

	ui->lineEdit->setValidator(new QRegExpValidator(rid, this));//id
	ui->lineEdit_2->setValidator(new QRegExpValidator(rcode, this));//code
}

Widget::~Widget()
{
	delete ui;
}

void Widget::on_pushButton_clicked()
{
	QString s1 = ui->lineEdit->text();
	QString s2 = ui->lineEdit_2->text();

	std::string str = s1.toStdString();//<-id
	std::string code = s2.toStdString();//<-code

	//类型转换判断：
/*
	s1 = QString::fromStdString(str);
	ui->label_3->setText("转换检测"+s1);
*/

	QString s;//第一个字符
	s = s1.mid(0, 1);

	//获取后19位id号码
	std::string idNum = s1.mid(1, 19).toStdString();
	//id后19位规则
	std::regex ridNum("[0-9]{19,19}");

	if (ui->lineEdit->text() == "")
	{
		QMessageBox m;
		m.setText("⚠警告：账号输入不能为空！");
		m.exec();
	}
	else if (ui->lineEdit_2->text() == "")
	{
		QMessageBox m;
		m.setText("⚠警告：密码输入不能为空！");
		m.exec();
	}
	else if (s != "b" && s != "l")//账号范围等形式不正确，其它形式要求补充？
	{
		QMessageBox m;
		m.setText("⚠警告：输入格式不正确，读者账号以b开头，管理员账号以l开头！");
		m.exec();
	}
	else if (!regex_match(idNum, ridNum))
	{
		QMessageBox m;
		m.setText("⚠警告：账号后19位为数字！");
		m.exec();
	}
	else if (!matchCode(str, code))//密码不匹配
	{
		//调用函数判断密码code是否与账号str相匹配：（）->注意：这里要添加函数进行补充！！！！！！
		//int matchCode(std::string id, std::string code)
		QMessageBox m;
		m.setText("⚠警告：密码错误或账号不存在！");
		m.exec();
	}
	else
	{
		//如果匹配，判断账号用户类型，创建对应的窗口：
		//ui->label_3->setText("转换检测"+s);
		if (s == "b")
		{
			ID0 = s1;
			newBorrowerDialog = new borrowerDialog();
			newBorrowerDialog->show();
		}
		else if (s == "l")
		{
			ID0 = s1;
			newLibrarianDialog = new librariandialog();
			newLibrarianDialog->show();
		}
	}
}

