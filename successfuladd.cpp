#include "successfuladd.h"
#include "ui_successfuladd.h"

SuccessfulAdd::SuccessfulAdd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulAdd)
{
    ui->setupUi(this);
    this->setFixedSize(470, 200);

}

SuccessfulAdd::~SuccessfulAdd()
{
    delete ui;
}
