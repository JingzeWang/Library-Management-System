#ifndef LIBRARIANMODIFYBOOK_H
#define LIBRARIANMODIFYBOOK_H

#include <QDialog>

namespace Ui {
class librarianmodifybook;
}

class librarianmodifybook : public QDialog
{
    Q_OBJECT

public:
    explicit librarianmodifybook(QWidget *parent = 0);
    ~librarianmodifybook();

private:
    Ui::librarianmodifybook *ui;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // LIBRARIANMODIFYBOOK_H
