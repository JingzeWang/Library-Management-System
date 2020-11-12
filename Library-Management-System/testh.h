#ifndef TESTH_H
#define TESTH_H
#include <string>
#include <vector>

void InterfaceInit();
int searchBookByName(std::string _name, std::vector<std::string>& idNums);
int searchBookById(std::string _id, std::string& _ISBN, int& _hasBorrowedNum, int& _isBorrowed, std::string& _startBorrowTime, std::string& _shouldReturnTime, std::string& _name, int& _price, std::string& _type, std::string& _author, int& _pageNum, int& _wordNum);
int searchBookByISBN(std::string& _ISBN, std::string& _name, int& _price, std::string& _type, std::string& _author, int& _pageNum, int& _wordNum);
int idExist(std::string _id);
int modifyBookinfo(std::string _ISBN, std::string _name, int _price, std::string _type, std::string _author, int _pageNum, int _wordNum);
int modifyBook(std::string _id, std::string _ISBN, std::string borrowerID, int _hasBorrowedNum, int _isBorrowed, std::string _startBorrowTime, std::string _shouldReturnTime);
int addBook(std::string _ISBN, std::string _name, int _price, std::string _type, std::string _author, int _pageNum, int _wordNum);
int deleteBook(std::string _id);
int searchPeople(std::string id, std::string& name, int& age, char& gender, int& money);
int modifyPeople(std::string id, std::string name_, int age_, char gender_);
int searchHistory(std::string id, std::vector<std::string>& idNums);
int searchCurrent(std::string id, std::vector<std::string>& idNums);
int changeCode(std::string id, std::string code_);
int matchCode(std::string id, std::string code);
int hasId(std::string id);
int getFine(std::string id, int& money);
int payMoney(std::string id, int pay_, int& money);
int addPeople(std::string& id, std::string name_, int age_, char gender_, std::string code_);
int deletePeople(std::string id);
int addHistory(std::string borrowerId, std::string bookId, int  isborrow);
int addByISBN(std::string _ISBN, int num, std::vector<std::string>& idNums);
int exist_ISBN(std::string _ISBN);
int getBorrowerID(std::string _id, std::string& _borrowerID);
std::string createID();
int deleteID(std::string ID);
std::string createBookID();
int deleteBookID(std::string);

#endif // TESTH_H
