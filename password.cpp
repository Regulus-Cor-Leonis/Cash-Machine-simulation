#include "password.h"
#include "ui_password.h"
#include "adminpanel.h"
#include "errorpassword.h"
#include "mainwindow.h"

Password::Password(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Password)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Enter password");
    this->setFixedSize(430, 220);
}

Password::~Password()
{
    delete ui;
}

void Password::on_pushButton_6_clicked()
{
    if (ui->lineEdit->text() == "EleksLove"){
        AdminPanel *w = new AdminPanel;
        w->show();
        this->close();
    }
    else {
        ErrorPassword *w = new ErrorPassword;
        w->show();
    }
}


void Password::on_pushButton_7_clicked()
{
    MainWindow *w = new MainWindow;
    w->show();
    this->close();
}

