#ifndef OUTOFMONEY_H
#define OUTOFMONEY_H

#include <QMainWindow>

namespace Ui {
class OutOfMoney;
}

class OutOfMoney : public QMainWindow
{
    Q_OBJECT

public:
    explicit OutOfMoney(QWidget *parent = nullptr);
    ~OutOfMoney();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::OutOfMoney *ui;
};

#endif // OUTOFMONEY_H
