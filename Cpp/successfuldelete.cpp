#include "Headers\successfuldelete.h"
#include "ui_successfuldelete.h"

SuccessfulDelete::SuccessfulDelete(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulDelete)
{
    ui->setupUi(this);
    this->setFixedSize(470, 180);

}

SuccessfulDelete::~SuccessfulDelete()
{
    delete ui;
}

//pushbutton Ok
void SuccessfulDelete::on_pushButton_2_clicked()
{
    this->close();

}

