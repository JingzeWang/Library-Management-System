/********************************************************************************
** Form generated from reading UI file 'myinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYINFORMATION_H
#define UI_MYINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MyInformation
{
public:
    QLabel *label_3;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;

    void setupUi(QDialog *MyInformation)
    {
        if (MyInformation->objectName().isEmpty())
            MyInformation->setObjectName(QStringLiteral("MyInformation"));
        MyInformation->resize(490, 466);
        MyInformation->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label_3 = new QLabel(MyInformation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 140, 71, 21));
        label = new QLabel(MyInformation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 90, 71, 21));
        label_11 = new QLabel(MyInformation);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(160, 280, 161, 21));
        label_5 = new QLabel(MyInformation);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 190, 71, 21));
        label_9 = new QLabel(MyInformation);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 0, 111, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label_7 = new QLabel(MyInformation);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 240, 71, 21));
        label_2 = new QLabel(MyInformation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 90, 161, 21));
        label_10 = new QLabel(MyInformation);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 280, 71, 21));
        lineEdit_2 = new QLineEdit(MyInformation);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 180, 191, 31));
        lineEdit = new QLineEdit(MyInformation);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 130, 191, 31));
        lineEdit_3 = new QLineEdit(MyInformation);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 230, 191, 31));
        pushButton = new QPushButton(MyInformation);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 360, 80, 31));
        pushButton_2 = new QPushButton(MyInformation);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 360, 80, 31));
        label_4 = new QLabel(MyInformation);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(390, 90, 391, 151));

        retranslateUi(MyInformation);

        QMetaObject::connectSlotsByName(MyInformation);
    } // setupUi

    void retranslateUi(QDialog *MyInformation)
    {
        MyInformation->setWindowTitle(QApplication::translate("MyInformation", "\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
        label_3->setText(QApplication::translate("MyInformation", "\345\247\223\345\220\215\357\274\232", nullptr));
        label->setText(QApplication::translate("MyInformation", "ID\350\264\246\345\217\267\357\274\232", nullptr));
        label_11->setText(QApplication::translate("MyInformation", "\346\230\276\347\244\272\344\270\224\347\224\250\346\210\267\344\270\215\345\217\257\344\277\256\346\224\271", nullptr));
        label_5->setText(QApplication::translate("MyInformation", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_9->setText(QApplication::translate("MyInformation", "\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
        label_7->setText(QApplication::translate("MyInformation", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MyInformation", "\346\230\276\347\244\272\344\270\224\347\224\250\346\210\267\344\270\215\345\217\257\344\277\256\346\224\271", nullptr));
        label_10->setText(QApplication::translate("MyInformation", "\346\254\240\346\254\276\351\242\235\345\272\246\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("MyInformation", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QApplication::translate("MyInformation", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyInformation: public Ui_MyInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYINFORMATION_H
