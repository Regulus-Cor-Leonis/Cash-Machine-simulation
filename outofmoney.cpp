#include "outofmoney.h"
#include "ui_outofmoney.h"

OutOfMoney::OutOfMoney(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OutOfMoney)
{
    ui->setupUi(this);
}

OutOfMoney::~OutOfMoney()
{
    delete ui;
}

void OutOfMoney::on_pushButton_2_clicked()
{
    this->close();
}

