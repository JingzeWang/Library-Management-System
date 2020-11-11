/********************************************************************************
** Form generated from reading UI file 'dialogsearch.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSEARCH_H
#define UI_DIALOGSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSearch
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_9;

    void setupUi(QDialog *DialogSearch)
    {
        if (DialogSearch->objectName().isEmpty())
            DialogSearch->setObjectName(QStringLiteral("DialogSearch"));
        DialogSearch->resize(773, 553);
        DialogSearch->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label = new QLabel(DialogSearch);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 70, 371, 41));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"\347\255\211\347\272\277\";"));
        pushButton = new QPushButton(DialogSearch);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 120, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\347\255\211\347\272\277\";"));
        lineEdit = new QLineEdit(DialogSearch);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 120, 201, 31));
        label_2 = new QLabel(DialogSearch);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 10, 311, 61));
        tableWidget = new QTableWidget(DialogSearch);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 180, 661, 331));
        label_9 = new QLabel(DialogSearch);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(310, 0, 181, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));

        retranslateUi(DialogSearch);

        QMetaObject::connectSlotsByName(DialogSearch);
    } // setupUi

    void retranslateUi(QDialog *DialogSearch)
    {
        DialogSearch->setWindowTitle(QApplication::translate("DialogSearch", "\346\237\245\346\211\276\344\271\246\347\261\215", nullptr));
        label->setText(QApplication::translate("DialogSearch", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\344\275\240\350\246\201\346\237\245\346\211\276\347\232\204\344\271\246\345\220\215</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("DialogSearch", "\347\241\256\345\256\232", nullptr));
        label_2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogSearch", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogSearch", "\344\271\246\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogSearch", "\345\200\237\351\230\205\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogSearch", "\344\275\234\350\200\205", nullptr));
        label_9->setText(QApplication::translate("DialogSearch", "\346\237\245\346\211\276\344\271\246\347\261\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSearch: public Ui_DialogSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSEARCH_H
