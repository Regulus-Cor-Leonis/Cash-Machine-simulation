#include "Headers\nobills.h"
#include "ui_nobills.h"

NoBills::NoBills(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoBills)
{
    ui->setupUi(this);
    this->setFixedSize(470, 200);
}

NoBills::~NoBills()
{
    delete ui;
}

//pushbutton Ok
void NoBills::on_pushButton_2_clicked()
{
    this->close();
}

