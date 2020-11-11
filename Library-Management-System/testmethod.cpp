#include "testh.h"
#include "vector"
#include "DataBase/interpreter.h"
#include "lib_json/json.h"
#include <iostream>
Interpreter itp;
bool DataBaseSeted = 0;

void InterfaceInit() {
	itp.ExecSQL("use LibraryManagementSystem;");
	DataBaseSeted = 1;
}

int searchBookByName(std::string _name, std::vector<std::string>& idNums)
{
	if (DataBaseSeted == 0) InterfaceInit();
	idNums.clear();
	itp.ExecSQL("select * from BookInfo where name = \'" + _name + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	for (int i = 0; i < res.size(); ++i) {
		std::string ISBN = root[i]["isbn"].asString();
		itp.ExecSQL("select * from Book where isbn = \'" + ISBN + "\';");
		std::string resISBN = itp.GetRes();
		Json::Value rootISBN;
		reader.parse(resISBN, rootISBN);
		for (int j = 0; j < rootISBN.size(); ++j) {
			idNums.push_back(rootISBN[j]["id"].asString());
			std::cout << rootISBN[j]["id"].asString() << std::endl;
		}
	}
	return 1;
}

int searchBookById(std::string _id, std::string& _ISBN, int& _hasBorrowedNum, int& _isBorrowed, std::string& _startBorrowTime, std::string& _shouldReturnTime, std::string& _name, int& _price, std::string& _type, std::string& _author, int& _pageNum, int& _wordNum)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from Book where id = \'" + _id + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	_ISBN = root[0]["isbn"].asString();
	_hasBorrowedNum = root[0]["hasborrowednum"].asInt();
	_isBorrowed = root[0]["isborrowed"].asInt();
	_startBorrowTime = root[0]["startborrowtime"].asString();
	_shouldReturnTime = root[0]["shouldreturntime"].asString();
	itp.ExecSQL("select * from BookInfo where isbn = \'" + _ISBN + "\';");
	res = itp.GetRes();
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	_name = root[0]["name"].asString();
	_price = root[0]["price"].asInt();
	_type = root[0]["type"].asString();
	_author = root[0]["author"].asString();
	_pageNum = root[0]["pageNum"].asInt();
	_wordNum = root[0]["wordNum"].asInt();
	return 1;
}

int searchBookByISBN(std::string& _ISBN, std::string& _name, int& _price, std::string& _type, std::string& _author, int& _pageNum, int& _wordNum)
{
	if (DataBaseSeted == 0) InterfaceInit();
	Json::Reader reader;
	Json::Value root;
	itp.ExecSQL("select * from BookInfo where isbn = \'" + _ISBN + "\';");
	std::string res = itp.GetRes();
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	_name = root[0]["name"].asString();
	_price = root[0]["price"].asInt();
	_type = root[0]["type"].asString();
	_author = root[0]["author"].asString();
	_pageNum = root[0]["pageNum"].asInt();
	_wordNum = root[0]["wordNum"].asInt();
	return 1;
}

int idExist(std::string _id)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from Book where id = \'" + _id + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() != 0) return 1;
	else return 0;
}

int modifyBookinfo(std::string _ISBN, std::string _name, int _price, std::string _type, std::string _author, int _pageNum, int _wordNum)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("update BookInfo set name = \'" + _name + "\', price = " + std::to_string(_price) + ", type = \'" + _type + "\', author = \'" + _author + "\', pageNum = " + std::to_string(_pageNum) + ", wordNum = " + std::to_string(_wordNum) + " where isbn = \'" + _ISBN + "\';");
	std::cout << "update BookInfo set name = \'" + _name + "\', price = " + std::to_string(_price) + ", type = \'" + _type + "\', author = \'" + _author + "\', pageNum = " + std::to_string(_pageNum) + ", wordNum = " + std::to_string(_wordNum) + " where isbn = \'" + _ISBN + "\';" << std::endl;
	return 1;
}

int modifyBook(std::string _id, std::string _ISBN, std::string borrowerID, int _hasBorrowedNum, int _isBorrowed, std::string _startBorrowTime, std::string _shouldReturnTime)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("update Book set borrowerid = \'" + borrowerID + "\', isbn = \'" + _ISBN + "\', hasborrowednum = " + std::to_string(_hasBorrowedNum) + ", isborrowed = " + std::to_string(_isBorrowed) + ", startborrowtime = \'" + _startBorrowTime + "\', shouldreturntime = \'" + _shouldReturnTime + "\' where id = \'" + _id + "\';");
	return 1;
}

