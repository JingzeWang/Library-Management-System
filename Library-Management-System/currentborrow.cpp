#include "currentborrow.h"
#include "ui_currentborrow.h"
#include "widget.h"
#include <QMessageBox>
#include "testh.h"

currentborrow::currentborrow(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::currentborrow)
{
	ui->setupUi(this);
	//ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
	
	//补充：通过id导入数据库里的当前借阅list？？？

	/*
	ui->listWidget->insertItem(0,tr("序号   ID   书名   借阅时间   到期时间"));
	std::list<Book>::iterator itb;
	std::list<Book> listb;
	Book book1=Book(12358, "bookName1", 1.234, "author1","A",957,76593,"isbn1",0,2,1, "startBorrowTime1","shouldReturnTime1","borrowPersonId1");
	listb.push_back(book1);

	int i=1;
	for(itb=listb.begin();itb!=listb.end();itb++)
	{
		//tr("显示")
		QString showOut=QString::fromStdString((*itb).name)+"   "+QString::fromStdString((*itb).startBorrowTime)+"   "+QString::fromStdString((*itb).shouldReturnTime);
		ui->listWidget->insertItem(i++,QString::number(i,10)+tr(":   ")+showOut);
		//+(*itb).id+(*itb).name+(*itb).startBorrowTime+(*itb).shouldReturnTime
	}
	*/

	//vector使用检测：

	/*
	idNums.push_back("id1");
	idNums.push_back("id2");
	*/

	std::vector<std::string> idNums;
	int result;

	//修改添加int searchCurrent(string id, vector<string>&idNums)
	result = searchCurrent(ID0.toStdString(), idNums);
	if (result == 0)
	{
		QMessageBox m;
		m.setText("⚠警告：当前借阅接口传递失败！");
		m.exec();
	}
	else
	{
		//先确定列数行数
		ui->tableWidget->setColumnCount(4);
		ui->tableWidget->setRowCount(idNums.size());

		ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "ID" << "书名" << "借阅时间" << "到期时间");

		ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);  //整行选中的方式
		ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);   //禁止修改
		ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);  //设置为可以选中单个
		ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
		ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);

		int n = 0;
		for (int i = 0; i < idNums.size(); i++)
		{
			//查找一本书信息int searchBookById（std::string _id, std::string &_ISBN, int &_lock, int &_hasBorrowedNum,int &_isBorrowed,
			//std::string &_startBorrowTime,std::string &_shouldReturnTime,std::string &_name,int &_price,
			//std::string &_type,std::string &_author, int &_pageNum, int &_wordNum）
			std::string name, borrowTime, returnTime;
			int hasBorrowedNum, isBorrowed, pageNum, wordNum, price;
			std::string isbn, type, author;
			int result;
			result = searchBookById(idNums[i], isbn, hasBorrowedNum, isBorrowed,
				borrowTime, returnTime, name, price,
				type, author, pageNum, wordNum);
			if (result == 0)
			{
				QMessageBox m;
				m.setText("⚠警告：该条借阅记录读取失败！");
				m.exec();
			}
			else
			{
				//ID:
				ui->tableWidget->setItem(n, 0, new QTableWidgetItem(QString::fromStdString(idNums[i])));
				//书名：
				ui->tableWidget->setItem(n, 1, new QTableWidgetItem(QString::fromStdString(name)));
				//借阅时间：
				ui->tableWidget->setItem(n, 2, new QTableWidgetItem(QString::fromStdString(borrowTime)));
				//到期时间：
				ui->tableWidget->setItem(n, 3, new QTableWidgetItem(QString::fromStdString(returnTime)));
				n++;
			}
		}
	}

	//使用时idNums[n]即可

}

currentborrow::~currentborrow()
{
	delete ui;
}
