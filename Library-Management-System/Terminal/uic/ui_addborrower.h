/********************************************************************************
** Form generated from reading UI file 'addborrower.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBORROWER_H
#define UI_ADDBORROWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addBorrower
{
public:
    QLabel *label;
    QPushButton *okButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;

    void setupUi(QDialog *addBorrower)
    {
        if (addBorrower->objectName().isEmpty())
            addBorrower->setObjectName(QStringLiteral("addBorrower"));
        addBorrower->resize(550, 426);
        addBorrower->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label = new QLabel(addBorrower);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 20, 131, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        okButton = new QPushButton(addBorrower);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(260, 340, 89, 24));
        pushButton_2 = new QPushButton(addBorrower);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 340, 89, 24));
        horizontalLayoutWidget_2 = new QWidget(addBorrower);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(120, 90, 231, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalLayoutWidget_3 = new QWidget(addBorrower);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(120, 130, 231, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        horizontalLayoutWidget_4 = new QWidget(addBorrower);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(120, 170, 231, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(horizontalLayoutWidget_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);

        horizontalLayoutWidget_5 = new QWidget(addBorrower);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(120, 210, 231, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(horizontalLayoutWidget_5);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_5->addWidget(lineEdit_5);

        label_6 = new QLabel(addBorrower);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 280, 72, 15));
#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(lineEdit_2);
        label_3->setBuddy(lineEdit_3);
        label_4->setBuddy(lineEdit_4);
        label_5->setBuddy(lineEdit_5);
#endif // QT_NO_SHORTCUT

        retranslateUi(addBorrower);

        QMetaObject::connectSlotsByName(addBorrower);
    } // setupUi

    void retranslateUi(QDialog *addBorrower)
    {
        addBorrower->setWindowTitle(QApplication::translate("addBorrower", "\346\267\273\345\212\240\350\257\273\350\200\205", nullptr));
        label->setText(QApplication::translate("addBorrower", "\346\267\273\345\212\240\350\257\273\350\200\205", nullptr));
        okButton->setText(QApplication::translate("addBorrower", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("addBorrower", "\345\205\263\351\227\255", nullptr));
        label_2->setText(QApplication::translate("addBorrower", "Name", nullptr));
        label_3->setText(QApplication::translate("addBorrower", "Code", nullptr));
        label_4->setText(QApplication::translate("addBorrower", "Age ", nullptr));
        label_5->setText(QApplication::translate("addBorrower", "Gender", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addBorrower: public Ui_addBorrower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBORROWER_H
