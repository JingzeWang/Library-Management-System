#ifndef DIALOGBORROW_H
#define DIALOGBORROW_H

#include <QDialog>

namespace Ui {
	class DialogBorrow;
}

class DialogBorrow : public QDialog
{
	Q_OBJECT

public:
	explicit DialogBorrow(QWidget* parent = 0);
	~DialogBorrow();

private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();

private:
	Ui::DialogBorrow* ui;
};

#endif // DIALOGBORROW_H
