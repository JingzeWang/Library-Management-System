#include "searchborrower.h"
#include "ui_searchborrower.h"

searchBorrower::searchBorrower(QWidget* parent) :
	QDialog(parent),
	ui(new Ui::searchBorrower)
{
	ui->setupUi(this);
	QRegExp name("[a-z0-9]{20}");
	ui->lineEdit->setValidator(new QRegExpValidator(name, this));
	setWindowTitle("查询借阅者");
	//ui->pushButton->setEnabled(false);
}

searchBorrower::~searchBorrower()
{
	delete ui;
}

void searchBorrower::on_okButton_clicked()
{
	QString searchBorrowerId = ui->lineEdit->text();

	std::string idNum = searchBorrowerId.mid(1, 19).toStdString();
	//id后19位规则
	std::regex ridNum("[0-9]{19,19}");
	if (searchBorrowerId.isEmpty() == 1)
	{
		QMessageBox::warning(NULL, "warning", "输入不能为空");
	}
	else if (searchBorrowerId[0] != "b") {

		QMessageBox::warning(NULL, "warning", "输入格式不正确，读者账号以b开头，管理员账号以l开头！");
	}
	else if (!regex_match(idNum, ridNum))
	{
		QMessageBox m;
		m.setText("⚠警告：账号后19位为数字！");
		m.exec();
	}
	else {
		empty = 1;
		theId = searchBorrowerId.toStdString();
		if (hasId(theId) == 0)
		{
			QMessageBox::information(NULL, "information", "查无此人！");
		}
		else
		{
			searchPeople(theId, theName, theAge, theGender, theMoney);
			//C->Q
			name = QString::fromStdString(theName);
			age = QString::number(theAge);
			gender = QString(theGender);
			money = QString::number(-theMoney);
			//money = QString("%1").arg(((float)theMoney) / 100);
			//显示基本信息
			ui->label_5->setText(searchBorrowerId);
			ui->label_6->setText(name);
			ui->label_7->setText(age);//int 转换成QString
			ui->label_9->setText(gender == 'w' ? "女" : "男");
			ui->label_11->setText(money);
			//ui->pushButton->setEnabled(true);
		}
	}
	on_pushButton_clicked();
}

void searchBorrower::on_pushButton_2_clicked()
{
	//取消
	this->close();
}

void searchBorrower::on_pushButton_clicked()
{
	//查询借阅历史？
	//searchHistory();
	if (empty == 1)
	{
		if (searchCurrent(theId, idNums) == 1)
		{
			//searchBookById(std::string _id, std::string &_ISBN, int &_lock, int &_hasBorrowedNum,int &_isBorrowed,std::string &_startBorrowTime,std::string &_shouldReturnTime,std::string &_name,int &_price, std::string &_type,std::string &_author, int &_pageNum, int &_wordNum);
			QStandardItemModel* model = new QStandardItemModel();
			QStringList labels = QObject::trUtf8("ID, 书名, 借阅时间, 到期时间").simplified().split(",");
			model->setHorizontalHeaderLabels(labels);
			QStandardItem* item = 0;
			for (int i = 0; i < idNums.size(); i++)
			{
				searchBookById(idNums[i], _ISBN, _hasBorrowedNum, _isBorrowed, _startBorrowTime, _shouldReturnTime, _name, _price, _type, _author, _pageNum, _wordNum);
				//__ISBN,__startBorrowTime,__shouldReturnTime,__name,___type,__author;
				__id = QString::fromStdString(idNums[i]);//book_Id
				//__ISBN = QString::fromStdString(_ISBN);
				__startBorrowTime = QString::fromStdString(_startBorrowTime);
				__shouldReturnTime = QString::fromStdString(_shouldReturnTime);
				__name = QString::fromStdString(_name);
				//__type = QString::fromStdString(_type);
				//__author = QString::fromStdString(_author);
				item = new QStandardItem(QString("%1").arg(__id));
				model->setItem(i, 0, item);
				item = new QStandardItem(QString("%1").arg(__name));
				model->setItem(i, 1, item);
				item = new QStandardItem(QString("%1").arg(__startBorrowTime));
				model->setItem(i, 2, item);
				item = new QStandardItem(QString("%1").arg(__shouldReturnTime));
				model->setItem(i, 3, item);
			}

			ui->tableView->setModel(model);
			ui->tableView->show();
			ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
			ui->tableView->horizontalHeader()->setStretchLastSection(true);
		}
	}
	else
		QMessageBox::warning(NULL, "warning", "输入不能为空");
	/*QStringList num;
	num << QString("1") << QString("1") <<QString("1") << QString("1") << QString("1")<< QString("1")<< QString("1")<< QString("1")<< QString("1")<< QString("1")<< QString("1")<< QString("1")<< QString("1");
	QStringListModel *model = new QStringListModel(num);
	ui->listView->setModel(model);*/
}

void searchBorrower::on_tableView_clicked()
{

}
