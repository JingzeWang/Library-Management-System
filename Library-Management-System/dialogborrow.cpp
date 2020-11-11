#include "dialogborrow.h"
#include "ui_dialogborrow.h"
#include "QMessageBox"
#include "cJSON.h"
#include "QDateTime"
#include "testh.h"
#include "timedeal.h"
#include "QDebug"
#include "widget.h"


DialogBorrow::DialogBorrow(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::DialogBorrow)
{
	ui->setupUi(this);
	ui->lineEdit->setMaxLength(20);
	QRegExp rx2("[a-zA-Z0-9\-]{1,20}");
	ui->lineEdit->setValidator(new QRegExpValidator(rx2, this));
	ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

	//connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_2_clicked()));
}


DialogBorrow::~DialogBorrow()
{
	delete ui;
}

void DialogBorrow::on_pushButton_clicked()//点击确定按钮查询书籍信息
{
	/*
	bool ok;
	QString tempStr;
	QString valueStr=ui->lineEdit->text();
	int valueInt=valueStr.toInt(&ok);
	*/
	//空
	if (ui->lineEdit->text().isEmpty())
	{
		QMessageBox::information(this, "提示", "请输入查找id");
		return;
	}
	else {
		//QMessageBox::information(this, "提示", "请核对你要借阅的书籍信息，如果是，请点击借阅按钮，否则，请重新输入id进行查找。");
	}


	//查询书籍
	std::string s1 = ui->lineEdit->text().toStdString();//获取

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
		if (_isBorrowed == 1)isborrowed_t = "已借阅";
		else isborrowed_t = "可借阅";


		//注意这里要设置不可更改表中内容

		QString s4 = QString::fromStdString(s1);
		QString s5 = QString::fromStdString(_name);
		QString s6 = QString::fromStdString(isborrowed_t);
		QString s7 = QString::fromStdString(_ISBN);

		ui->tableWidget->setItem(0, 0, new QTableWidgetItem(s4));

		ui->tableWidget->setItem(0, 1, new QTableWidgetItem(s5));
		ui->tableWidget->setItem(0, 2, new QTableWidgetItem(s6));
		ui->tableWidget->setItem(0, 3, new QTableWidgetItem(s7));
		ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
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
		m.setText("没导过来，临时cjson数据还是空的");
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
	//ui->label_2->setText(s3);
}

void DialogBorrow::on_pushButton_2_clicked()
{

	//QString s1 = QString::fromStdString(_id);

	if (ui->tableWidget->item(0, 0) == NULL || (ui->tableWidget->item(0, 0) && ui->tableWidget->item(0, 0)->text() == tr("")))
	{
		QMessageBox::information(this, "提示", "请选择借阅书籍后再点击借阅");
		return;
	}
	else
	{

		std::string _id = ui->tableWidget->item(0, 0)->text().toStdString();

		std::string _ISBN, _startBorrowTime, _shouldReturnTime, _name, _type, _author;
		int _hasBorrowedNum, _isBorrowed, _price, _pageNum, _wordNum;

		int ifsucc = searchBookById(_id, _ISBN, _hasBorrowedNum, _isBorrowed, _startBorrowTime, _shouldReturnTime, _name, _price, _type, _author, _pageNum, _wordNum);
		if (ifsucc == 0)
		{
			QMessageBox::information(this, "提示", "未查询成功，请重新查询");
			return;
		}

		_hasBorrowedNum++;
		if (_isBorrowed == 1)
		{
			QMessageBox::information(this, "提示", "书被借阅不可操作");
			return;
		}
		_isBorrowed = 1;

		//当前时间以及归还时间
		QDateTime dt;
		QTime time;
		QDate date;
		dt.setTime(time.currentTime());
		dt.setDate(date.currentDate());
		QString currentDate = dt.toString("yyyy-MM-dd");
		_startBorrowTime = currentDate.toStdString();
		comput(_startBorrowTime, _shouldReturnTime);
		/*
		QString s1 = QString::fromStdString(_startBorrowTime);
		qDebug() << s1;
		QString s2 = QString::fromStdString(_shouldReturnTime);
		qDebug() << s2;
		*/



		//_shouldReturnTime = "test should borrowtime";



		//调用人类相关接口，写进借阅记录里，如果已经借阅满了直接打断后续操作
		//这里需要补充一下登录状态，我们暂定为userid
		std::string userid = ID0.toStdString();


		int ifborrow = addHistory(userid, _id, 1);
		if (ifborrow == 2)
		{
			QMessageBox::information(this, "提示", "你已经借阅满10本，不可继续借阅");
			return;
		}
		else if (ifborrow == 1)
		{
			modifyBook(_id, _ISBN, userid, _hasBorrowedNum, _isBorrowed, _startBorrowTime, _shouldReturnTime);
			QMessageBox::information(this, "提示", "借阅成功！");
		}
		else
		{
			QMessageBox::information(this, "提示", "后端异常");
		}
	}
}
