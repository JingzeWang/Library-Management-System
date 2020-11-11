#ifndef PAYFINE_H
#define PAYFINE_H

#include <QDialog>

namespace Ui {
class payFine;
}

class payFine : public QDialog
{
    Q_OBJECT

public:
    explicit payFine(QWidget *parent = 0);
    ~payFine();

private slots:
    void on_pushButton_clicked();
//void on_pushButton_2_clicked();

private:
    Ui::payFine *ui;
};

#endif // PAYFINE_H
