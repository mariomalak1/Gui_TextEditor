/********************************************************************************
** Form generated from reading UI file 'count_times.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNT_TIMES_H
#define UI_COUNT_TIMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_count_times
{
public:
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *count_times)
    {
        if (count_times->objectName().isEmpty())
            count_times->setObjectName(QString::fromUtf8("count_times"));
        count_times->resize(400, 300);
        label_2 = new QLabel(count_times);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 381, 16));
        widget = new QWidget(count_times);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 391, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(count_times);

        QMetaObject::connectSlotsByName(count_times);
    } // setupUi

    void retranslateUi(QDialog *count_times)
    {
        count_times->setWindowTitle(QCoreApplication::translate("count_times", "Dialog", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("count_times", "enter word", nullptr));
        pushButton->setText(QCoreApplication::translate("count_times", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class count_times: public Ui_count_times {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNT_TIMES_H
