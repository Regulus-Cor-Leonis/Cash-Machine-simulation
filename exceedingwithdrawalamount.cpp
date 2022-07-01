#include "exceedingwithdrawalamount.h"
#include "ui_exceedingwithdrawalamount.h"

ExceedingWithdrawalAmount::ExceedingWithdrawalAmount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExceedingWithdrawalAmount)
{
    ui->setupUi(this);
    this->setFixedSize(520, 210);
}

ExceedingWithdrawalAmount::~ExceedingWithdrawalAmount()
{
    delete ui;
}
