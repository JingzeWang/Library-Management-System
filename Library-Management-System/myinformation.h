#ifndef MYINFORMATION_H
#define MYINFORMATION_H

#include <QDialog>

namespace Ui {
class MyInformation;
}

class MyInformation : public QDialog
{
    Q_OBJECT

public:
    explicit MyInformation(QWidget *parent = 0);
    ~MyInformation();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MyInformation *ui;
};

#endif // MYINFORMATION_H
