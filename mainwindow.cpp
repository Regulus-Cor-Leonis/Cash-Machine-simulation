#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "withdrawfunds.h"
#include "ui_withdrawfunds.h"

#include "adminpanel.h"
#include "ui_adminpanel.h"

#include "exitmessage.h"
#include "ui_exitmessage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();

    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateTimeText = dateTime.toString();
    ui->label_4->setText(dateTimeText);
}

void MainWindow::showTime()
{
    QTime time = QTime::currentTime();
    QString timeText = time.toString("hh : mm : ss");
    ui->label_3->setText(timeText);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ExitMessage *w = new ExitMessage;
    w->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    WithdrawFunds *w = new WithdrawFunds;
    w->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    AdminPanel *w = new AdminPanel;
    w->show();
    this->close();
}
