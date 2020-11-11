/********************************************************************************
** Form generated from reading UI file 'librariandeletebook.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIANDELETEBOOK_H
#define UI_LIBRARIANDELETEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_librariandeletebook
{
public:
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QLabel *label_9;

    void setupUi(QDialog *librariandeletebook)
    {
        if (librariandeletebook->objectName().isEmpty())
            librariandeletebook->setObjectName(QStringLiteral("librariandeletebook"));
        librariandeletebook->resize(874, 425);
        librariandeletebook->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label_4 = new QLabel(librariandeletebook);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 200, 241, 61));
        pushButton_2 = new QPushButton(librariandeletebook);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 360, 93, 28));
        label_5 = new QLabel(librariandeletebook);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 90, 311, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 15pt \"\347\255\211\347\272\277\";"));
        tableWidget = new QTableWidget(librariandeletebook);
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
        tableWidget->setGeometry(QRect(40, 190, 791, 161));
        lineEdit_4 = new QLineEdit(librariandeletebook);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(240, 140, 191, 31));
        pushButton = new QPushButton(librariandeletebook);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 140, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\347\255\211\347\272\277\";"));
        label_9 = new QLabel(librariandeletebook);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(310, 0, 181, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));

        retranslateUi(librariandeletebook);

        QMetaObject::connectSlotsByName(librariandeletebook);
    } // setupUi

    void retranslateUi(QDialog *librariandeletebook)
    {
        librariandeletebook->setWindowTitle(QApplication::translate("librariandeletebook", "\345\210\240\351\231\244\344\271\246\347\261\215", nullptr));
        label_4->setText(QApplication::translate("librariandeletebook", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\345\210\240\351\231\244\344\271\246\347\261\215id\357\274\232</span></p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("librariandeletebook", "\345\210\240\351\231\244", nullptr));
        label_5->setText(QApplication::translate("librariandeletebook", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\345\210\240\351\231\244\344\271\246\347\261\215id\357\274\232</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("librariandeletebook", "\344\271\246\347\261\215id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("librariandeletebook", "\344\271\246\347\261\215\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("librariandeletebook", "\344\271\246\347\261\215\344\275\234\350\200\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("librariandeletebook", "\345\200\237\351\230\205\347\212\266\346\200\201", nullptr));
        pushButton->setText(QApplication::translate("librariandeletebook", "\346\237\245\350\257\242", nullptr));
        label_9->setText(QApplication::translate("librariandeletebook", "\345\210\240\351\231\244\344\271\246\347\261\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class librariandeletebook: public Ui_librariandeletebook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIANDELETEBOOK_H
