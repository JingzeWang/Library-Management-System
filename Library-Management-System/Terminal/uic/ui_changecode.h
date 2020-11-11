/********************************************************************************
** Form generated from reading UI file 'changecode.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECODE_H
#define UI_CHANGECODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changecode
{
public:
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *changecode)
    {
        if (changecode->objectName().isEmpty())
            changecode->setObjectName(QStringLiteral("changecode"));
        changecode->resize(627, 478);
        changecode->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        lineEdit = new QLineEdit(changecode);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 130, 261, 31));
        label_2 = new QLabel(changecode);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 200, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        label_9 = new QLabel(changecode);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(280, 0, 111, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        lineEdit_2 = new QLineEdit(changecode);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 200, 261, 31));
        label = new QLabel(changecode);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 130, 91, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        lineEdit_3 = new QLineEdit(changecode);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(210, 270, 261, 31));
        pushButton = new QPushButton(changecode);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 340, 81, 31));
        label_3 = new QLabel(changecode);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 260, 101, 51));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));

        retranslateUi(changecode);

        QMetaObject::connectSlotsByName(changecode);
    } // setupUi

    void retranslateUi(QDialog *changecode)
    {
        changecode->setWindowTitle(QApplication::translate("changecode", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_2->setText(QApplication::translate("changecode", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_9->setText(QApplication::translate("changecode", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label->setText(QApplication::translate("changecode", "\346\227\247\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("changecode", "\347\241\256\345\256\232", nullptr));
        label_3->setText(QApplication::translate("changecode", "\347\241\256\345\256\232\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changecode: public Ui_changecode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECODE_H
