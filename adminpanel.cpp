#include "adminpanel.h"
#include "ui_adminpanel.h"

AdminPanel::AdminPanel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminPanel)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Enter value");
    ui->lineEdit_2->setPlaceholderText("Enter number");

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();

    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateTimeText = dateTime.toString();
    ui->label_4->setText(dateTimeText);
}

AdminPanel::~AdminPanel()
{
    delete ui;
}

void AdminPanel::showTime()
{
    QTime time = QTime::currentTime();
    QString timeText = time.toString("hh : mm : ss");
    ui->label_3->setText(timeText);
}
