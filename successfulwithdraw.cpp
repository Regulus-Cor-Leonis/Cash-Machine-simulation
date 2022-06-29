#include "successfulwithdraw.h"
#include "ui_successfulwithdraw.h"

SuccessfulWithdraw::SuccessfulWithdraw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulWithdraw)
{
    ui->setupUi(this);
}

SuccessfulWithdraw::~SuccessfulWithdraw()
{
    delete ui;
}

void SuccessfulWithdraw::on_pushButton_2_clicked()
{
    this->close();
}

