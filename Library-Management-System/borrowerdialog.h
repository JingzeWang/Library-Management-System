#ifndef BORROWERDIALOG_H
#define BORROWERDIALOG_H

#include <QDialog>
#include "dialogsearch.h"
#include "dialogborrow.h"
#include "dialogreturn.h"
//#include "borrowerinformation.h"

#include "myinformation.h"
#include "currentborrow.h"
#include "historyborrow.h"
#include "changecode.h"

namespace Ui {
class borrowerDialog;
}

class borrowerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit borrowerDialog(QWidget *parent = 0);
    ~borrowerDialog();

private slots:
    void on_pushButton_1_clicked();

    void pushButton_2_clicked();

    void pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::borrowerDialog *ui;
    DialogSearch *newDiaSearch;//新窗体（类）指针
    DialogBorrow *newDiaBorrow;
    DialogReturn *newDiaReturn;
   // borrowerInformation *newBorrowerInformation;

    MyInformation *newMyInformation;
    currentborrow *newCurrentBorrow;
    historyborrow *newHistoryBorrow;
    changecode *newChangeCode;

};

#endif // BORROWERDIALOG_H
