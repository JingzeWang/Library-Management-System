#include "deleteborrower.h"
#include "ui_deleteborrower.h"
#include <QRegExpValidator>

deleteBorrower::deleteBorrower(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::deleteBorrower)
{
    ui->setupUi(this);
    QRegExp name("[a-z0-9]{20}");
    ui->lineEdit->setValidator(new QRegExpValidator(name, this));
    setWindowTitle("删除借阅者");
    ui->okButton->setEnabled(false);//隐藏按钮
}

deleteBorrower::~deleteBorrower()
{
    delete ui;
}

void deleteBorrower::on_pushButton_clicked()
{
    //根据ID查找该借阅者信息
    QString deleteBorrowerId = ui->lineEdit->text();
    //获取后19位id号码
    std::string idNum = deleteBorrowerId.mid(1, 19).toStdString();
    //id后19位规则
    std::regex ridNum("[0-9]{19,19}");

    if (deleteBorrowerId.isEmpty() == 1)
    {
        QMessageBox::warning(NULL, "warning", "输入不能为空");
    }
    else if (deleteBorrowerId[0] != "b") {

        QMessageBox::warning(NULL, "warning", "输入格式不正确，读者账号以b开头，管理员账号以l开头！");
    }
    else if (!regex_match(idNum, ridNum))
    {
        QMessageBox m;
        m.setText("⚠警告：账号后19位为数字！");
        m.exec();
    }
    else
    {
        theId = deleteBorrowerId.toStdString();
        if (hasId(theId) == 0)
        {
            QMessageBox::information(NULL, "information", "查无此人！");
            this->show();
            return;
        }
        else
        {
            ui->okButton->setEnabled(true);
            //int searchPeople(std::string id, std::string &name, int &age, char &gender, int &money)
            searchPeople(theId, theName, theAge, theGender, theMoney);
            //显示基本信息
            name = QString::fromStdString(theName);
            age = QString::number(theAge);
            gender = QString(theGender == 'w' ? "女" : "男");
            money = QString::number(-theMoney);
            ui->label_28->setText(deleteBorrowerId);
            ui->label_29->setText(name);
            ui->label_30->setText(age);//int 转换成QString
            ui->label_31->setText(gender);
            ui->label_8->setText(money);

        }
    }
}

void deleteBorrower::on_okButton_clicked()
{
    //确认删除
    int c, temp;
    string strtemp;
    //int searchCurrent(std::string id, std::vector<std::string>&idNums);
    vector<string>idNums;
    searchCurrent(theId, idNums);
    searchPeople(theId, strtemp, temp, strtemp[0], c);
    if (idNums.size() != 0)
    {
        QMessageBox::warning(NULL, "warning", "该借阅者还有无法归还的书籍，无法删除！");
    }
    else if (c > 0) {
        QMessageBox::warning(NULL, "warning", "该借阅者还有未缴纳的罚款，无法删除！");
    }
    else if (c < 0) {
        QMessageBox::warning(NULL, "warning", "该借阅者还有未取出的存款，无法删除！");
    }
    else
    {
        c = QMessageBox::question(this, "提示", "确定删除？", QMessageBox::Yes | QMessageBox::No);
        if (c == QMessageBox::Yes)
        {
            if (deletePeople(theId) == 1)
                QMessageBox::information(NULL, "information", "删除成功！");
            else
                QMessageBox::information(NULL, "information", "删除失败！");
            ui->label_28->clear();
            ui->label_29->clear();
            ui->label_30->clear();
            ui->label_31->clear();
            ui->label_8->clear();
            ui->okButton->setEnabled(false);
        }
    }
    //else if(c==QMessageBox::No){this->close();}
    this->show();
    return;
}


void deleteBorrower::on_pushButton_2_clicked()
{
    //取消
    this->close();
}
