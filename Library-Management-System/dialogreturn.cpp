#include "dialogreturn.h"
#include "ui_dialogreturn.h"
#include "cJSON.h"
#include "QMessageBox"
#include "testh.h"
#include "QDateTime"
#include "string"
#include "widget.h"

DialogReturn::DialogReturn(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::DialogReturn)
{
	ui->setupUi(this);
	ui->lineEdit->setMaxLength(20);
	QRegExp rx2("[a-zA-Z0-9\-]{1,20}");
	ui->lineEdit->setValidator(new QRegExpValidator(rx2, this));
	ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
	//connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_2_clicked()));
}

DialogReturn::~DialogReturn()
{
	delete ui;
}

void DialogReturn::on_pushButton_clicked()//归还前的查询
{
	//空
	if (ui->lineEdit->text().isEmpty())
	{
		QMessageBox::information(this, "提示", "请输入查找id");
		return;
	}
	else {
		//QMessageBox::information(this, "提示", "请核对你要归还的书籍信息，如果是，请点击归还按钮，否则，请重新输入id进行查找。");
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
		if (_isBorrowed == 1)isborrowed_t = "被借阅中";
		else isborrowed_t = "未被借阅";


		//注意这里要设置不可更改表中内容


		QString s4 = QString::fromStdString(s1);
		QString s5 = QString::fromStdString(_name);
		QString s6 = QString::fromStdString(isborrowed_t);
		QString s7 = QString::fromStdString(_author);

		ui->tableWidget->setItem(0, 0, new QTableWidgetItem(s4));
		ui->tableWidget->setItem(0, 1, new QTableWidgetItem(s5));
		ui->tableWidget->setItem(0, 2, new QTableWidgetItem(s7));
		ui->tableWidget->setItem(0, 3, new QTableWidgetItem(s6));
		ui->tableWidget->setItem(0, 4, new QTableWidgetItem(ID0));
		ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	}

	/*
	//查询书籍
	QString s1=ui->lineEdit->text();//获取手动输入的 isbn
	//调用接口找到message
	QMessageBox m1;
	m1.setText("接口调用成功，获取到message");
	m1.exec();




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


	ui->label_2->setText("归还。。。"+tempStr.setNum(valueInt));

	*/
}
void DialogReturn::on_pushButton_2_clicked()//归还动作
{

	//QString s1 = QString::fromStdString(_id);

	if (ui->tableWidget->item(0, 0) == NULL || (ui->tableWidget->item(0, 0) && ui->tableWidget->item(0, 0)->text() == tr("")))
	{
		QMessageBox::information(this, "提示", "请找到你的书籍后再选择归还");
		return;
	}
	else
	{
		std::string _id = ui->tableWidget->item(0, 0)->text().toStdString();

		std::string _ISBN, _startBorrowTime, _shouldReturnTime, _name, _type, _author, _borrowerID;
		int _hasBorrowedNum, _isBorrowed, _price, _pageNum, _wordNum;

		searchBookById(_id, _ISBN, _hasBorrowedNum, _isBorrowed, _startBorrowTime, _shouldReturnTime, _name, _price, _type, _author, _pageNum, _wordNum);

		if (_isBorrowed == 0)
		{
			QMessageBox::information(this, "提示", "书已经归还");
		}

		_isBorrowed = 0;


		//并且如果当前时间超出应当归还时间的话，将price+进人类的罚款数里
		QDateTime dt;
		QTime time;
		QDate date;
		dt.setTime(time.currentTime());
		dt.setDate(date.currentDate());
		QString currentDate = dt.toString("yyyy-MM-dd");
		std::string scur = currentDate.toStdString();

		if (scur.compare(_shouldReturnTime))
		{
			int money;
			payMoney(_id, _price * (-1), money);
		}

		_startBorrowTime = "";
		_shouldReturnTime = "";
		_isBorrowed = 0;
		++_hasBorrowedNum;

		//假设一个全局变量
		std::string userid = ID0.toStdString();

		//调用人类相关接口修改借阅记录
		//这里需要补充一下登录状态，我们暂定为userid
		int ifborrowid = getBorrowerID(_id, _borrowerID);
		if (ifborrowid == 0)
		{
			QMessageBox::information(this, "提示", "这本书没有被借阅");
			return;
		}
		else
		{
			if (userid != _borrowerID)
			{
				QMessageBox::information(this, "提示", "这本书不是你借阅的");
				return;
			}


			int ifborrow = addHistory(userid, _id, 0);


			if (ifborrow == 1)
			{
				modifyBook(_id, _ISBN, "0", _hasBorrowedNum, _isBorrowed, _startBorrowTime, _startBorrowTime);
				QMessageBox::information(this, "提示", "还书成功");
			}
			else
			{
				QMessageBox::information(this, "提示", "后端异常");
			}
		}
	}

}
