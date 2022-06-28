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
#include "cashwithdrawal.h"

namespace Ui {
class WithdrawFunds;
}

class WithdrawFunds : public QMainWindow
{
    Q_OBJECT
    CashWithdrawal* ATM;

public:
    explicit WithdrawFunds(QWidget *parent = nullptr);
    ~WithdrawFunds();
    void setATM(CashWithdrawal* atm){this->ATM=atm;}
    CashWithdrawal* getATM(){return this->ATM;}
    void minCountOfBills(CashWithdrawal*,int);

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
};

#endif // WITHDRAWFUNDS_H
