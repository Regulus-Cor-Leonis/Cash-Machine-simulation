#include "successfulupdate.h"
#include "ui_successfulupdate.h"

SuccessfulUpdate::SuccessfulUpdate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulUpdate)
{
    ui->setupUi(this);
    this->setFixedSize(470, 200);

}

SuccessfulUpdate::~SuccessfulUpdate()
{
    delete ui;
}
