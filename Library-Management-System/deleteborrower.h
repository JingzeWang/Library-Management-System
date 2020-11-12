#ifndef DELETEBORROWER_H
#define DELETEBORROWER_H

#include <QDialog>
#include <QMessageBox>
#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <regex>
#include "testh.h"
using namespace std;
namespace Ui {
	class deleteBorrower;
}

class deleteBorrower : public QDialog
{
	Q_OBJECT

public:
	explicit deleteBorrower(QWidget* parent = 0);
	~deleteBorrower();
	string theId, theName, theCode;
	int theAge, theMoney;
	char theGender;
	QString id, name, gender, age, money;
private slots:
	void on_pushButton_clicked();

	void on_okButton_clicked();

	void on_pushButton_2_clicked();

private:
	Ui::deleteBorrower* ui;
};

#endif // DELETEBORROWER_H

