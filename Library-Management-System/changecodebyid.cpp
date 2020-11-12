#include "changecodebyid.h"
#include "ui_changecodebyid.h"
#include <QMessageBox>
#include "widget.h"
#include "testh.h"
#include <regex>

changeCodeById::changeCodeById(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::changeCodeById)
{
	ui->setupUi(this);
	//密码输入框设置为密文显示:
	ui->lineEdit_2->setEchoMode(QLineEdit::Password);
	ui->lineEdit_3->setEchoMode(QLineEdit::Password);
	//ui->lineEdit->setEchoMode(QLineEdit::Password);

	//限制最大输入长度：
	//ui->lineEdit->setMaxLength(15);
	ui->lineEdit_2->setMaxLength(15);
	ui->lineEdit_3->setMaxLength(15);
	ui->lineEdit_4->setMaxLength(20);

	QRegExp rid("[bl0-9]{20,20}");
	QRegExp rcode("[a-zA-Z0-9]{1,15}");

	//ui->lineEdit->setValidator(new QRegExpValidator(rcode, this));//oldCode
	ui->lineEdit_2->setValidator(new QRegExpValidator(rcode, this));//newCode
	ui->lineEdit_3->setValidator(new QRegExpValidator(rcode, this));//confirmCode
	ui->lineEdit_4->setValidator(new QRegExpValidator(rid, this));//id
}

changeCodeById::~changeCodeById()
{
	delete ui;
}

void changeCodeById::on_pushButton_clicked()//管理员通过账号修改密码
{
	//QString s1 = ui->lineEdit->text();//旧密码
	QString s2 = ui->lineEdit_2->text();//新密码
	QString s3 = ui->lineEdit_3->text();//确定密码
	QString s4 = ui->lineEdit_4->text();//账号

	QString s;//第一个字符
	s = s4.mid(0, 1);

	//获取后19位id号码
	std::string idNum = s4.mid(1, 19).toStdString();
	//id后19位规则
	std::regex ridNum("[0-9]{19,19}");

	if (s4 == "")
	{
		QMessageBox m;
		m.setText("⚠警告：请输入账号！");
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
	else if (!hasId(s4.toStdString()))//【修改添加】不存在该账号 int hasId(string id) 1:存在 0:不存在
	{
		QMessageBox m;
		m.setText("⚠警告：不存在该账号！");
		m.exec();
	}
	/*else if (s1 == "")
	{
		QMessageBox m;
		m.setText("⚠警告：请输入旧密码！");
		m.exec();
	}*/
	else if (s2 == "")
	{
		QMessageBox m;
		m.setText("⚠警告：请输入新密码！");
		m.exec();
	}
	else if (s3 == "")
	{
		QMessageBox m;
		m.setText("⚠警告：请输入确认密码！");
		m.exec();
	}
	else if (s2 != s3)
	{
		QMessageBox m;
		m.setText("⚠警告：修改失败，两次密码不一致！");
		m.exec();
	}
	else
	{
		QMessageBox m;
		m.setText("⚠警告：修改成功！");
		m.exec();
		//【修改添加】匹配成功则修改为新密码？？？
		//int changeCode(string id, string code_)
		changeCode(s4.toStdString(), s3.toStdString());
	}
}
