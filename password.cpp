#include "password.h"
#include "ui_password.h"

Password::Password(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Password)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Enter password");
}

Password::~Password()
{
    delete ui;
}
