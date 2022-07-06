#include "Headers\exitmessage.h"
#include "ui_exitmessage.h"

#include "Headers\mainwindow.h"
#include "ui_mainwindow.h"

ExitMessage::ExitMessage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExitMessage)
{
    ui->setupUi(this);
    this->setFixedSize(510, 190);
}

ExitMessage::~ExitMessage()
{
    delete ui;
}

//pushbutton Yes
void ExitMessage::on_pushButton_3_clicked()
{
    exit(0);
}

//pushbutton No
void ExitMessage::on_pushButton_2_clicked()
{
    this->close();
}
