/********************************************************************************
** Form generated from reading UI file 'borrowerinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWERINFORMATION_H
#define UI_BORROWERINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_borrowerInformation
{
public:
    QLabel *label_9;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *borrowerInformation)
    {
        if (borrowerInformation->objectName().isEmpty())
            borrowerInformation->setObjectName(QStringLiteral("borrowerInformation"));
        borrowerInformation->resize(400, 300);
        borrowerInformation->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label_9 = new QLabel(borrowerInformation);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(170, 0, 111, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label = new QLabel(borrowerInformation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 71, 21));
        label_2 = new QLabel(borrowerInformation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 80, 101, 21));
        label_3 = new QLabel(borrowerInformation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 110, 71, 21));
        label_5 = new QLabel(borrowerInformation);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 140, 71, 21));
        label_7 = new QLabel(borrowerInformation);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 170, 71, 21));
        label_10 = new QLabel(borrowerInformation);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 200, 71, 21));
        label_11 = new QLabel(borrowerInformation);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(190, 200, 91, 21));
        lineEdit = new QLineEdit(borrowerInformation);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 110, 113, 20));
        lineEdit_2 = new QLineEdit(borrowerInformation);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 140, 113, 20));
        lineEdit_3 = new QLineEdit(borrowerInformation);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 170, 113, 20));
        pushButton = new QPushButton(borrowerInformation);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 250, 71, 21));

        retranslateUi(borrowerInformation);

        QMetaObject::connectSlotsByName(borrowerInformation);
    } // setupUi

    void retranslateUi(QDialog *borrowerInformation)
    {
        borrowerInformation->setWindowTitle(QApplication::translate("borrowerInformation", "\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
        label_9->setText(QApplication::translate("borrowerInformation", "\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("borrowerInformation", "ID\350\264\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("borrowerInformation", "\346\230\276\347\244\272\344\270\224\347\224\250\346\210\267\344\270\215\345\217\257\344\277\256\346\224\271", nullptr));
        label_3->setText(QApplication::translate("borrowerInformation", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_5->setText(QApplication::translate("borrowerInformation", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_7->setText(QApplication::translate("borrowerInformation", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_10->setText(QApplication::translate("borrowerInformation", "\346\254\240\346\254\276\351\242\235\345\272\246\357\274\232", nullptr));
        label_11->setText(QApplication::translate("borrowerInformation", "\346\230\276\347\244\272\344\270\224\347\224\250\346\210\267\344\270\215\345\217\257\344\277\256\346\224\271", nullptr));
        pushButton->setText(QApplication::translate("borrowerInformation", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class borrowerInformation: public Ui_borrowerInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERINFORMATION_H
