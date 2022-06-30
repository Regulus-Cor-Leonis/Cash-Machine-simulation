#ifndef PASSWORD_H
#define PASSWORD_H

#include <QMainWindow>
#include "cash.h"

namespace Ui {
class Password;
}

class Password : public QMainWindow
{
    Q_OBJECT
    QList<Cash> ATM;

public:
    explicit Password(QWidget *parent = nullptr);
    ~Password();
    void setATM(QList<Cash> atm){this->ATM=atm;}
    QList<Cash> getATM(){return this->ATM;}

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Password *ui;
};

#endif // PASSWORD_H
