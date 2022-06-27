#include "successfuladd.h"
#include "ui_successfuladd.h"

SuccessfulAdd::SuccessfulAdd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulAdd)
{
    ui->setupUi(this);
}

SuccessfulAdd::~SuccessfulAdd()
{
    delete ui;
}