int addBook(std::string _ISBN, std::string _name, int _price, std::string _type, std::string _author, int _pageNum, int _wordNum)
{
	if (DataBaseSeted == 0) InterfaceInit();
	std::cout << "insert into BookInfo values (\'" + _name + "\', " + std::to_string(_price) + ", \'" + _author + "\', \'" + _type + "\', " + std::to_string(_pageNum) + ", " + std::to_string(_wordNum) + ", \'" + _ISBN + "\');" << std::endl;
	itp.ExecSQL("insert into BookInfo values(\'" + _name + "\', " + std::to_string(_price) + ", \'" + _author + "\', \'" + _type + "\', " + std::to_string(_pageNum) + ", " + std::to_string(_wordNum) + ", \'" + _ISBN + "\');");
	return 1;
}

int deleteBook(std::string _id)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("delete from Book where id = \'" + _id + "\';");
	deleteBookID(_id);
	return 1;
}

int searchPeople(std::string id, std::string& name, int& age, char& gender, int& money)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from PeopleInfo where id = \'" + id + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	name = root[0]["name"].asString();
	std::cout << name << std::endl;
	age = root[0]["age"].asInt();
	std::string str = root[0]["gender"].asString();
	gender = str[0];
	getFine(id, money);
	return 1;
}

int modifyPeople(std::string id, std::string name_, int age_, char gender_)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("update PeopleInfo set name = \'" + name_ + "\', age = " + std::to_string(age_) + ", gender = \'" + gender_ + "\' where id = \'" + id + "\';");
	return 1;
}

int searchHistory(std::string id, std::vector<std::string>& idNums)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from PeopleHistory where id = \'" + id + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	std::string str = "bookid";
	for (int i = 0; i < 10; ++i) {
		std::string temp = str + std::to_string(i);
		std::string bookID = root[0][temp].asString();
		if (bookID == "0") continue;
		if (bookID == "") continue;
		idNums.push_back(bookID);
	}
	return 1;
}

int searchCurrent(std::string id, std::vector<std::string>& idNums)
{
	if (DataBaseSeted == 0) InterfaceInit();
	idNums.clear();
	itp.ExecSQL("select * from People where id = \'" + id + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	std::string str = "bookid";
	for (int i = 0; i < 10; ++i) {
		std::string temp = str + std::to_string(i);
		std::string bookID = root[0][temp].asString();
		if (bookID == "0") continue;
		if (bookID == "") continue;
		idNums.push_back(bookID);
	}
	return 1;
}

int changeCode(std::string id, std::string code_)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("update PeopleInfo set password = \'" + code_ + "\' where id = \'" + id + "\';");
	return 1;
}

int matchCode(std::string id, std::string code)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from PeopleInfo where id = \'" + id + "\' and password = \'" + code + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() != 0) return 1;
	else return 0;
}

int hasId(std::string id)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from PeopleInfo where id = \'" + id + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() != 0) return 1;
	else return 0;
}

int getFine(std::string id, int& money)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from People where id = \'" + id + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	money = root[0]["fine"].asInt();
	return 1;
}

int payMoney(std::string id, int pay_, int& money)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from People where id = \'" + id + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	money = root[0]["fine"].asInt();
	money -= pay_;
	itp.ExecSQL("update People set fine = " + std::to_string(money) + " where id = \'" + id + "\';");
	return 1;
}

int addPeople(std::string& id, std::string name_, int age_, char gender_, std::string code_)
{
	if (DataBaseSeted == 0) InterfaceInit();
	id = createID();
	int mode = 1;
	std::cout << id << std::endl;
	itp.ExecSQL("insert into PeopleInfo values (\'" + id + "\', 1, \'" + name_ + "\', " + std::to_string(age_) + ", \'" + gender_ + "\', \'" + code_ + "\');");
	itp.ExecSQL("insert into People values (\'" + id + "\', 0, \'0\', \'0\', \'0\', \'0\', \'0\', \'0\', \'0\', \'0\', \'0\', \'0\');");
	itp.ExecSQL("insert into PeopleHistory values (\'" + id + "\', \'0\', \'0\', \'0\', \'0\', \'0\', \'0\', \'0\', \'0\', \'0\', \'0\');");
	return 1;
}

int deletePeople(std::string id)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("delete from People where id = \'" + id + "\';");
	itp.ExecSQL("delete from PeopleInfo where id = \'" + id + "\';");
	itp.ExecSQL("delete from PeopleHistory where id = \'" + id + "\';");
	deleteID(id);
	return 1;
}

