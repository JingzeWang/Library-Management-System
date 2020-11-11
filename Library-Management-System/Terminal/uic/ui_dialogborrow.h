/********************************************************************************
** Form generated from reading UI file 'dialogborrow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBORROW_H
#define UI_DIALOGBORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogBorrow
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_9;

    void setupUi(QDialog *DialogBorrow)
    {
        if (DialogBorrow->objectName().isEmpty())
            DialogBorrow->setObjectName(QStringLiteral("DialogBorrow"));
        DialogBorrow->resize(762, 532);
        DialogBorrow->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label = new QLabel(DialogBorrow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 70, 321, 31));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"\347\255\211\347\272\277\";"));
        lineEdit = new QLineEdit(DialogBorrow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(240, 110, 221, 31));
        pushButton = new QPushButton(DialogBorrow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 110, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\347\255\211\347\272\277\";"));
        tableWidget = new QTableWidget(DialogBorrow);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 220, 611, 101));
        pushButton_2 = new QPushButton(DialogBorrow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 460, 93, 28));
        label_2 = new QLabel(DialogBorrow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 200, 72, 15));
        label_9 = new QLabel(DialogBorrow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(300, 0, 181, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));

        retranslateUi(DialogBorrow);

        QMetaObject::connectSlotsByName(DialogBorrow);
    } // setupUi

    void retranslateUi(QDialog *DialogBorrow)
    {
        DialogBorrow->setWindowTitle(QApplication::translate("DialogBorrow", "\345\200\237\351\230\205\344\271\246\347\261\215", nullptr));
        label->setText(QApplication::translate("DialogBorrow", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\345\200\237\351\230\205\344\271\246\347\261\215ID:</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("DialogBorrow", "\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogBorrow", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogBorrow", "\344\271\246\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogBorrow", "\345\200\237\351\230\205\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogBorrow", "isbn", nullptr));
        pushButton_2->setText(QApplication::translate("DialogBorrow", "\345\200\237\351\230\205", nullptr));
        label_2->setText(QApplication::translate("DialogBorrow", "\346\237\245\350\257\242\347\273\223\346\236\234\357\274\232", nullptr));
        label_9->setText(QApplication::translate("DialogBorrow", "\345\200\237\351\230\205\344\271\246\347\261\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogBorrow: public Ui_DialogBorrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBORROW_H
