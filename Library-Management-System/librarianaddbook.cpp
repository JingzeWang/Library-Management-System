#include "librarianaddbook.h"
#include "ui_librarianaddbook.h"
#include "QMessageBox"
#include "windows.h"
#include "testh.h"
#include "QComboBox"
#include "QString"
#include "vector"
#include "QDebug"

librarianAddBook::librarianAddBook(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::librarianAddBook)
{
    ui->setupUi(this);
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true);
    //ui->tableWidget->item(1,1)->setText(QString("%1").arg(2));
    /*
    ui->lineEdit->setMaxLength(20);
    ui->lineEdit_4->setMaxLength(20);
    ui->lineEdit_5->setMaxLength(20);
    ui->lineEdit_6->setMaxLength(20);
    ui->lineEdit_7->setMaxLength(20);
    ui->lineEdit_8->setMaxLength(20);

    */
    //connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_3_clicked()));
}

librarianAddBook::~librarianAddBook()
{

    delete ui;
}
void librarianAddBook::on_pushButton_clicked()
{
    /*
    std::string _name,_author,_type,_ISBN;
    int _pageNum,_wordNum,_price;


    if(ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::information(this,"提示","请输入isbn");
        return;
    }
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty()||ui->lineEdit_6->text().isEmpty()||ui->lineEdit_7->text().isEmpty()||ui->lineEdit_8->text().isEmpty())
    {
        QMessageBox::information(this,"提示","书籍信息未填写完整");
        return;
    }

    _name = ui->lineEdit->text().toStdString();
    _author = ui->lineEdit_4->text().toStdString();
    _price = ui->lineEdit_5->text().toInt();
    _type = ui->lineEdit_6->text().toStdString();
    _wordNum = ui->lineEdit_7->text().toInt();
    _pageNum = ui->lineEdit_8->text().toInt();


    int ifisbn_exist = exist_ISBN( _ISBN);
    if (ifisbn_exist == 1)
    {
        QMessageBox::information(this,"提示","该isbn已经存在");
        return ;
    }
    else
    {
        int ifsuccessful =  addBook(_ISBN,  _name, _price, _type, _author, _pageNum, _wordNum);

        if(ifsuccessful == 1){
            QMessageBox::information(this,"提示","add successfully");
            Sleep(5000);
        }
        else QMessageBox::information(this,"提示","添加新书异常");

    }
    */
    int rowIndex = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(rowIndex + 1);//总行数增加1

    QComboBox* combox_1 = new QComboBox(); // 下拉选择框控件
    combox_1->addItem("A");
    combox_1->addItem("B");
    ui->tableWidget->setCellWidget(rowIndex, 0, (QWidget*)combox_1);
}
void librarianAddBook::on_pushButton_2_clicked()
{
    /*
    int rowIndex = ui->tableWidget->currentRow();
    if (rowIndex != -1)
        ui->tableWidget->removeRow(rowIndex);
        */
    int i = ui->tableWidget->currentRow();
    if (i == -1) QMessageBox::information(this, "提示", "你还没选中任何一行!");

    ui->tableWidget->removeRow(i);
    /*
    std::string _ISBN;

    if(ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::information(this,"提示","请输入isbn");
        return;
    }
    _ISBN = ui->lineEdit_2->text().toStdString();
    int ifisbn_exist = exist_ISBN( _ISBN);
    if (ifisbn_exist == 0)
    {
        QMessageBox::information(this,"提示","该isbn不存在，请检查");
        return ;
    }
    else if(ifisbn_exist == 1)
    {
        int ifsuccessful =  addByISBN(_ISBN);

        if(ifsuccessful == 1){
            QMessageBox::information(this,"提示","add successfully");
            Sleep(5000);
        }
        else QMessageBox::information(this,"提示","添加新书异常");
    }
    */
}
void librarianAddBook::on_pushButton_3_clicked()
{
    //std::string _name,_author,_type,_ISBN;
    //int _pageNum,_wordNum,_price;

    if (ui->tableWidget->rowCount() == 0)
    {
        QMessageBox::information(this, "提示", "你还没有添加内容");
        return;
    }

    int _rowCount = ui->tableWidget->rowCount();
    //判断
    int _judge = 0;
    for (int i = 0; i < _rowCount && !_judge; i++)
    {


        QWidget* widgetSex = ui->tableWidget->cellWidget(i, 0);
        QComboBox* sex = (QComboBox*)widgetSex;
        bool judge = false;
        if (sex->currentText() == "B")
        {
            if (ui->tableWidget->item(i, 1) == NULL || (ui->tableWidget->item(i, 1) && ui->tableWidget->item(i, 1)->text() == tr("")))
            {
                _judge = 1;
            }
            if (ui->tableWidget->item(i, 2) == NULL || (ui->tableWidget->item(i, 2) && ui->tableWidget->item(i, 2)->text() == tr("")))
            {
                _judge = 1;
            }
            else {
                if (!ui->tableWidget->item(i, 2)->text().toInt(&judge) || !judge) _judge = 2;
            }
            if (ui->tableWidget->item(i, 3) == NULL || (ui->tableWidget->item(i, 3) && ui->tableWidget->item(i, 3)->text() == tr("")))
            {
                _judge = 1;
            }
            if (ui->tableWidget->item(i, 4) == NULL || (ui->tableWidget->item(i, 4) && ui->tableWidget->item(i, 4)->text() == tr("")))
            {
                _judge = 1;
            }
            else {
                if (!ui->tableWidget->item(i, 4)->text().toInt(&judge) || !judge) _judge = 2;
            }
            if (ui->tableWidget->item(i, 5) == NULL || (ui->tableWidget->item(i, 5) && ui->tableWidget->item(i, 5)->text() == tr("")))
            {
                _judge = 1;
            }
            if (ui->tableWidget->item(i, 6) == NULL || (ui->tableWidget->item(i, 6) && ui->tableWidget->item(i, 6)->text() == tr("")))
            {
                _judge = 1;
            }
            if (ui->tableWidget->item(i, 7) == NULL || (ui->tableWidget->item(i, 7) && ui->tableWidget->item(i, 7)->text() == tr("")))
            {
                _judge = 1;
            }
            else {
                if (!ui->tableWidget->item(i, 7)->text().toInt(&judge) || !judge) _judge = 2;
            }
            if (ui->tableWidget->item(i, 8) == NULL || (ui->tableWidget->item(i, 8) && ui->tableWidget->item(i, 8)->text() == tr("")))
            {
                _judge = 1;
            }
            else {
                if (!ui->tableWidget->item(i, 8)->text().toInt(&judge) || !judge) _judge = 2;
            }
        }
        else
        {
            if (ui->tableWidget->item(i, 1) == NULL || (ui->tableWidget->item(i, 1) && ui->tableWidget->item(i, 1)->text() == tr("")))
            {
                _judge = 1;
            }
            if (ui->tableWidget->item(i, 2) == NULL || (ui->tableWidget->item(i, 2) && ui->tableWidget->item(i, 2)->text() == tr("")))
            {
                _judge = 1;
            }
            else {
                if (!ui->tableWidget->item(i, 2)->text().toInt(&judge) || !judge) _judge = 2;
            }
        }
        /*if ((ui->tableWidget->item(i, 2) && ui->tableWidget->item(i, 2)->text().toInt() > 50)) {
            QMessageBox::information(this, "提示", "单种图书的最大添加数量为50本!");
            return;
        }*/
    }



    if (_judge == 1)
    {
        QMessageBox::information(this, "提示", "存在未填充的值!");
        return;
    }
    else if (_judge == 2) {
        QMessageBox::information(this, "提示", "存在非法的输入!");
        return;
    }
    else {
        //存储
        int countnums = 0;

        for (int i = 0; i < ui->tableWidget->rowCount(); i++)
        {
            int n = ui->tableWidget->item(i, 2)->text().toInt();
            countnums = countnums + n;
            if (n > 50) {
                QMessageBox::information(this, "提示", "单种图书的最大添加数量为50本!");
                return;
            }
        }

        qDebug() << countnums;
        ui->tableWidget_2->setRowCount(countnums);

        int allnums = 0;
        for (int i = 0; i < _rowCount; i++)
        {
            std::string _ISBN, _startBorrowTime, _shouldReturnTime, _name, _type, _author;
            int _hasBorrowedNum, _isBorrowed, _price, _pageNum, _wordNum, _num;
            std::vector<std::string> idNums;

            QWidget* widgetSex = ui->tableWidget->cellWidget(i, 0);
            QComboBox* sex = (QComboBox*)widgetSex;

            //qDebug() << "testAloop1";

            if (sex->currentText() == "B")
            {
                _ISBN = ui->tableWidget->item(i, 1)->text().toStdString();
                _num = ui->tableWidget->item(i, 2)->text().toInt();
                _name = ui->tableWidget->item(i,3)->text().toStdString();
                _price = ui->tableWidget->item(i, 4)->text().toInt();
                _author = ui->tableWidget->item(i,5)->text().toStdString();
                _type = ui->tableWidget->item(i,6)->text().toStdString();
                _wordNum = ui->tableWidget->item(i,7)->text().toInt();
                _pageNum = ui->tableWidget->item(i,8)->text().toInt();
                if (exist_ISBN(_ISBN)) {
                    QMessageBox::information(this, "提示", "存在已录入信息的书籍，将直接添加数量！");
                }
                else addBook(_ISBN, _name, _price, _type, _author, _pageNum, _wordNum);
                qDebug() << "testAloop2";
                addByISBN(_ISBN, _num, idNums);
                for (int i = 0; i <= idNums.size() - 1; i++)
                {
                    qDebug() << "testAloop3";
                    searchBookById(idNums[i], _ISBN, _hasBorrowedNum, _isBorrowed, _startBorrowTime, _shouldReturnTime, _name, _price, _type, _author, _pageNum, _wordNum);
                    qDebug() << "testAloop4";
                    QString s4 = QString::fromStdString(idNums[i]);
                    QString s5 = QString::fromStdString(_name);
                    //qDebug() << "testAloop5";
                    ui->tableWidget_2->setItem(i + allnums, 0, new QTableWidgetItem(s4));
                    ui->tableWidget_2->setItem(i + allnums, 1, new QTableWidgetItem(s5));
                    //qDebug() << "testAloop6";
                }
                allnums = allnums + _num;
            }
            else
            {
                _ISBN = ui->tableWidget->item(i, 1)->text().toStdString();
                _num = ui->tableWidget->item(i, 2)->text().toInt();
                if (!exist_ISBN(_ISBN)) {
                    QMessageBox::information(this, "提示", ("ISBN: " + _ISBN + "未录入信息，将不被创建！").c_str());
                    continue;
                }
                addByISBN(_ISBN, _num, idNums);

                for (int i = 0; i < idNums.size(); i++)
                {
                    searchBookById(idNums[i], _ISBN, _hasBorrowedNum, _isBorrowed, _startBorrowTime, _shouldReturnTime, _name, _price, _type, _author, _pageNum, _wordNum);

                    QString s4 = QString::fromStdString(idNums[i]);
                    QString s5 = QString::fromStdString(_name);
                    ui->tableWidget_2->setItem(i + allnums, 0, new QTableWidgetItem(s4));
                    ui->tableWidget_2->setItem(i + allnums, 1, new QTableWidgetItem(s5));

                }
                allnums = allnums + _num;
            }


        }
        QMessageBox::information(this, "提示", "处理完毕，请根据右侧表格为书籍贴好");
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);
        //Sleep(3000);
    }
}
