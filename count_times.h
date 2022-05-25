#ifndef COUNT_TIMES_H
#define COUNT_TIMES_H
#include <QVector>
#include <QDialog>
#include <QString>

namespace Ui {
class count_times;
}

class count_times : public QDialog
{
    Q_OBJECT

public:
    explicit count_times(QVector<QString> vect,QWidget *parent = nullptr);
    ~count_times();

private slots:
    void on_pushButton_clicked();
private:
    Ui::count_times *ui;
    QVector<QString> vecto;
};

#endif // COUNT_TIMES_H
