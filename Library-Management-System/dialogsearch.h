#ifndef DIALOGSEARCH_H
#define DIALOGSEARCH_H

#include <QDialog>

namespace Ui {
	class DialogSearch;
}

class DialogSearch : public QDialog
{
	Q_OBJECT

public:
	explicit DialogSearch(QWidget* parent = 0);
	~DialogSearch();

private slots:
	void on_pushButton_clicked();

private:
	Ui::DialogSearch* ui;
};

#endif // DIALOGSEARCH_H
