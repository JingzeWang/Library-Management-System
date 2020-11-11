#ifndef SEARCHBORROWER_H
#define SEARCHBORROWER_H

#include <QDialog>
#include <QTableView>
#include <QStandardItemModel>
#include <QDebug>
#include <QMessageBox>
#include <qDebug>
#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <regex>
#include "testh.h"
#include <vector>
using namespace std;
namespace Ui {
class searchBorrower;
}

class searchBorrower : public QDialog
{
    Q_OBJECT

public:
    explicit searchBorrower(QWidget *parent = 0);
    ~searchBorrower();
    string theId, theName, theCode,_id,_ISBN,_startBorrowTime,_shouldReturnTime,_name, _type,_author;
    int theAge, theMoney, empty=0, _lock,_hasBorrowedNum, _isBorrowed, _price, _pageNum, _wordNum;
    char theGender;
    QString id, name, gender, age, money, __id, __ISBN,__startBorrowTime,__shouldReturnTime,__name,__type,__author;
    vector<string>idNums;

    //std::string _id, std::string &_ISBN, int &_lock, int &_hasBorrowedNum,int &_isBorrowed,std::string &_startBorrowTime,std::string &_shouldReturnTime,std::string &_name,int &_price, std::string &_type,std::string &_author, int &_pageNum, int &_wordNum)
    //ISBN, lock, hasBorrowedNum, isBorrowed, startBorrowTime, shouldReturnTime,_name,price, _type,_author,_pageNum,_wordNum
private slots:
    //int _searchBorrower();
    //int _printBorrower();
    //int _return();
    void on_okButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableView_clicked();

private:
    Ui::searchBorrower *ui;
};

#endif // SEARCHBORROWER_H
