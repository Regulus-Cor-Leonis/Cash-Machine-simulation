#include "successfulwithdraw.h"
#include "ui_successfulwithdraw.h"

SuccessfulWithdraw::SuccessfulWithdraw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulWithdraw)
{
    ui->setupUi(this);
    this->setFixedSize(751, 501);

}

SuccessfulWithdraw::~SuccessfulWithdraw()
{
    delete ui;
}
