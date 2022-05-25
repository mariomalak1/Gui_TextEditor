#include "search_word.h"
#include "ui_search_word.h"
#include <QVector>
#include <QString>
search_word::search_word(QVector <QString> vect ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search_word)
{
    ui->setupUi(this);
    for(int i = 0; i < vect.length(); i++){
        vecto.push_back(vect[i]);
    }
}

search_word::~search_word()
{
    delete ui;
}

void search_word::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    int counter = 0;
    for(int i = 0; i < vecto.length(); i++){
        if(strstr(vecto[i].toLower().toStdString().c_str(), (str).toLower().toStdString().c_str())){
            ui->label_2->setText("founded");
        }else{
            counter += 1;
        }
    }
    if(counter == vecto.length()){
        ui->label_2->setText("does not founded");
    }
}

