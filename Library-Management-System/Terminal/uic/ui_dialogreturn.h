/********************************************************************************
** Form generated from reading UI file 'dialogreturn.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRETURN_H
#define UI_DIALOGRETURN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogReturn
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;
    QLabel *label_9;

    void setupUi(QDialog *DialogReturn)
    {
        if (DialogReturn->objectName().isEmpty())
            DialogReturn->setObjectName(QStringLiteral("DialogReturn"));
        DialogReturn->resize(841, 541);
        DialogReturn->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label = new QLabel(DialogReturn);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 70, 311, 31));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\347\255\211\347\272\277\";"));
        lineEdit = new QLineEdit(DialogReturn);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 120, 191, 31));
        pushButton = new QPushButton(DialogReturn);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 120, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\347\255\211\347\272\277\";"));
        label_2 = new QLabel(DialogReturn);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 160, 241, 61));
        tableWidget = new QTableWidget(DialogReturn);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 250, 781, 171));
        pushButton_2 = new QPushButton(DialogReturn);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 480, 93, 28));
        label_9 = new QLabel(DialogReturn);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(300, 0, 181, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));

        retranslateUi(DialogReturn);

        QMetaObject::connectSlotsByName(DialogReturn);
    } // setupUi

    void retranslateUi(QDialog *DialogReturn)
    {
        DialogReturn->setWindowTitle(QApplication::translate("DialogReturn", "\345\275\222\350\277\230\344\271\246\347\261\215", nullptr));
        label->setText(QApplication::translate("DialogReturn", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\345\275\222\350\277\230\344\271\246\347\261\215\347\274\226\345\217\267\357\274\232</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("DialogReturn", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogReturn", "\344\271\246\347\261\215id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogReturn", "\344\271\246\347\261\215\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogReturn", "\344\271\246\347\261\215\344\275\234\350\200\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogReturn", "\345\200\237\351\230\205\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogReturn", "\345\200\237\351\230\205\344\272\272", nullptr));
        pushButton_2->setText(QApplication::translate("DialogReturn", "\345\275\222\350\277\230", nullptr));
        label_9->setText(QApplication::translate("DialogReturn", "\345\275\222\350\277\230\344\271\246\347\261\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogReturn: public Ui_DialogReturn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRETURN_H
