#include "withdrawfunds.h"
#include "ui_withdrawfunds.h"
#include "readerror.h"


WithdrawFunds::WithdrawFunds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WithdrawFunds)
{
    ui->setupUi(this);
    count = 0;

    ui->lineEdit->setPlaceholderText("Enter amount to withdraw");
    ui->lineEdit->setMaxLength(18);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();

    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateTimeText = dateTime.toString();
    ui->label_4->setText(dateTimeText);

    QTimer* timerA = new QTimer(this);
    connect(timerA, SIGNAL(timeout()), this, SLOT(animationButton()));
    timerA->start(1500); // "loop" once every 1000 millisecond
    this->setFixedSize(1280, 780);
}

WithdrawFunds::~WithdrawFunds()
{
    delete ui;
}

void WithdrawFunds::showTime()
{
    QTime time = QTime::currentTime();
    QString timeText = time.toString("hh : mm : ss");
    ui->label_3->setText(timeText);
}

void WithdrawFunds::animationButton()
{
        if (count == 0)
        {
            count = count + 1;
            QPropertyAnimation* animation1 = new QPropertyAnimation(ui->frame_2, "geometry");
            animation1->setDuration(1500);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(540, 330, 211, 131));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1500);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(470, 480, 221, 131));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1500);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(220, 480, 221, 131));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1500);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(160, 340, 221, 131));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1500);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(360, 230, 231, 131));

            animation1->start();
            animation2->start();
            animation3->start();
            animation4->start();
            animation5->start();
        }
        else if (count == 1)
        {
            count = count + 1;
            QPropertyAnimation* animation1 = new QPropertyAnimation(ui->frame_2, "geometry");
            animation1->setDuration(1500);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(470, 480, 211, 131));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1500);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(220, 480, 221, 131));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1500);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(160, 340, 221, 131));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1500);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(360, 230, 221, 131));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1500);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(540, 330, 231, 131));

            animation1->start();
            animation2->start();
            animation3->start();
            animation4->start();
            animation5->start();
        }
        else if (count == 2)
        {
            count = count + 1;
            QPropertyAnimation* animation1 = new QPropertyAnimation(ui->frame_2, "geometry");
            animation1->setDuration(1500);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(220, 480, 211, 131));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1500);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(160, 340, 221, 131));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1500);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(360, 230, 221, 131));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1500);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(540, 330, 221, 131));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1500);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(470, 480, 231, 131));

            animation1->start();
            animation2->start();
            animation3->start();
            animation4->start();
            animation5->start();
        }
        else if (count == 3)
        {
            count = count + 1;
            QPropertyAnimation* animation1 = new QPropertyAnimation(ui->frame_2, "geometry");
            animation1->setDuration(1500);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(160, 340, 211, 131));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1500);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(360, 230, 221, 131));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1500);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(540, 330, 221, 131));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1500);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(470, 480, 221, 131));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1500);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(220, 480, 231, 131));

            animation1->start();
            animation2->start();
            animation3->start();
            animation4->start();
            animation5->start();
        }
        else if (count == 4)
        {
            count = 0;
            QPropertyAnimation* animation1 = new QPropertyAnimation(ui->frame_2, "geometry");
            animation1->setDuration(1500);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(360, 230, 211, 131));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1500);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(540, 330, 221, 131));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1500);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(470, 480, 221, 131));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1500);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(220, 480, 221, 131));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1500);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(160, 340, 231, 131));

            animation1->start();
            animation2->start();
            animation3->start();
            animation4->start();
            animation5->start();
        }
}

void issuance();

void WithdrawFunds::on_pushButton_7_clicked()
{
    bool ok;
    long long int request=ui->lineEdit->text().toLongLong(&ok,10);
    if (ok==false){
        ReadError *w=new ReadError;
        w->show();
        ui->lineEdit->setText("");
    }
    else{
        qDebug()<<request<<"\n";
    }
}

void WithdrawFunds::on_pushButton_2_clicked()
{
    int request=50;
    qDebug()<<request<<"\n";
}

void WithdrawFunds::on_pushButton_3_clicked()
{
    int request=100;
    qDebug()<<request<<"\n";
}


void WithdrawFunds::on_pushButton_4_clicked()
{
    int request=200;
    qDebug()<<request<<"\n";
}


void WithdrawFunds::on_pushButton_5_clicked()
{
    int request=500;
    qDebug()<<request<<"\n";
}


void WithdrawFunds::on_pushButton_6_clicked()
{
    int request=1000;
    qDebug()<<request<<"\n";
}

