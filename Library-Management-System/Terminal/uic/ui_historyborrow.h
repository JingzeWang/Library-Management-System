/********************************************************************************
** Form generated from reading UI file 'historyborrow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYBORROW_H
#define UI_HISTORYBORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_historyborrow
{
public:
    QLabel *label_9;
    QTableWidget *tableWidget;

    void setupUi(QDialog *historyborrow)
    {
        if (historyborrow->objectName().isEmpty())
            historyborrow->setObjectName(QStringLiteral("historyborrow"));
        historyborrow->resize(764, 637);
        historyborrow->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label_9 = new QLabel(historyborrow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(360, 10, 111, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        tableWidget = new QTableWidget(historyborrow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 90, 681, 521));

        retranslateUi(historyborrow);

        QMetaObject::connectSlotsByName(historyborrow);
    } // setupUi

    void retranslateUi(QDialog *historyborrow)
    {
        historyborrow->setWindowTitle(QApplication::translate("historyborrow", "\345\200\237\351\230\205\345\216\206\345\217\262", nullptr));
        label_9->setText(QApplication::translate("historyborrow", "\345\200\237\351\230\205\345\216\206\345\217\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class historyborrow: public Ui_historyborrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYBORROW_H
