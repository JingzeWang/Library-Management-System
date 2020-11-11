/********************************************************************************
** Form generated from reading UI file 'borrowerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWERDIALOG_H
#define UI_BORROWERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_borrowerDialog
{
public:
    QLabel *label_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_9;

    void setupUi(QDialog *borrowerDialog)
    {
        if (borrowerDialog->objectName().isEmpty())
            borrowerDialog->setObjectName(QStringLiteral("borrowerDialog"));
        borrowerDialog->resize(679, 763);
        borrowerDialog->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label_2 = new QLabel(borrowerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 50, 391, 111));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/imag/1.png);"));
        pushButton_1 = new QPushButton(borrowerDialog);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(80, 250, 141, 91));
        pushButton_1->setStyleSheet(QStringLiteral("border-image: url(:/imag/search.png);"));
        pushButton_2 = new QPushButton(borrowerDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 250, 141, 91));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/imag/borrow.png);"));
        pushButton_3 = new QPushButton(borrowerDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 250, 141, 91));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/imag/return.png);"));
        pushButton_4 = new QPushButton(borrowerDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 390, 111, 101));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/imag/bo2.png);"));
        pushButton_5 = new QPushButton(borrowerDialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(390, 380, 101, 101));
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/imag/code.png);"));
        pushButton_6 = new QPushButton(borrowerDialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 560, 101, 101));
        pushButton_6->setStyleSheet(QLatin1String("\n"
"border-image: url(:/imag/bo3.png);"));
        pushButton_7 = new QPushButton(borrowerDialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(390, 560, 101, 101));
        pushButton_7->setStyleSheet(QLatin1String("border-image: url(:/imag/bo1.png);\n"
""));
        label_10 = new QLabel(borrowerDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(400, 480, 111, 71));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label_11 = new QLabel(borrowerDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(210, 660, 111, 71));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label_12 = new QLabel(borrowerDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(400, 660, 111, 71));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label_9 = new QLabel(borrowerDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 480, 111, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));

        retranslateUi(borrowerDialog);

        QMetaObject::connectSlotsByName(borrowerDialog);
    } // setupUi

    void retranslateUi(QDialog *borrowerDialog)
    {
        borrowerDialog->setWindowTitle(QApplication::translate("borrowerDialog", "\345\200\237\351\230\205\350\200\205\357\274\214\346\254\242\350\277\216\344\275\277\347\224\250\346\234\254\347\263\273\347\273\237", nullptr));
        label_2->setText(QApplication::translate("borrowerDialog", "<html><head/><body><p><br/></p></body></html>", nullptr));
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        label_10->setText(QApplication::translate("borrowerDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_11->setText(QApplication::translate("borrowerDialog", "\345\275\223\345\211\215\345\200\237\351\230\205", nullptr));
        label_12->setText(QApplication::translate("borrowerDialog", "\345\200\237\351\230\205\345\216\206\345\217\262", nullptr));
        label_9->setText(QApplication::translate("borrowerDialog", "\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class borrowerDialog: public Ui_borrowerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERDIALOG_H
