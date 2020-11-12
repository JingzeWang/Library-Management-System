#include "librariandialog.h"
#include "ui_librariandialog.h"
#include "testh.h"
#include "QMessageBox"

librariandialog::librariandialog(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::librariandialog)
{
	ui->setupUi(this);


	connect(ui->pushButton_1, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_1_clicked));
	connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_2_clicked));
	connect(ui->pushButton_8, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_8_clicked));

}

librariandialog::~librariandialog()
{
	delete ui;
}


void librariandialog::on_pushButton_1_clicked()//添加书籍
{
	newlibrarianadd = new librarianAddBook;
	newlibrarianadd->show();
}

void librariandialog::on_pushButton_2_clicked()//删除书籍
{
	newlibriandelete = new librariandeletebook;
	newlibriandelete->show();
}

void librariandialog::on_pushButton_7_clicked()//缴纳罚款
{
	newPayFine = new payFine();
	newPayFine->show();
}

void librariandialog::on_pushButton_6_clicked()//修改密码
{
	newChangeCodeById = new changeCodeById();
	newChangeCodeById->show();
}

void librariandialog::on_pushButton_5_clicked()//查询读者
{
	n_searchBorrower = new searchBorrower();
	n_searchBorrower->show();
}

void librariandialog::on_pushButton_3_clicked()//添加读者
{
	n_addBorrower = new addBorrower();
	n_addBorrower->show();
}

void librariandialog::on_pushButton_4_clicked()//删除读者
{
	n_deleteBorrower = new deleteBorrower();
	n_deleteBorrower->show();
}

void librariandialog::on_pushButton_9_clicked()//查询书籍
{

}
void librariandialog::on_pushButton_8_clicked()
{
	newlibrianmodify = new librarianmodifybook;
	newlibrianmodify->show();
}
