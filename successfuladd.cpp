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

void SuccessfulAdd::on_pushButton_2_clicked()
{
    this->close();
}