int addHistory(std::string borrowerId, std::string bookId, int isborrow)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from People where id = \'" + borrowerId + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	std::vector<std::string> borrowedBooks;
	std::string str = "bookid";
	for (int i = 0; i < 10; ++i) {
		std::string temp = str + std::to_string(i);
		std::string tempID = root[0][temp].asString();
		if (tempID == "0") continue;
		if (tempID == "") continue;
		borrowedBooks.push_back(tempID);
	}
	if (isborrow) {
		if (borrowedBooks.size() == 10) return 2;
		borrowedBooks.push_back(bookId);
		while (borrowedBooks.size() < 10) borrowedBooks.push_back("0");
		for (int i = 0; i < 10; ++i) {
			itp.ExecSQL("update People set bookid" + std::to_string(i) + " = \'" + borrowedBooks[i] + "\' where id = \'" + borrowerId + "\';");
		}
	}
	else {
		for (int i = 0; i < borrowedBooks.size(); ++i) {
			if (borrowedBooks[i] == bookId) borrowedBooks.erase(borrowedBooks.begin() + i);
		}
		while (borrowedBooks.size() < 10) borrowedBooks.push_back("0");
		for (int i = 0; i < 10; ++i) {
			itp.ExecSQL("update People set bookid" + std::to_string(i) + " = \'" + borrowedBooks[i] + "\' where id = \'" + borrowerId + "\';");
			std::cout << "update People set bookid" + std::to_string(i) + " = \'" + borrowedBooks[i] + "\' where id = \'" + borrowerId + "\';" << std::endl;
		}
		itp.ExecSQL("select * from PeopleHistory where id = \'" + borrowerId + "\';");
		res = itp.GetRes();
		Json::Value Historyroot;
		reader.parse(res, Historyroot);
		if (Historyroot.size() == 0) return 0;
		std::vector<std::string> bookHistory;
		for (int i = 0; i < 10; ++i) {
			std::string temp = str + std::to_string(i);
			std::string tempID = Historyroot[0][temp].asString();
			if (tempID == "0") continue;
			if (tempID == "") continue;
			bookHistory.push_back(tempID);
		}
		bookHistory.push_back(bookId);
		if (bookHistory.size() > 10) bookHistory.erase(bookHistory.begin());
		while (bookHistory.size() < 10) bookHistory.push_back("0");
		for (int i = 0; i < 10; ++i) {
			itp.ExecSQL("update PeopleHistory set bookid" + std::to_string(i) + " = \'" + bookHistory[i] + "\' where id = \'" + borrowerId + "\';");
		}
	}
	return 1;
}

int addByISBN(std::string _ISBN, int num, std::vector<std::string>& idNums)
{
	idNums.clear();
	if (DataBaseSeted == 0) InterfaceInit();
	for (int i = 0; i < num; ++i) {
		std::string ID = createBookID();
		itp.ExecSQL("insert into Book values(\'" + ID + "\', \'" + _ISBN + "\', \'0\', 0, 0, \'0\', \'0\');");
		std::cout << "insert into Book values(\'" + ID + "\', \'" + _ISBN + "\', \'0\', 0, 0, \'0\', \'0\');" << std::endl;
		idNums.push_back(ID);
	}
	return 1;
}

int exist_ISBN(std::string _ISBN)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from BookInfo where isbn = \'" + _ISBN + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() != 0) return 1;
	else return 0;
}

int getBorrowerID(std::string _id, std::string& _borrowerID)
{
	if (DataBaseSeted == 0) InterfaceInit();
	itp.ExecSQL("select * from Book where id = \'" + _id + "\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	if (root.size() == 0) return 0;
	_borrowerID = root[0]["borrowerid"].asString();
	return 1;
}

std::string createID() {
	itp.ExecSQL("select * from PeopleID where type = \'f\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	std::string id;
	if (root.size() != 0) {
		id = root[0]["id"].asString();
		itp.ExecSQL("delete from PeopleID where id = \'" + id + "\';");
	}
	else {
		itp.ExecSQL("select * from PeopleID where type = \'n\';");
		res = itp.GetRes();
		reader.parse(res, root);
		id = root[0]["id"].asString();
		int iid = std::atoi(id.c_str());
		std::string temp = std::to_string(++iid);
		while (temp.length() < 19) temp = "0" + temp;
		itp.ExecSQL("update PeopleID set id = \'" + temp + "\' where id = \'" + id + "\';");
	}
	return "b" + id.substr(0, 19);
}

int deleteID(std::string ID) {
	itp.ExecSQL("insert into PeopleID values (\'f\', \'" + ID.substr(1, 19) + "\');");
	return 1;
}

std::string createBookID() {
	itp.ExecSQL("select * from BookID where type = \'f\';");
	std::string res = itp.GetRes();
	Json::Reader reader;
	Json::Value root;
	reader.parse(res, root);
	std::string id;
	if (root.size() != 0) {
		id = root[0]["id"].asString();
		itp.ExecSQL("delete from BookID where id = \'" + id + "\';");
	}
	else {
		itp.ExecSQL("select * from BookID where type = \'n\';");
		res = itp.GetRes();
		reader.parse(res, root);
		id = root[0]["id"].asString();
		int iid = std::atoi(id.c_str());
		std::string temp = std::to_string(++iid);
		while (temp.length() < 20) temp = "0" + temp;
		itp.ExecSQL("update BookID set id = \'" + temp + "\' where id = \'" + id + "\';");
	}
	return id.substr(0, 20);
}

int deleteBookID(std::string ID) {
	itp.ExecSQL("insert into BookID values (\'f\', \'" + ID + "\');");
	return 1;
}