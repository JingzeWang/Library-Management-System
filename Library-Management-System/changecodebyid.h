#ifndef CHANGECODEBYID_H
#define CHANGECODEBYID_H

#include <QDialog>

namespace Ui {
	class changeCodeById;
}

class changeCodeById : public QDialog
{
	Q_OBJECT

public:
	explicit changeCodeById(QWidget* parent = 0);
	~changeCodeById();

private slots:
	void on_pushButton_clicked();

private:
	Ui::changeCodeById* ui;
};

#endif // CHANGECODEBYID_H
