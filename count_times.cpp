#include "count_times.h"
#include "ui_count_times.h"
#include <QVector>
#include <QDialog>
#include <QString>
using namespace std;
count_times::count_times(QVector<QString> vect,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::count_times)
{
    ui->setupUi(this);
    for(int i = 0; i < vect.length(); i++){
        vecto.push_back(vect[i]);
    }
}

count_times::~count_times()
{
    delete ui;
}

void count_times::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    int num = 0;
    for(int i = 0; i < vecto.length(); i++){
        if( strstr(vecto[i].toLower().toStdString().c_str(),str.toLower().toStdString().c_str())){
            num += 1;
        }
    }
    if(num == 0){
        ui->label_2->setText("there's no word in the file similar to this word");
    }else{
        QString str = QString::number(num);
        ui->label_2->setText("the number of times word is reapeted equal " + str);
    }
}
//str.contains(vecto[i], Qt::CaseInsensitive
