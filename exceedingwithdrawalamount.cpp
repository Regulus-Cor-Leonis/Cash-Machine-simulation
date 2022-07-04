#include "exceedingwithdrawalamount.h"
#include "ui_exceedingwithdrawalamount.h"

ExceedingWithdrawalAmount::ExceedingWithdrawalAmount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExceedingWithdrawalAmount)
{
    ui->setupUi(this);
    this->setFixedSize(520, 195);
}

ExceedingWithdrawalAmount::~ExceedingWithdrawalAmount()
{
    delete ui;
}

void ExceedingWithdrawalAmount::on_pushButton_2_clicked()
{
    this->close();
}

