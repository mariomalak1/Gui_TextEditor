#ifndef SEARCH_WORD_H
#define SEARCH_WORD_H
#include <QVector>
#include <QDialog>
#include <QString>
namespace Ui {
class search_word;
}

class search_word : public QDialog
{
    Q_OBJECT

public:
    explicit search_word(QVector<QString> vect, QWidget *parent = nullptr);
    ~search_word();

private slots:
    void on_pushButton_clicked();

private:
    Ui::search_word *ui;
    QVector<QString> vecto;
};

#endif // SEARCH_WORD_H
