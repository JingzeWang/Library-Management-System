#pragma once
#include <string>
class Book
{
private:
    int id;//ͼ��ID
    std::string name;//ͼ������
    float price;//ͼ��۸�
    std::string author;//ͼ������
    std::string type;//ͼ�����
    int pageNum;//ͼ��ҳ��
    int wordNum;//ͼ������
    std::string ISBN;//ͼ��ISBN��
    bool lock;//true�������˲��� false����û�˲���
    int hasBorrowedNum;//�鱻���Ĵ���
    bool isBorrowed;//�Ƿ񱻽���
    std::string startBorrowTime;//������ʼʱ��
    std::string shouldReturnTime;//��׼��Ӧ�ã��黹ʱ��
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
    bool borrowBook();//����
    bool returnBook();//����
    bool changeBook();//�޸������Ϣ
};
std::ostream& operator <<(std::ostream& output, Book& book);//���ز��������Book����
