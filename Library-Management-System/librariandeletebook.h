#ifndef LIBRARIANDELETEBOOK_H
#define LIBRARIANDELETEBOOK_H

#include <QDialog>

namespace Ui {
	class librariandeletebook;
}

class librariandeletebook : public QDialog
{
	Q_OBJECT

public:
	explicit librariandeletebook(QWidget* parent = 0);
	~librariandeletebook();

private:
	Ui::librariandeletebook* ui;
private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
};

#endif // LIBRARIANDELETEBOOK_H
