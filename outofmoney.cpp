#include "outofmoney.h"
#include "ui_outofmoney.h"

OutOfMoney::OutOfMoney(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OutOfMoney)
{
    ui->setupUi(this);
    this->setFixedSize(500, 210);
}

OutOfMoney::~OutOfMoney()
{
    delete ui;
}
