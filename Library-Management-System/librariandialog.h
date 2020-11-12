#ifndef LIBRARIANDIALOG_H
#define LIBRARIANDIALOG_H

#include "librarianaddbook.h"
#include "librariandeletebook.h"
#include "librarianmodifybook.h"
#include "addborrower.h"
#include "deleteborrower.h"
#include "searchborrower.h"
#include "changecodebyid.h"
#include "payfine.h"

#include <QDialog>

namespace Ui {
	class librariandialog;
}

class librariandialog : public QDialog
{
	Q_OBJECT

public:
	explicit librariandialog(QWidget* parent = 0);
	~librariandialog();

private slots:
	void on_pushButton_8_clicked();

	void on_pushButton_1_clicked();

	void on_pushButton_2_clicked();

	void on_pushButton_7_clicked();

	void on_pushButton_6_clicked();

	void on_pushButton_5_clicked();

	void on_pushButton_3_clicked();

	void on_pushButton_4_clicked();

	void on_pushButton_9_clicked();

private:
	Ui::librariandialog* ui;
	librarianAddBook* newlibrarianadd;//新窗体（类）指针
	librariandeletebook* newlibriandelete;
	librarianmodifybook* newlibrianmodify;

	addBorrower* n_addBorrower;
	deleteBorrower* n_deleteBorrower;
	searchBorrower* n_searchBorrower;

	changeCodeById* newChangeCodeById;
	payFine* newPayFine;

};

#endif // LIBRARIANDIALOG_H
