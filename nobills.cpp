#include "nobills.h"
#include "ui_nobills.h"

NoBills::NoBills(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoBills)
{
    ui->setupUi(this);
    this->setFixedSize(470, 220);
}

NoBills::~NoBills()
{
    delete ui;
}

void NoBills::on_pushButton_2_clicked()
{
    this->close();
}

