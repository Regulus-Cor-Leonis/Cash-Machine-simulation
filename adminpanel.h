#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include "db.h"
#include "cashwithdrawal.h"

namespace Ui {
class AdminPanel;
}

class AdminPanel : public QMainWindow
{
    Q_OBJECT
    CashWithdrawal* ATM;

public:
    explicit AdminPanel(QWidget *parent = nullptr);
    ~AdminPanel();
    void setATM(CashWithdrawal* atm){this->ATM=atm;}
    CashWithdrawal* getATM(){return this->ATM;}

private:
    Ui::AdminPanel *ui;

private slots:
    void showTime();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};

#endif // ADMINPANEL_H
