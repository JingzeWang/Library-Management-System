#ifndef DIALOGRETURN_H
#define DIALOGRETURN_H

#include <QDialog>

namespace Ui {
class DialogReturn;
}

class DialogReturn : public QDialog
{
    Q_OBJECT

public:
    explicit DialogReturn(QWidget *parent = 0);
    ~DialogReturn();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::DialogReturn *ui;
};

#endif // DIALOGRETURN_H
