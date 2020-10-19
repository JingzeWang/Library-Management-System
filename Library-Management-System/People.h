#pragma once
#include <string>
#include <list>
#include "Book.h"
#include <queue>
class People
{
private:
    int id;//����ID�˺�
    bool lock;//true���˺����ڲ���
    std::string code;//����
    std::string name;//��������
    int age;//��������
    char gender;//�����Ա�
public:
    People();
    virtual ~People() = 0;
    People(int _id, std::string _name, int _age, char _gender);
    int getId();
    std::string getName();
    int getAge();
    char getGender();
    bool searchNameBook(std::string name);//��ѯͼ�飨ͨ�������飩
    bool searchIdBook(int id);//��ѯͼ�飨ͨ��ID�飩
};
//�����ߨD�D���������ࣨ���м̳���People��
class Borrower : public People {
private:
    int borrowedNum;//��ǰ������
    int money;//Ƿ����
    std::list<Book> borrowingHistory;//������ʷ��¼
    std::queue<Book> borrowedBook;//��ǰ���ĵ�������
public:
    Borrower();
    virtual ~Borrower();
    Borrower(int _id, std::string _name, int _age, char _gender);
    void selfInformation();//�鿴�Լ�����Ϣ��������Ϣ��
    void printHistory();//�鿴������ʷ
    void printBorrowed();//�鿴��ǰ����
    void changeInformation();//�޸��Լ�����Ϣ
    void changeCode();//�޸��Լ�������

};
//ͼ�����Ա�D�D���������ࣨ���м̳���People��
class Librarian : public People {
private:

public:
    Librarian();
    virtual ~Librarian();
    bool searchIdBorrower();//��ѯ����
    void deleteBorrower();//ɾ������
    void addBorrower();//��Ӷ���
    void deleteBook();//ɾ����
    void addBook();//�����
    void changeCode(int id, std::string code);//�޸��û�����
};
