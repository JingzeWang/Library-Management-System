#pragma once
#include <string>
class Book
{
private:
    int id;//图书ID
    std::string name;//图书名称
    float price;//图书价格
    std::string author;//图书作者
    std::string type;//图书类别
    int pageNum;//图书页数
    int wordNum;//图书字数
    std::string ISBN;//图书ISBN？
    bool lock;//true此书有人操作 false此书没人操作
    int hasBorrowedNum;//书被借阅次数
    bool isBorrowed;//是否被借阅
    std::string startBorrowTime;//借阅起始时间
    std::string shouldReturnTime;//标准（应该）归还时间
public:
    Book();
    virtual ~Book();
    Book(int _id, std::string _name, float _price, bool _isBorrowed, std::string _startBorrowTime);
    std::string getName();
    int getId();
    float getPrice();
    bool getIsBorrowed();
    std::string getStartBorrowTime();
    std::string getAuthor();
    std::string getType();
    int getPageNum();
    int getWordNum();
    std::string getISBN();
    bool borrowBook();//借书
    bool returnBook();//还书
    bool changeBook();//修改书的信息
};
std::ostream& operator <<(std::ostream& output, Book& book);//重载操作符输出Book对象
