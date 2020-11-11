#include "dialogsearch.h"
#include "ui_dialogsearch.h"
#include "cJSON.h"
#include <QMessageBox>
#include "vector"
#include "testh.h"
#include "QString"

/*
 * 一条书籍的测试数据
{
	"id":"id001",
	"name":"name001",
	"price":100.5,
	"author":"author001",
	"type":"typeA",
	"pageNum":25,
	"wordNum":25000,
	"ISBN":"isbn-001",
	"lock":1,
	"hasBorrowedNum":1,
	"isBorrowed":1,
	"startBorrowTime":"starttime20200128",
	"shouldReturnTime":"shouldbacktime20201212",
	"borrowPersonId":"borrowpersonid001"
}
 */





DialogSearch::DialogSearch(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::DialogSearch)
{
	ui->setupUi(this);
	ui->lineEdit->setMaxLength(20);
	ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}

DialogSearch::~DialogSearch()
{
	delete ui;
}

void DialogSearch::on_pushButton_clicked()//查阅具体书籍
{

	//空

	if (ui->lineEdit->text().isEmpty())
	{
		QMessageBox::information(this, "提示", "请输入查找内容");
		return;
	}



	//查询书籍
	std::string s1 = ui->lineEdit->text().toStdString();//获取name
	std::vector<std::string> idNums;
	int ifsuccessful = searchBookByName(s1, idNums);

	ui->tableWidget->setRowCount(idNums.size());

	if (ifsuccessful == 0)
	{
		QMessageBox::information(this, "提示", "没有查询到相关结果");
		return;
	}
	else
	{
		for (int i = 0; i < idNums.size(); i++)
		{
			//QMessageBox::information(this,"提示","start");
			std::string _ISBN, _startBorrowTime, _shouldReturnTime, _name, _type, _author;
			int _hasBorrowedNum, _isBorrowed, _price, _pageNum, _wordNum;
			searchBookById(idNums[i], _ISBN, _hasBorrowedNum, _isBorrowed, _startBorrowTime, _shouldReturnTime, _name, _price, _type, _author, _pageNum, _wordNum);

			std::string isborrowed_t = _isBorrowed ? "已借出" : "可借阅";

			QString s4 = QString::fromStdString(idNums[i]);
			QString s5 = QString::fromStdString(_name);
			QString s6 = QString::fromStdString(isborrowed_t);
			QString s7 = QString::fromStdString(_author);
			//int rowcount = ui->tableWidget->rowCount();

			ui->tableWidget->setItem(i, 0, new QTableWidgetItem(s4));
			ui->tableWidget->setItem(i, 1, new QTableWidgetItem(s5));
			ui->tableWidget->setItem(i, 2, new QTableWidgetItem(s6));
			ui->tableWidget->setItem(i, 3, new QTableWidgetItem(s7));
			ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
		}
	}


	//json实现
	/*

	//以message为测试用例，假设message就是返回的json
	char *message =
	"{\
		\"id\":\"id001\",\
		\"name\":\"name001\",\
		\"price\":100.5,\
		\"author\":\"author001\",\
		\"type\":\"typeA\",\
		\"pageNum\":25,\
		\"wordNum\":25000,\
		\"ISBN\":\"isbn-001\",\
		\"lock\":1,\
		\"hasBorrowedNum\":1,\
		\"isBorrowed\":1,\
		\"startBorrowTime\":\"starttime20200128\",\
		\"shouldReturnTime\":\"shouldbacktime20201212\",\
		\"borrowPersonId\":\"borrowpersonid001\"\
	}";

	//设计用于展示的指针
	cJSON* cjson_test = NULL;
	cJSON* _id1 = NULL;
	cJSON* _name1 = NULL;
	cJSON* _ISBN = NULL;
	cJSON* _author = NULL;

	cJSON* _price = NULL;
	cJSON* _type = NULL;
	cJSON* _pageNum = NULL;
	cJSON* _wordNum = NULL;
	cJSON* _lock = NULL;
	cJSON* _hasBorroeedNum = NULL;
	cJSON* _isBorrowed = NULL;
	cJSON* _startBorrowTime = NULL;
	cJSON* _shouldReturnTime = NULL;
	cJSON* _borrowPersonId = NULL;


	//解析json数据
	cjson_test = cJSON_Parse(message);
	if(cjson_test == NULL)
	{
		QMessageBox m;
		m.setText("没导过来，临时cjson数据"
				  "还是空的");
		m.exec();
	}
	_id1 = cJSON_GetObjectItem(cjson_test,"id");
	_name1 = cJSON_GetObjectItem(cjson_test,"name");
	_ISBN = cJSON_GetObjectItem(cjson_test,"ISBN");
	_author = cJSON_GetObjectItem(cjson_test,"author");
	char* s3 = cJSON_Print(_id1);
	char* s4 = cJSON_Print(_name1);
	char* s5 = cJSON_Print(_ISBN);
	char* s6 = cJSON_Print(_author);
	//显示书籍具体信息
	ui->tableWidget->setItem(0,0,new QTableWidgetItem(s3));
	ui->tableWidget->setItem(0,1,new QTableWidgetItem(s4));
	ui->tableWidget->setItem(0,2,new QTableWidgetItem(s5));
	ui->tableWidget->setItem(0,3,new QTableWidgetItem(s6));




	cJSON_Delete(cjson_test);
	*/
}
