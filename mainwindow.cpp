#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "search_word.h"
#include "count_times.h"
#include <QString>
#include <QMessageBox>
#include <cctype>
#include <iostream>
#include <QVector>
#include <QStringList>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::on_actionall_file_to_upper_triggered(){
//    qDebug() << "mario";
//    QString text = ui->plainTextEdit->toPlainText();
//    ui->plainTextEdit->clear();
//    ui->plainTextEdit->appendPlainText(text.toUpper());
//    ui->statusbar->showMessage("the file content is upper case");
//}
QVector <QString> allwords_vec(QString all_words){
    QString word;
    QVector <QString> vect;
    for(int i = 0; i < all_words.length(); i++){
        word += all_words[i];
        if(!(i == (all_words.length())-1)){
            if((all_words[i] == ' ') || (all_words[i + 1] == '\n')){
                if(all_words[i + 1] == '\n'){
                    vect.push_back(word);
                    vect.push_back("\n");
                    ++i;
                    word = "";
                }else{
                    vect.push_back(word);
                    word = "";
                }
            }
        }
    }
    vect.push_back(word);
    word = "";
    return vect;
}
QString cap_first(QString text){
    QString first_text;
    for(int i = 0; i < text.length(); i++){
        if(i == 0){
            first_text += text[i].toUpper();
        }else{
            first_text += text[i].toLower();
        }
    }
    return first_text;
}
void MainWindow::on_actionfirst_capital_2_triggered()
{
    QString text = ui->plainTextEdit->toPlainText();
    QString edit_text;
    QVector<QString> vect = allwords_vec(text);
    for(int i = 0; i < vect.length(); i++){
        edit_text += cap_first(vect[i]);
    }
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(edit_text);
    ui->statusbar->showMessage("first character of each word is capital");
}
//void MainWindow::on_actionall_file_to_small_triggered()
//{
//    QString text = ui->plainTextEdit->toPlainText();
//    ui->plainTextEdit->clear();
//    ui->plainTextEdit->appendPlainText(text.toLower());
//    ui->statusbar->showMessage("the file content is in lower case");
//}
QString EncryptText(QString text){
    QString text_enc;
    QChar ch ;
    int v_latin;
    for(int i = 0; i < text.length(); i++){
      ch = text.at(i);
      v_latin = (ch.toLatin1()) + 1;
      ch = (QChar)v_latin;
      text_enc += ch;
    }
    return text_enc;
}
QString DecryptText(QString text){
    QString text_dec;
    QChar ch ;
    int v_latin;
    for(int i = 0; i < text.length(); i++){
      ch = text.at(i);
      v_latin = (ch.toLatin1()) - 1;
      ch = (QChar)v_latin;
      text_dec += ch;
    }
    return text_dec;
}
void MainWindow::on_actionEncrypt_2_triggered()
{
    QString text = ui->plainTextEdit->toPlainText();
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(EncryptText(text));
    ui->statusbar->showMessage("the file content is encrypted");

}
void MainWindow::on_actionDecrypt_2_triggered()
{
    QString text = ui->plainTextEdit->toPlainText();
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText(DecryptText(text));
    ui->statusbar->showMessage("the file content is encrypted");
}
void MainWindow::on_actionempty_the_file_triggered()
{
    QString text = ui->plainTextEdit->toPlainText();
    ui->plainTextEdit->clear();
    ui->statusbar->showMessage("the file content is cleared");
}
void MainWindow::on_actionnumber_of_lines_triggered()
{
    int num_lines = 0;
    QString text = ui->plainTextEdit->toPlainText();
    QVector <QString> vect =  allwords_vec(text);
    for(int i = 0; i < vect.length(); i++){
        if(vect[i] == "\n"){
            num_lines += 1;
        }
    }
    num_lines += 1;
    QString str = QString::number(num_lines);
    ui->statusbar->showMessage("the number of lines equal " + str);
}
void MainWindow::on_actionnumber_of_the_words_triggered()
{
    int num_words = 0;
    QString text = ui->plainTextEdit->toPlainText();
    QVector <QString> vect =  allwords_vec(text);
    for(int i = 0; i < vect.length(); i++){
        if(!(vect[i] == "\n")){
            num_words += 1;
        }
    }
    QString str = QString::number(num_words);
    ui->statusbar->showMessage("the number of words equal " + str);
}


void MainWindow::on_actionnumber_of_charactares_triggered()
{
    int num_char = 0;
    QString text = ui->plainTextEdit->toPlainText();
    QVector <QString> vect =  allwords_vec(text);
    for(int i = 0; i < vect.length(); i++){
        for(int j = 0; j < (vect[i]).length(); j++){
            num_char += 1;
        }
    }
    QString str = QString::number(num_char);
    ui->statusbar->showMessage("the number of characters equal " + str);
}


void MainWindow::on_actionfor_word_triggered(){
    QString text = ui->plainTextEdit->toPlainText();
    QVector <QString> vect =  allwords_vec(text);
    search_word search(vect);
    search.setModal(true);
    search.exec();

}

//    QStringList result;
//        result << vect[i];
//    result = list.filter();

void MainWindow::on_actionopen_file_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this,"open the file");
    file_path = file_name;
    QFile file(file_name);
    if(!(file.open(QFile::ReadOnly | QFile::Text))){
        QMessageBox :: warning(this, "..", "file is not open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
}


void MainWindow::on_actionsave_2_triggered()
{
    QFile file(file_path);
    if(!(file.open(QFile::WriteOnly | QFile::Text))){
        QMessageBox :: warning(this, "..", "file is not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui-> plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

}


void MainWindow::on_actionSaveAs_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this,"open the file");
    file_path = file_name;
    QFile file(file_name);
    if(!(file.open(QFile::WriteOnly | QFile::Text))){
        QMessageBox :: warning(this, "..", "file is not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui-> plainTextEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

}


void MainWindow::on_actionMerge_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this,"open the file");
    QString text_old;
    file_path = file_name;
    QFile file(file_name);
    if(!(file.open(QFile::ReadOnly | QFile::Text))){
        QMessageBox :: warning(this, "..", "file is not open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    file.close();
    text_old = ui->plainTextEdit->toPlainText();
    text_old += text;
    ui->plainTextEdit->setPlainText(text_old);

}


void MainWindow::on_actionabout_triggered()
{
    QString text = "Auther : Mario Malak\n";
    text += "in Assignment 4 Dr.mohamed ElRamly\n";
    text += "Date of creation : 2022/5/14";
    QMessageBox ::about(this,"About Notepad",text);
}


void MainWindow::on_actioncount_number_of_times_of_word_triggered()
{
    QString text = ui->plainTextEdit->toPlainText();
    QVector <QString> vect =  allwords_vec(text);
        qDebug() << "mariobefore";
    count_times times_count(vect);
    times_count.setModal(true);
    times_count.exec();
}


void MainWindow::on_actionupper_case_triggered()
{
        qDebug() << "mario";
        QString text = ui->plainTextEdit->toPlainText();
        ui->plainTextEdit->clear();
        ui->plainTextEdit->appendPlainText(text.toUpper());
        ui->statusbar->showMessage("the file content is upper case");
}


void MainWindow::on_actionlower_case_triggered()
{
        QString text = ui->plainTextEdit->toPlainText();
        ui->plainTextEdit->clear();
        ui->plainTextEdit->appendPlainText(text.toLower());
        ui->statusbar->showMessage("the file content is in lower case");
}

