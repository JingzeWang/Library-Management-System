/********************************************************************************
** Form generated from reading UI file 'currentborrow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTBORROW_H
#define UI_CURRENTBORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_currentborrow
{
public:
    QLabel *label_9;
    QTableWidget *tableWidget;

    void setupUi(QDialog *currentborrow)
    {
        if (currentborrow->objectName().isEmpty())
            currentborrow->setObjectName(QStringLiteral("currentborrow"));
        currentborrow->resize(786, 857);
        currentborrow->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label_9 = new QLabel(currentborrow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(370, 10, 111, 71));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));
        tableWidget = new QTableWidget(currentborrow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 90, 721, 631));

        retranslateUi(currentborrow);

        QMetaObject::connectSlotsByName(currentborrow);
    } // setupUi

    void retranslateUi(QDialog *currentborrow)
    {
        currentborrow->setWindowTitle(QApplication::translate("currentborrow", "\345\275\223\345\211\215\345\200\237\351\230\205", nullptr));
        label_9->setText(QApplication::translate("currentborrow", "\345\275\223\345\211\215\345\200\237\351\230\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class currentborrow: public Ui_currentborrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTBORROW_H
