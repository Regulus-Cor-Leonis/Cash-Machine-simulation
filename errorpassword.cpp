#include "errorpassword.h"
#include "ui_errorpassword.h"

ErrorPassword::ErrorPassword(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ErrorPassword)
{
    ui->setupUi(this);
}

ErrorPassword::~ErrorPassword()
{
    delete ui;
}

void ErrorPassword::on_pushButton_2_clicked()
{
    this->close();
}

