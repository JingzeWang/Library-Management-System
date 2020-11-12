#include "librarianmodifybook.h"
#include "ui_librarianmodifybook.h"
#include "QMessageBox"
#include "testh.h"
#include "librariandialog.h"

librarianmodifybook::librarianmodifybook(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::librarianmodifybook)
{
	ui->setupUi(this);
	ui->lineEdit->setMaxLength(20);
	ui->lineEdit_4->setMaxLength(20);
	ui->lineEdit_2->setMaxLength(20);
	ui->lineEdit_5->setMaxLength(20);
	ui->lineEdit_6->setMaxLength(20);
	ui->lineEdit_7->setMaxLength(20);
	ui->lineEdit_8->setMaxLength(20);
	QRegExp rx2("[a-zA-Z0-9-]{1,20}");
	ui->lineEdit->setValidator(new QRegExpValidator(rx2, this));
	QRegExp rx("[0-9]{1,20}");
	ui->lineEdit_5->setValidator(new QRegExpValidator(rx, this));
	ui->lineEdit_7->setValidator(new QRegExpValidator(rx, this));
	ui->lineEdit_8->setValidator(new QRegExpValidator(rx, this));

}

librarianmodifybook::~librarianmodifybook()
{
	delete ui;
}
void librarianmodifybook::on_pushButton_clicked()
{


	if (ui->lineEdit_2->text().isEmpty())
	{
		QMessageBox::information(this, "提示", "请输入isbn");
		return;
	}

	std::string _ISBN = ui->lineEdit_2->text().toStdString();
	int ifisbn_exist = exist_ISBN(_ISBN);
	if (ifisbn_exist == 1)
	{
		QMessageBox::information(this, "提示", "请修改以下信息");
		std::string _startBorrowTime, _shouldReturnTime, _name, _type, _author;
		int _hasBorrowedNum, _isBorrowed, _price, _pageNum, _wordNum;
		searchBookByISBN(_ISBN, _name, _price, _type, _author, _pageNum, _wordNum);
		QString s3 = QString::fromStdString(_name);
		QString s4 = QString::fromStdString(_author);
		QString s5 = QString::number(_price, 10);
		QString s6 = QString::fromStdString(_type);
		QString s7 = QString::number(_wordNum, 10);
		QString s8 = QString::number(_pageNum, 10);
		QString s9 = QString::fromStdString(_ISBN);

		ui->lineEdit->setText(s3);
		ui->lineEdit_4->setText(s4);
		ui->lineEdit_5->setText(s5);
		ui->lineEdit_6->setText(s6);
		ui->lineEdit_7->setText(s7);
		ui->lineEdit_8->setText(s8);
		ui->label_9->setText(s9);
	}
	else
	{
		QMessageBox::information(this, "提示", "该isbn不存在");
		return;

	}
}





void librarianmodifybook::on_pushButton_2_clicked()
{
	std::string _name, _author, _type, _ISBN;
	int _pageNum, _wordNum, _price;
	if (ui->lineEdit->text().isEmpty() || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty() || ui->lineEdit_6->text().isEmpty() || ui->lineEdit_7->text().isEmpty() || ui->lineEdit_8->text().isEmpty())
	{
		QMessageBox::information(this, "提示", "书籍信息未填写完整");
		return;
	}
	bool flag = true;
	_name = ui->lineEdit->text().toStdString();
	_author = ui->lineEdit_4->text().toStdString();
	_price = ui->lineEdit_5->text().toInt(&flag);
	if (!flag) {
		QMessageBox::information(this, "提示", "价格输入超出限制，请检查!");
		return;
	}
	_type = ui->lineEdit_6->text().toStdString();
	_wordNum = ui->lineEdit_7->text().toInt(&flag);
	if (!flag) {
		QMessageBox::information(this, "提示", "字数输入超出限制，请检查!");
		return;
	}
	_pageNum = ui->lineEdit_8->text().toInt(&flag);
	if (!flag) {
		QMessageBox::information(this, "提示", "页数输入超出限制，请检查!");
		return;
	}
	_ISBN = ui->label_9->text().toStdString();

	int ifmodify = modifyBookinfo(_ISBN, _name, _price, _type, _author, _pageNum, _wordNum);
	if (ifmodify == 1)
	{
		QMessageBox::information(this, "提示", "修改成功");
		return;
	}
	else
	{
		QMessageBox::information(this, "提示", "修改失败");
	}

}
