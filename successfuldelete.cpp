#include "successfuldelete.h"
#include "ui_successfuldelete.h"

SuccessfulDelete::SuccessfulDelete(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulDelete)
{
    ui->setupUi(this);
}

SuccessfulDelete::~SuccessfulDelete()
{
    delete ui;
}
