#include "nobills.h"
#include "ui_nobills.h"

NoBills::NoBills(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NoBills)
{
    ui->setupUi(this);
}

NoBills::~NoBills()
{
    delete ui;
}
