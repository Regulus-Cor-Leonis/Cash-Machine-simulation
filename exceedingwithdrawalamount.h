#ifndef EXCEEDINGWITHDRAWALAMOUNT_H
#define EXCEEDINGWITHDRAWALAMOUNT_H

#include <QMainWindow>

namespace Ui {
class ExceedingWithdrawalAmount;
}

class ExceedingWithdrawalAmount : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExceedingWithdrawalAmount(QWidget *parent = nullptr);
    ~ExceedingWithdrawalAmount();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::ExceedingWithdrawalAmount *ui;
};

#endif // EXCEEDINGWITHDRAWALAMOUNT_H
