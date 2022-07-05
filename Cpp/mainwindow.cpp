#include "Headers\mainwindow.h"
#include "ui_mainwindow.h"

#include "Headers\withdrawfunds.h"
#include "ui_withdrawfunds.h"

#include "Headers\adminpanel.h"
#include "Headers\exitmessage.h"
#include "Headers\password.h"
#include "Headers\successfulupdate.h"
#include <QScreen>


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

    this->setFixedSize(1280, 780);
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
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    WithdrawFunds *w = new WithdrawFunds;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setATM(ATM);
    w->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    Password *w = new Password;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setATM(ATM);
    w->show();
    this->close();
}
