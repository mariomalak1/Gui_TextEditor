#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionall_file_to_upper_triggered();

    void on_actionfirst_capital_2_triggered();

    void on_actionall_file_to_small_triggered();

    void on_actionEncrypt_2_triggered();

    void on_actionDecrypt_2_triggered();

    void on_actionempty_the_file_triggered();

    void on_actionnumber_of_lines_triggered();

    void on_actionnumber_of_the_words_triggered();

    void on_actionnumber_of_charactares_triggered();

    void on_actionfor_word_triggered();

    void on_actionopen_file_triggered();

    void on_actionsave_2_triggered();

    void on_actionSaveAs_triggered();

    void on_actionMerge_triggered();

    void on_actionabout_triggered();

    void on_actioncount_number_of_times_of_word_triggered();

    void on_actionupper_case_triggered();

    void on_actionlower_case_triggered();

private:
    Ui::MainWindow *ui;
    QString file_path;
};
#endif // MAINWINDOW_H
