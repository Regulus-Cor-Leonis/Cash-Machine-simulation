#include "exitmessage.h"
#include "ui_exitmessage.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"

ExitMessage::ExitMessage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ExitMessage)
{
    ui->setupUi(this);
}

ExitMessage::~ExitMessage()
{
    delete ui;
}

void ExitMessage::on_pushButton_3_clicked()
{
    exit(0);
}

void ExitMessage::on_pushButton_2_clicked()
{
    MainWindow *w = new MainWindow;
    this->close();
}
