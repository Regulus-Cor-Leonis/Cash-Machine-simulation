#include "exceedingwithdrawalamount.h"
#include "ui_exceedingwithdrawalamount.h"

ExceedingWithdrawalAmount::ExceedingWithdrawalAmount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExceedingWithdrawalAmount)
{
    ui->setupUi(this);
}

ExceedingWithdrawalAmount::~ExceedingWithdrawalAmount()
{
    delete ui;
}
