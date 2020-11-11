#include "changecode.h"
#include "ui_changecode.h"
#include "widget.h"
#include <QMessageBox>
#include "testh.h"

changecode::changecode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changecode)
{
    ui->setupUi(this);
    //密码输入框设置为密文显示:
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);

    //限制最大输入长度：
    ui->lineEdit->setMaxLength(15);
    ui->lineEdit_2->setMaxLength(15);
    ui->lineEdit_3->setMaxLength(15);

    QRegExp rcode("[a-zA-Z0-9]{1,15}");

    ui->lineEdit->setValidator(new QRegExpValidator(rcode, this));//oldCode
    ui->lineEdit_2->setValidator(new QRegExpValidator(rcode, this));//newCode
    ui->lineEdit_3->setValidator(new QRegExpValidator(rcode,this));//confirmCode
}

changecode::~changecode()
{
    delete ui;
}

void changecode::on_pushButton_clicked()//确定-修改密码
{
    QString s1=ui->lineEdit->text();//旧密码
    QString s2=ui->lineEdit_2->text();//新密码
    QString s3=ui->lineEdit_3->text();//确定密码

    if(s1=="")
    {
        QMessageBox m;
        m.setText("⚠警告：请输入旧密码！");
        m.exec();
    }
    else if(s2=="")
    {
        QMessageBox m;
        m.setText("⚠警告：请输入新密码！");
        m.exec();
    }
    else if(s3=="")
    {
        QMessageBox m;
        m.setText("⚠警告：请输入确认密码！");
        m.exec();
    }
    else if(s2!=s3)
    {
        QMessageBox m;
        m.setText("⚠警告：修改失败，两次密码不一致！");
        m.exec();
    }
    else
    {
        //【修改添加】若旧密码与ID匹配不成功？？？
        //int matchCode(string id, string code) 成功：1 失败：0
        //matchCode(ID0, s1.toStdString())
        if(!matchCode(ID0.toStdString(), s1.toStdString()))
        {
            QMessageBox m;
            m.setText("⚠警告：原密码错误！");
            m.exec();
        }
        else
        {
            QMessageBox m;
            m.setText("⚠警告：修改成功！");
            m.exec();
            //【修改添加】匹配成功则修改为新密码
            //int changeCode(string id, string code_)
            changeCode(ID0.toStdString(), s3.toStdString());
        }
    }
}
