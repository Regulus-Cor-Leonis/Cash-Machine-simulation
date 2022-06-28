#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include "cashwithdrawal.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    CashWithdrawal *ATM;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setATM(CashWithdrawal* atm){this->ATM=atm;}
    CashWithdrawal* getATM(){return this->ATM;}

private slots:
    void on_pushButton_clicked();

    void showTime();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
