#ifndef CHANGECODE_H
#define CHANGECODE_H

#include <QDialog>

namespace Ui {
	class changecode;
}

class changecode : public QDialog
{
	Q_OBJECT

public:
	explicit changecode(QWidget* parent = 0);
	~changecode();

private slots:
	void on_pushButton_clicked();

private:
	Ui::changecode* ui;
};

#endif // CHANGECODE_H
