#ifndef CURRENTBORROW_H
#define CURRENTBORROW_H

#include <QDialog>

namespace Ui {
	class currentborrow;
}

class currentborrow : public QDialog
{
	Q_OBJECT

public:
	explicit currentborrow(QWidget* parent = 0);
	~currentborrow();

private:
	Ui::currentborrow* ui;
};

#endif // CURRENTBORROW_H
