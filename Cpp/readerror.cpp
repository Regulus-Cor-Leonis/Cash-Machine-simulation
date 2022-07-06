#include "Headers\readerror.h"
#include "ui_readerror.h"

ReadError::ReadError(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReadError)
{
    ui->setupUi(this);
    this->setFixedSize(470, 200);
}

ReadError::~ReadError()
{
    delete ui;
}

//pushbutton Ok
void ReadError::on_pushButton_2_clicked()
{
    this->close();
}

