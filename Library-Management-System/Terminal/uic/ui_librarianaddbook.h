/********************************************************************************
** Form generated from reading UI file 'librarianaddbook.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIANADDBOOK_H
#define UI_LIBRARIANADDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_librarianAddBook
{
public:
    QTextEdit *textEdit;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget_2;

    void setupUi(QDialog *librarianAddBook)
    {
        if (librarianAddBook->objectName().isEmpty())
            librarianAddBook->setObjectName(QStringLiteral("librarianAddBook"));
        librarianAddBook->resize(1643, 689);
        textEdit = new QTextEdit(librarianAddBook);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 20, 721, 151));
        tableWidget = new QTableWidget(librarianAddBook);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 230, 1131, 331));
        pushButton = new QPushButton(librarianAddBook);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 190, 93, 28));
        pushButton_2 = new QPushButton(librarianAddBook);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 190, 93, 28));
        pushButton_3 = new QPushButton(librarianAddBook);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 580, 151, 28));
        tableWidget_2 = new QTableWidget(librarianAddBook);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(1240, 230, 281, 331));

        retranslateUi(librarianAddBook);

        QMetaObject::connectSlotsByName(librarianAddBook);
    } // setupUi

    void retranslateUi(QDialog *librarianAddBook)
    {
        librarianAddBook->setWindowTitle(QApplication::translate("librarianAddBook", "\346\267\273\345\212\240\344\271\246\347\261\215", nullptr));
        textEdit->setHtml(QApplication::translate("librarianAddBook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\346\211\271\351\207\217\346\267\273\345\212\240\344\271\246\347\261\215</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\346\263\250\346\204\217\344\272\213\351\241\271\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\246\202\344\270\213\350\241\250\346\211\200\347\244\272\357\274\214\351\246"
                        "\226\345\205\210\350\257\267\351\200\211\346\213\251\345\245\275\344\275\240\350\246\201\346\267\273\345\212\240\347\232\204\344\271\246\347\261\215\347\261\273\345\236\213</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\246\202\346\236\234\344\275\240\350\246\201\346\267\273\345\212\240\347\232\204\344\271\246\347\261\215\346\230\257<span style=\" font-weight:600; text-decoration: underline;\">\345\267\262\347\273\217\345\255\230\345\234\250</span>\347\232\204\344\271\246\347\261\215\357\274\214\350\257\267\345\234\250\347\261\273\345\236\213\344\270\255\351\200\211\346\213\251\343\200\220A\343\200\221\357\274\214\346\255\244\346\227\266\345\217\252\351\234\200\350\246\201\345\241\253\345\206\231isbn\345\222\214\346\225\260\351\207\217\345\215\263\345\217\257</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\246\202\346\236\234\344\275\240\350"
                        "\246\201\346\267\273\345\212\240\347\232\204\344\271\246\347\261\215\346\230\257\344\270\200\347\247\215<span style=\" font-weight:600; text-decoration: underline;\">\345\205\250\346\226\260</span>\347\232\204\344\271\246\347\261\215\357\274\214\350\257\267\345\234\250\347\261\273\345\236\213\344\270\255\351\200\211\346\213\251\343\200\220B\343\200\221\357\274\214\346\255\244\346\227\266\350\257\267\345\241\253\345\206\231\345\245\275\345\205\250\351\203\250\347\232\204\345\277\205\350\246\201\344\277\241\346\201\257</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\246\202\346\236\234\344\275\240\351\234\200\350\246\201\346\267\273\345\212\240\346\210\226\350\200\205\345\210\240\351\231\244\344\270\200\350\241\214\357\274\214\350\257\267\347\202\271\345\207\273\343\200\220\346\267\273\345\212\240\350\241\214\343\200\221\346\210\226\343\200\220\345\210\240\351\231\244\350\241\214\343\200\221\346\214\211\351\222\256\357\274\214\346"
                        "\263\250\346\204\217\347\202\271\345\207\273\345\210\240\351\231\244\350\241\214\344\271\213\345\211\215\350\246\201\351\200\211\346\213\251\344\275\240\350\246\201\345\210\240\351\231\244\347\232\204\350\241\214\357\274\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\205\250\351\203\250\344\277\241\346\201\257\346\255\243\347\241\256\345\241\253\345\206\231\345\220\216\357\274\214\350\257\267\347\202\271\345\207\273\346\217\220\344\272\244</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\210\221\344\273\254\344\274\232\345\260\206\346\257\217\344\270\200\346\234\254\344\271\246\347\232\204id\350\277\224\345\233\236\347\273\231\344\275\240\357\274\214\350\257\267\347\205\247\346\255\244\344\277\241\346\201\257\350\264\264\345\245\275\344\271\246\347\255\276\357\274\214\345\246\202\346\236\234\346\262\241\346\234\211\350\256\260\344\275\217"
                        "\345\217\257\344\273\245\344\273\216\346\237\245\350\257\242\344\271\246\347\261\215\345\244\204\345\206\215\346\254\241\346\237\245\350\257\242</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("librarianAddBook", "*\346\267\273\345\212\240\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("librarianAddBook", "*isbn", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("librarianAddBook", "*\346\267\273\345\212\240\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("librarianAddBook", "\344\271\246\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("librarianAddBook", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("librarianAddBook", "\344\275\234\350\200\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("librarianAddBook", "\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("librarianAddBook", "\345\255\227\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("librarianAddBook", "\351\241\265\346\225\260", nullptr));
        pushButton->setText(QApplication::translate("librarianAddBook", "\346\267\273\345\212\240\350\241\214", nullptr));
        pushButton_2->setText(QApplication::translate("librarianAddBook", "\345\210\240\351\231\244\350\241\214", nullptr));
        pushButton_3->setText(QApplication::translate("librarianAddBook", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("librarianAddBook", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("librarianAddBook", "\344\271\246\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class librarianAddBook: public Ui_librarianAddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIANADDBOOK_H
