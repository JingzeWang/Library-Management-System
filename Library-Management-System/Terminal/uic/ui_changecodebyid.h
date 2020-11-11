/********************************************************************************
** Form generated from reading UI file 'changecodebyid.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECODEBYID_H
#define UI_CHANGECODEBYID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changeCodeById
{
public:
    QPushButton *pushButton;
    QLabel *label_9;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *changeCodeById)
    {
        if (changeCodeById->objectName().isEmpty())
            changeCodeById->setObjectName(QStringLiteral("changeCodeById"));
        changeCodeById->resize(630, 496);
        changeCodeById->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        pushButton = new QPushButton(changeCodeById);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 380, 81, 31));
        label_9 = new QLabel(changeCodeById);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(260, 0, 111, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label_3 = new QLabel(changeCodeById);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 270, 101, 51));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        lineEdit_3 = new QLineEdit(changeCodeById);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 280, 261, 31));
        label_2 = new QLabel(changeCodeById);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 190, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        lineEdit_2 = new QLineEdit(changeCodeById);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 190, 261, 31));
        label_4 = new QLabel(changeCodeById);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 100, 91, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        lineEdit_4 = new QLineEdit(changeCodeById);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 100, 261, 31));

        retranslateUi(changeCodeById);

        QMetaObject::connectSlotsByName(changeCodeById);
    } // setupUi

    void retranslateUi(QDialog *changeCodeById)
    {
        changeCodeById->setWindowTitle(QApplication::translate("changeCodeById", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        pushButton->setText(QApplication::translate("changeCodeById", "\347\241\256\345\256\232", nullptr));
        label_9->setText(QApplication::translate("changeCodeById", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("changeCodeById", "\347\241\256\345\256\232\345\257\206\347\240\201\357\274\232", nullptr));
        label_2->setText(QApplication::translate("changeCodeById", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QApplication::translate("changeCodeById", "\350\264\246\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changeCodeById: public Ui_changeCodeById {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECODEBYID_H
