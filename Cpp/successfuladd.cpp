#include "Headers\successfuladd.h"
#include "ui_successfuladd.h"

SuccessfulAdd::SuccessfulAdd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulAdd)
{
    ui->setupUi(this);
    this->setFixedSize(470, 180);

}

SuccessfulAdd::~SuccessfulAdd()
{
    delete ui;
}

//pushbutton Ok
void SuccessfulAdd::on_pushButton_2_clicked()
{
    this->close();
}

