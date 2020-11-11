#ifndef BORROWERINFORMATION_H
#define BORROWERINFORMATION_H

#include <QDialog>

namespace Ui {
class borrowerInformation;
}

class borrowerInformation : public QDialog
{
    Q_OBJECT

public:
    explicit borrowerInformation(QWidget *parent = 0);
    ~borrowerInformation();

private:
    Ui::borrowerInformation *ui;
};

#endif // BORROWERINFORMATION_H
