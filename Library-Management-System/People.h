#pragma once
#include <string>
#include <list>
#include "Book.h"
#include <queue>
class People
{
private:
    int id;//人物ID账号
    bool lock;//true此账号已在操作
    std::string code;//密码
    std::string name;//人物姓名
    int age;//人物年龄
    char gender;//人物性别
public:
    People();
    virtual ~People() = 0;
    People(int _id, std::string _name, int _age, char _gender);
    int getId();
    std::string getName();
    int getAge();
    char getGender();
    bool searchNameBook(std::string name);//查询图书（通过书名查）
    bool searchIdBook(int id);//查询图书（通过ID查）
};
//借阅者――人物派生类（公有继承自People）
class Borrower : public People {
private:
    int borrowedNum;//当前借阅数
    int money;//欠款额度
    std::list<Book> borrowingHistory;//借阅历史记录
    std::queue<Book> borrowedBook;//当前借阅的所有书
public:
    Borrower();
    virtual ~Borrower();
    Borrower(int _id, std::string _name, int _age, char _gender);
    void selfInformation();//查看自己的信息（基本信息）
    void printHistory();//查看借阅历史
    void printBorrowed();//查看当前借阅
    void changeInformation();//修改自己的信息
    void changeCode();//修改自己的密码

};
//图书管理员――人物派生类（公有继承自People）
class Librarian : public People {
private:

public:
    Librarian();
    virtual ~Librarian();
    bool searchIdBorrower();//查询读者
    void deleteBorrower();//删除读者
    void addBorrower();//添加读者
    void deleteBook();//删除书
    void addBook();//添加书
    void changeCode(int id, std::string code);//修改用户密码
};
