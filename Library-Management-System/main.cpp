#include "widget.h"
#include <QApplication>
#include "vector"

//std::string userid = NULL;

/*
int  searchBookByName(std::string _name, std::vector<std::string>&idNums)
{
    idNums.push_back("ID1");
    idNums.push_back("id2");
    return 1;
}

int  searchBookById(std::string _id, std::string &_ISBN, int &_lock, int &_hasBorrowedNum,int &_isBorrowed,std::string &_startBorrowTime,std::string &_shouldReturnTime,std::string &_name,int &_price, std::string &_type,std::string &_author, int &_pageNum, int &_wordNum)
{
    _ISBN = "isbn001";
    _lock = 1;
    _hasBorrowedNum = 1;
    _isBorrowed = 1;
    _startBorrowTime = "starttime";
    _shouldReturnTime = "shouldbacntime";
    _name = "name001";
    _price = 1;
    _type = "type1";
    _author = "author1";
    _pageNum = 1;
    _wordNum = 1;

    return 1;
}

int  idExist(std::string _id)
{
    return 1;
}
int  modifyBookinfo(std::string _ISBN, std::string _name,int _price, std::string _type,std::string _author, int _pageNum, int _wordNum)
{
    return 1;

}
int  modifyBook(std::string _id, std::string _ISBN, int _lock, int _hasBorrowedNum,int _isBorrowed,std::string _startBorrowTime,std::string _shouldReturnTime)
{
    return 1;
}
int  addBook(std::string _ISBN, std::string _name,int _price, std::string _type,std::string _author, int _pageNum, int _wordNum,int num,std::vector<std::string>&idNums)
{
    return 1;
}
int  deleteBook(std::string _id)
{
    return 1;

}
int  searchPeople(std::string id, std::string &name, int &age, char &gender, int &money)
{
    return 1;

}
int  modifyPeople(std::string id, std::string name_, int age_ , char gender_)
{
    return 1;

}
int  searchHistory(std::string id, std::vector<std::string>&idNums)
{
    return 1;

}
int  searchCurrent(std::string id, std::vector<std::string>&idNums)
{
    return 1;

}
int  changeCode(std::string id, std::string code_)
{
    return 1;

}
int  matchCode(std::string id, std::string code)
{
    return 1;

}
int  hasId(std::string id)
{
    return 1;

}
int  getFine(std::string id, int &money)
{
    money = 1;
    return 1;

}
int  payMoney(std::string id, int pay_, int &money)
{
    return 1;

}
int  addPeople(std::string name_, int age_ , char gender_, std::string code_)
{
    return 1;

}
int  deletePeople(std::string id)
{
    return 1;

}
int  addHistory(std::string borrowerId, std::string bookId, int  isborrow)
{
    return 1;

}
int addByISBN(std::string _ISBN,int num,std::vector<std::string>&idNums)
{
    idNums.push_back("ID1");
    idNums.push_back("id2");
    return 1;

}
int  exist_ISBN(std::string _ISBN)
{
    return 1;

}
int  getBorrowerID(std::string _id,std::string &_borrowerID)
{
    _borrowerID = "borrowid001";
    return 1;

}

*/
int main(int argc, char *argv[])
{  
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
