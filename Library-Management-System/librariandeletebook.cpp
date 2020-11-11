#include "librariandeletebook.h"
#include "ui_librariandeletebook.h"
#include "QMessageBox"
#include "testh.h"


librariandeletebook::librariandeletebook(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::librariandeletebook)
{
	ui->setupUi(this);
	ui->lineEdit_4->setMaxLength(20);
	QRegExp rx2("[a-zA-Z0-9\-]{1,20}");
	ui->lineEdit_4->setValidator(new QRegExpValidator(rx2, this));
	ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
	connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(pushButton_2_clicked()));
}


librariandeletebook::~librariandeletebook()
{
	delete ui;
}


void librariandeletebook::on_pushButton_clicked()
{
	if (ui->lineEdit_4->text().isEmpty())
	{
		QMessageBox::information(this, "提示", "请输入查找id");
		return;
	}


	//查询书籍
	std::string s1 = ui->lineEdit_4->text().toStdString();//获取

	std::string _ISBN, _startBorrowTime, _shouldReturnTime, _name, _type, _author;
	int _hasBorrowedNum, _isBorrowed, _price, _pageNum, _wordNum;
	int ifsuccessful = searchBookById(s1, _ISBN, _hasBorrowedNum, _isBorrowed, _startBorrowTime, _shouldReturnTime, _name, _price, _type, _author, _pageNum, _wordNum);
	std::string isborrowed_t;

	if (ifsuccessful == 0)
	{
		QMessageBox::information(this, "提示", "无此结果");
		return;
	}
	else
	{
		if (_isBorrowed == 1)isborrowed_t = "被借阅中";
		else isborrowed_t = "未被借阅";

		QMessageBox::information(this, "提示", "请核对你要删除的的书籍信息，如果是，请点击删除按钮，否则，请重新输入id进行查找。");




		//注意这里要设置不可更改表中内容

		QString s4 = QString::fromStdString(s1);
		QString s5 = QString::fromStdString(_name);
		QString s6 = QString::fromStdString(isborrowed_t);
		QString s7 = QString::fromStdString(_author);

		ui->tableWidget->setItem(0, 0, new QTableWidgetItem(s4));
		ui->tableWidget->setItem(0, 1, new QTableWidgetItem(s5));
		ui->tableWidget->setItem(0, 2, new QTableWidgetItem(s6));
		ui->tableWidget->setItem(0, 3, new QTableWidgetItem(s7));

		ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	}
}

void librariandeletebook::on_pushButton_2_clicked()
{
	if (ui->tableWidget->item(0, 0) == NULL || (ui->tableWidget->item(0, 0) && ui->tableWidget->item(0, 0)->text() == tr("")))
	{
		QMessageBox::information(this, "提示", "请找到你的书籍后再选择归还");
		return;
	}
	std::string _id = ui->tableWidget->item(0, 0)->text().toStdString();
	QString s1 = QString::fromStdString(_id);
	std::string _ISBN, _startBorrowTime, _shouldReturnTime, _name, _type, _author;
	int _hasBorrowedNum, _isBorrowed, _price, _pageNum, _wordNum;


	searchBookById(_id, _ISBN, _hasBorrowedNum, _isBorrowed, _startBorrowTime, _shouldReturnTime, _name, _price, _type, _author, _pageNum, _wordNum);

	if (_isBorrowed == 1)
	{
		QMessageBox::information(this, "提示", "书处于借阅状态无法删除");
		return;
	}
	else
	{
		deleteBook(_id);
		QMessageBox::information(this, "提示", "delete successfully");
		ui->tableWidget->clearContents();
	}
}
