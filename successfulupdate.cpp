#include "successfulupdate.h"
#include "ui_successfulupdate.h"

SuccessfulUpdate::SuccessfulUpdate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulUpdate)
{
    ui->setupUi(this);
}

SuccessfulUpdate::~SuccessfulUpdate()
{
    delete ui;
}
