#ifndef HISTORYBORROW_H
#define HISTORYBORROW_H

#include <QDialog>

namespace Ui {
	class historyborrow;
}

class historyborrow : public QDialog
{
	Q_OBJECT

public:
	explicit historyborrow(QWidget* parent = 0);
	~historyborrow();

private:
	Ui::historyborrow* ui;
};

#endif // HISTORYBORROW_H
