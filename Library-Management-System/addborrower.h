#ifndef ADDBORROWER_H
#define ADDBORROWER_H

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
	class addBorrower;
}

class addBorrower : public QDialog
{
	Q_OBJECT

public:
	explicit addBorrower(QWidget* parent = 0);
	~addBorrower();
	string theId, theName, theCode, strAge, strGender;
	char theGender;
	int theAge, theMoney;
private slots:
	void on_okButton_clicked();

	void on_pushButton_2_clicked();

private:
	Ui::addBorrower* ui;
};

#endif // ADDBORROWER_H

