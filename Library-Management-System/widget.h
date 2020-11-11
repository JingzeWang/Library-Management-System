#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "borrowerdialog.h"
#include "librariandialog.h"

extern QString ID0;//全局变量-账号

namespace Ui {
	class Widget;
}

class Widget : public QWidget
{
	Q_OBJECT

public:
	explicit Widget(QWidget* parent = 0);
	~Widget();

private slots:

	void on_pushButton_clicked();

	// void on_pushButton_2_clicked();

private:
	Ui::Widget* ui;
	//新窗体指针：
	borrowerDialog* newBorrowerDialog;
	librariandialog* newLibrarianDialog;
};

#endif // WIDGET_H
