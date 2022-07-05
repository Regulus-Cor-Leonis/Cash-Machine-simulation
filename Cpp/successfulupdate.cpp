#include "Headers\successfulupdate.h"
#include "ui_successfulupdate.h"

SuccessfulUpdate::SuccessfulUpdate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulUpdate)
{
    ui->setupUi(this);
    this->setFixedSize(470, 180);

}

SuccessfulUpdate::~SuccessfulUpdate()
{
    delete ui;
}

void SuccessfulUpdate::on_pushButton_2_clicked()
{
    this->close();

}

