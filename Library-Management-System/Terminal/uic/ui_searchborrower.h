/********************************************************************************
** Form generated from reading UI file 'searchborrower.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBORROWER_H
#define UI_SEARCHBORROWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchBorrower
{
public:
    QLabel *label;
    QPushButton *okButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_5;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_7;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label_12;

    void setupUi(QDialog *searchBorrower)
    {
        if (searchBorrower->objectName().isEmpty())
            searchBorrower->setObjectName(QStringLiteral("searchBorrower"));
        searchBorrower->resize(627, 493);
        searchBorrower->setStyleSheet(QStringLiteral("background-color: rgb(158, 216, 255);"));
        label = new QLabel(searchBorrower);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 72, 15));
        okButton = new QPushButton(searchBorrower);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(310, 80, 89, 24));
        pushButton_2 = new QPushButton(searchBorrower);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 390, 89, 24));
        lineEdit = new QLineEdit(searchBorrower);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 80, 131, 23));
        horizontalLayoutWidget = new QWidget(searchBorrower);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 130, 160, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        horizontalLayoutWidget_2 = new QWidget(searchBorrower);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 170, 160, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        horizontalLayoutWidget_3 = new QWidget(searchBorrower);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 210, 160, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_7 = new QLabel(horizontalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        horizontalLayoutWidget_4 = new QWidget(searchBorrower);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(20, 250, 160, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(horizontalLayoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        label_9 = new QLabel(horizontalLayoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        horizontalLayoutWidget_5 = new QWidget(searchBorrower);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(20, 290, 160, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(horizontalLayoutWidget_5);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        label_11 = new QLabel(horizontalLayoutWidget_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_5->addWidget(label_11);

        pushButton = new QPushButton(searchBorrower);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 80, 161, 24));
        tableView = new QTableView(searchBorrower);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(220, 140, 391, 192));
        label_12 = new QLabel(searchBorrower);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(290, 0, 181, 61));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(48, 60, 175);\n"
"font: 87 9pt \"Arial\";\n"
"font: 14pt \"Arial\";\n"
"font: 10pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"font: 11pt \"Arial\";\n"
"font: 11pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";"));

        retranslateUi(searchBorrower);

        QMetaObject::connectSlotsByName(searchBorrower);
    } // setupUi

    void retranslateUi(QDialog *searchBorrower)
    {
        searchBorrower->setWindowTitle(QApplication::translate("searchBorrower", "\346\237\245\346\211\276\350\257\273\350\200\205", nullptr));
        label->setText(QApplication::translate("searchBorrower", "searchID", nullptr));
        okButton->setText(QApplication::translate("searchBorrower", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QApplication::translate("searchBorrower", "\345\205\263\351\227\255", nullptr));
        label_2->setText(QApplication::translate("searchBorrower", "Id:", nullptr));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("searchBorrower", "Name:", nullptr));
        label_6->setText(QString());
        label_4->setText(QApplication::translate("searchBorrower", "Age:", nullptr));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("searchBorrower", "Gender:", nullptr));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("searchBorrower", "Money:", nullptr));
        label_11->setText(QString());
        pushButton->setText(QApplication::translate("searchBorrower", "\346\237\245\350\257\242\345\200\237\351\230\205\345\216\206\345\217\262\357\274\237", nullptr));
        label_12->setText(QApplication::translate("searchBorrower", "\346\237\245\346\211\276\350\257\273\350\200\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchBorrower: public Ui_searchBorrower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBORROWER_H
