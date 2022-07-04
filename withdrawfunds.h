#ifndef WITHDRAWFUNDS_H
#define WITHDRAWFUNDS_H

#include <QMainWindow>
#include <QList>
#include "math.h"
#include <QPropertyAnimation>
#include <QPushButton>
#include <QFrame>
#include <QTimer>
#include <QThread>
#include <QDateTime>
#include "cash.h"
#include <QDebug>

namespace Ui {
class WithdrawFunds;
}

class WithdrawFunds : public QMainWindow
{
    Q_OBJECT
    QList<Cash> ATM;
    QList<int> resFunds;

public:
    explicit WithdrawFunds(QWidget *parent = nullptr);
    ~WithdrawFunds();
    void setATM(QList<Cash> atm){this->ATM=atm;}
    QList<Cash> getATM(){return this->ATM;}
    bool minCountOfBills(int, QList<int> , QList<int> , int , int );
    void issuance(QList<Cash>* , int );
    /*void setresFunds(QList<int>* funds){this->resFunds=funds;}
    QList<int>* getresFunds(){return this->resFunds;}*/

private:
    Ui::WithdrawFunds *ui;

    int count;

private slots:
    void animationButton();
    void showTime();
    void on_pushButton_2_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_8_clicked();
};

#endif // WITHDRAWFUNDS_H
