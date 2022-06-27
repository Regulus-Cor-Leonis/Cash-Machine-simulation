#include "readerror.h"
#include "ui_readerror.h"

ReadError::ReadError(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReadError)
{
    ui->setupUi(this);
}

ReadError::~ReadError()
{
    delete ui;
}
