#include "Headers\password.h"
#include "ui_password.h"
#include "Headers\adminpanel.h"
#include "Headers\errorpassword.h"
#include "Headers\mainwindow.h"

Password::Password(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Password)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Enter password");
    this->setFixedSize(430, 200);
}

Password::~Password()
{
    delete ui;
}
//pushbutton Apply
void Password::on_pushButton_6_clicked()
{
    if (ui->lineEdit->text() == "EleksLove"){
        AdminPanel *w = new AdminPanel;
        w->setATM(ATM);
        w->setAttribute(Qt::WA_DeleteOnClose);
        w->show();
        this->close();
    }
    else {
        ErrorPassword *w = new ErrorPassword;
        w->setAttribute(Qt::WA_DeleteOnClose);
        w->show();
    }
}

//pushbutton Exit
void Password::on_pushButton_7_clicked()
{
    MainWindow *w = new MainWindow;
    w->setATM(ATM);
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

