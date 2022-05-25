/********************************************************************************
** Form generated from reading UI file 'search_word.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_WORD_H
#define UI_SEARCH_WORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search_word
{
public:
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *search_word)
    {
        if (search_word->objectName().isEmpty())
            search_word->setObjectName(QString::fromUtf8("search_word"));
        search_word->resize(568, 300);
        label_2 = new QLabel(search_word);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 301, 16));
        widget = new QWidget(search_word);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 541, 56));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 2, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 2, 1);


        retranslateUi(search_word);

        QMetaObject::connectSlotsByName(search_word);
    } // setupUi

    void retranslateUi(QDialog *search_word)
    {
        search_word->setWindowTitle(QCoreApplication::translate("search_word", "Dialog", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("search_word", "enter the word to search", nullptr));
        pushButton->setText(QCoreApplication::translate("search_word", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search_word: public Ui_search_word {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_WORD_H
