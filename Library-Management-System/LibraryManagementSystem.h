#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LibraryManagementSystem.h"

class LibraryManagementSystem : public QMainWindow
{
    Q_OBJECT

public:
    LibraryManagementSystem(QWidget *parent = Q_NULLPTR);

private:
    Ui::LibraryManagementSystemClass ui;
};
