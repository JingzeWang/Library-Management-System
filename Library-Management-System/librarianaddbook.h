#ifndef LIBRARIANADDBOOK_H
#define LIBRARIANADDBOOK_H

#include <QDialog>

namespace Ui {
class librarianAddBook;
}

class librarianAddBook : public QDialog
{
    Q_OBJECT

public:
    explicit librarianAddBook(QWidget *parent = 0);
    ~librarianAddBook();

private:
    Ui::librarianAddBook *ui;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
};

#endif // LIBRARIANADDBOOK_H
