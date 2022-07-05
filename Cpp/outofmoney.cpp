#include "Headers\outofmoney.h"
#include "ui_outofmoney.h"

OutOfMoney::OutOfMoney(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OutOfMoney)
{
    ui->setupUi(this);
    this->setFixedSize(500, 190);
}

OutOfMoney::~OutOfMoney()
{
    delete ui;
}

void OutOfMoney::on_pushButton_2_clicked()
{
    this->close();
}

