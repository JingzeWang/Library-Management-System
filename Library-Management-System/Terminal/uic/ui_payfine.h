/********************************************************************************
** Form generated from reading UI file 'payfine.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYFINE_H
#define UI_PAYFINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_payFine
{
public:
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label_5;

    void setupUi(QDialog *payFine)
    {
        if (payFine->objectName().isEmpty())
            payFine->setObjectName(QStringLiteral("payFine"));
        payFine->resize(555, 546);
        payFine->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label_9 = new QLabel(payFine);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(240, 0, 111, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        lineEdit = new QLineEdit(payFine);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 100, 261, 31));
        label_2 = new QLabel(payFine);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 300, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label = new QLabel(payFine);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 100, 91, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        lineEdit_2 = new QLineEdit(payFine);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 300, 261, 31));
        label_3 = new QLabel(payFine);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 180, 151, 71));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label_4 = new QLabel(payFine);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 200, 311, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label_6 = new QLabel(payFine);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 240, 251, 51));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        pushButton = new QPushButton(payFine);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 430, 81, 31));
        label_5 = new QLabel(payFine);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 340, 591, 71));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));

        retranslateUi(payFine);

        QMetaObject::connectSlotsByName(payFine);
    } // setupUi

    void retranslateUi(QDialog *payFine)
    {
        payFine->setWindowTitle(QApplication::translate("payFine", "\347\274\264\347\272\263\347\275\232\346\254\276", nullptr));
        label_9->setText(QApplication::translate("payFine", "\347\274\264\347\272\263\347\275\232\346\254\276", nullptr));
        label_2->setText(QApplication::translate("payFine", "\347\274\264\347\272\263\351\222\261\346\225\260\357\274\232", nullptr));
        label->setText(QApplication::translate("payFine", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("payFine", "\345\275\223\345\211\215\346\254\240\346\254\276\357\274\232", nullptr));
        label_4->setText(QApplication::translate("payFine", "\346\230\276\347\244\272\344\275\231\351\242\235\346\210\226\345\255\230\346\254\276", nullptr));
        label_6->setText(QApplication::translate("payFine", "(<0\350\241\250\347\244\272\346\234\211\344\275\231\351\242\235)", nullptr));
        pushButton->setText(QApplication::translate("payFine", "\347\241\256\345\256\232", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class payFine: public Ui_payFine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYFINE_H
