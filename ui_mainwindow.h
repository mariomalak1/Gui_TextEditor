/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionsave;
    QAction *actionall_file_to_upper;
    QAction *actionall_file_to_small;
    QAction *actionfirst_capital;
    QAction *actionEncrypt;
    QAction *actionDecrypt;
    QAction *actionclear;
    QAction *actionopen_file;
    QAction *actionsave_2;
    QAction *actionfirst_capital_2;
    QAction *actionall_upper;
    QAction *actionall_lower;
    QAction *actionencyrpt;
    QAction *actiondecrypt;
    QAction *actionEncrypt_2;
    QAction *actionDecrypt_2;
    QAction *actionempty_the_file;
    QAction *actionnumber_of_the_words;
    QAction *actionnumber_of_charactares;
    QAction *actionnumber_of_lines;
    QAction *actionfor_word;
    QAction *actioncount_number_of_times_of_word;
    QAction *actionmerge_file;
    QAction *actionSaveAs;
    QAction *actionMerge;
    QAction *actionabout;
    QAction *actionupper_case;
    QAction *actionlower_case;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuoptions;
    QMenu *menuEdit;
    QMenu *menuencryption;
    QMenu *menustatistics;
    QMenu *menusearch;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        actionall_file_to_upper = new QAction(MainWindow);
        actionall_file_to_upper->setObjectName(QString::fromUtf8("actionall_file_to_upper"));
        actionall_file_to_small = new QAction(MainWindow);
        actionall_file_to_small->setObjectName(QString::fromUtf8("actionall_file_to_small"));
        actionfirst_capital = new QAction(MainWindow);
        actionfirst_capital->setObjectName(QString::fromUtf8("actionfirst_capital"));
        actionEncrypt = new QAction(MainWindow);
        actionEncrypt->setObjectName(QString::fromUtf8("actionEncrypt"));
        actionDecrypt = new QAction(MainWindow);
        actionDecrypt->setObjectName(QString::fromUtf8("actionDecrypt"));
        actionclear = new QAction(MainWindow);
        actionclear->setObjectName(QString::fromUtf8("actionclear"));
        actionopen_file = new QAction(MainWindow);
        actionopen_file->setObjectName(QString::fromUtf8("actionopen_file"));
        actionsave_2 = new QAction(MainWindow);
        actionsave_2->setObjectName(QString::fromUtf8("actionsave_2"));
        actionfirst_capital_2 = new QAction(MainWindow);
        actionfirst_capital_2->setObjectName(QString::fromUtf8("actionfirst_capital_2"));
        actionall_upper = new QAction(MainWindow);
        actionall_upper->setObjectName(QString::fromUtf8("actionall_upper"));
        actionall_lower = new QAction(MainWindow);
        actionall_lower->setObjectName(QString::fromUtf8("actionall_lower"));
        actionencyrpt = new QAction(MainWindow);
        actionencyrpt->setObjectName(QString::fromUtf8("actionencyrpt"));
        actiondecrypt = new QAction(MainWindow);
        actiondecrypt->setObjectName(QString::fromUtf8("actiondecrypt"));
        actionEncrypt_2 = new QAction(MainWindow);
        actionEncrypt_2->setObjectName(QString::fromUtf8("actionEncrypt_2"));
        actionDecrypt_2 = new QAction(MainWindow);
        actionDecrypt_2->setObjectName(QString::fromUtf8("actionDecrypt_2"));
        actionempty_the_file = new QAction(MainWindow);
        actionempty_the_file->setObjectName(QString::fromUtf8("actionempty_the_file"));
        actionnumber_of_the_words = new QAction(MainWindow);
        actionnumber_of_the_words->setObjectName(QString::fromUtf8("actionnumber_of_the_words"));
        actionnumber_of_charactares = new QAction(MainWindow);
        actionnumber_of_charactares->setObjectName(QString::fromUtf8("actionnumber_of_charactares"));
        actionnumber_of_lines = new QAction(MainWindow);
        actionnumber_of_lines->setObjectName(QString::fromUtf8("actionnumber_of_lines"));
        actionfor_word = new QAction(MainWindow);
        actionfor_word->setObjectName(QString::fromUtf8("actionfor_word"));
        actioncount_number_of_times_of_word = new QAction(MainWindow);
        actioncount_number_of_times_of_word->setObjectName(QString::fromUtf8("actioncount_number_of_times_of_word"));
        actionmerge_file = new QAction(MainWindow);
        actionmerge_file->setObjectName(QString::fromUtf8("actionmerge_file"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionMerge = new QAction(MainWindow);
        actionMerge->setObjectName(QString::fromUtf8("actionMerge"));
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QString::fromUtf8("actionabout"));
        actionupper_case = new QAction(MainWindow);
        actionupper_case->setObjectName(QString::fromUtf8("actionupper_case"));
        actionlower_case = new QAction(MainWindow);
        actionlower_case->setObjectName(QString::fromUtf8("actionlower_case"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        horizontalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuoptions = new QMenu(menubar);
        menuoptions->setObjectName(QString::fromUtf8("menuoptions"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuencryption = new QMenu(menubar);
        menuencryption->setObjectName(QString::fromUtf8("menuencryption"));
        menustatistics = new QMenu(menubar);
        menustatistics->setObjectName(QString::fromUtf8("menustatistics"));
        menusearch = new QMenu(menubar);
        menusearch->setObjectName(QString::fromUtf8("menusearch"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuoptions->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuencryption->menuAction());
        menubar->addAction(menustatistics->menuAction());
        menubar->addAction(menusearch->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuoptions->addAction(actionopen_file);
        menuoptions->addAction(actionsave_2);
        menuoptions->addAction(actionSaveAs);
        menuoptions->addSeparator();
        menuoptions->addAction(actionMerge);
        menuEdit->addAction(actionfirst_capital_2);
        menuEdit->addAction(actionupper_case);
        menuEdit->addAction(actionlower_case);
        menuEdit->addSeparator();
        menuEdit->addAction(actionempty_the_file);
        menuencryption->addAction(actionEncrypt_2);
        menuencryption->addAction(actionDecrypt_2);
        menustatistics->addAction(actionnumber_of_the_words);
        menustatistics->addAction(actionnumber_of_charactares);
        menustatistics->addAction(actionnumber_of_lines);
        menusearch->addAction(actionfor_word);
        menusearch->addAction(actioncount_number_of_times_of_word);
        menuAbout->addAction(actionabout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        actionall_file_to_upper->setText(QCoreApplication::translate("MainWindow", "all file to upper", nullptr));
        actionall_file_to_small->setText(QCoreApplication::translate("MainWindow", "all file to small", nullptr));
        actionfirst_capital->setText(QCoreApplication::translate("MainWindow", "first capital", nullptr));
        actionEncrypt->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        actionDecrypt->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        actionclear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        actionopen_file->setText(QCoreApplication::translate("MainWindow", "open file", nullptr));
        actionsave_2->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        actionfirst_capital_2->setText(QCoreApplication::translate("MainWindow", "first capital", nullptr));
        actionall_upper->setText(QCoreApplication::translate("MainWindow", "all upper ", nullptr));
        actionall_lower->setText(QCoreApplication::translate("MainWindow", "all lower", nullptr));
        actionencyrpt->setText(QCoreApplication::translate("MainWindow", "encyrpt", nullptr));
        actiondecrypt->setText(QCoreApplication::translate("MainWindow", "decrypt", nullptr));
        actionEncrypt_2->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        actionDecrypt_2->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        actionempty_the_file->setText(QCoreApplication::translate("MainWindow", "empty the file", nullptr));
        actionnumber_of_the_words->setText(QCoreApplication::translate("MainWindow", "number of the words", nullptr));
        actionnumber_of_charactares->setText(QCoreApplication::translate("MainWindow", "number of charactares", nullptr));
        actionnumber_of_lines->setText(QCoreApplication::translate("MainWindow", "number of lines", nullptr));
        actionfor_word->setText(QCoreApplication::translate("MainWindow", "search by word", nullptr));
        actioncount_number_of_times_of_word->setText(QCoreApplication::translate("MainWindow", "count number of times of word", nullptr));
        actionmerge_file->setText(QCoreApplication::translate("MainWindow", "merge file", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionMerge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        actionabout->setText(QCoreApplication::translate("MainWindow", "about", nullptr));
        actionupper_case->setText(QCoreApplication::translate("MainWindow", "upper case", nullptr));
        actionlower_case->setText(QCoreApplication::translate("MainWindow", "lower case", nullptr));
        menuoptions->setTitle(QCoreApplication::translate("MainWindow", "options", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuencryption->setTitle(QCoreApplication::translate("MainWindow", "encryption", nullptr));
        menustatistics->setTitle(QCoreApplication::translate("MainWindow", "statistics", nullptr));
        menusearch->setTitle(QCoreApplication::translate("MainWindow", "search", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
