#include "withdrawfunds.h"
#include "ui_withdrawfunds.h"


WithdrawFunds::WithdrawFunds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WithdrawFunds)
{
    ui->setupUi(this);
    count = 0;

    ui->lineEdit->setPlaceholderText("Enter amount to withdraw");

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();

    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateTimeText = dateTime.toString();
    ui->label_4->setText(dateTimeText);

    QTimer* timerA = new QTimer(this);
    connect(timerA, SIGNAL(timeout()), this, SLOT(animationButton()));
    timerA->start(1000); // "loop" once every 1000 millisecond
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
            animation1->setDuration(1000);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(500, 470, 191, 111));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1000);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(430, 600, 201, 111));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1000);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(230, 600, 201, 111));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1000);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(160, 470, 201, 111));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1000);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(340, 390, 211, 111));

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
            animation1->setDuration(1000);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(430, 600, 191, 111));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1000);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(230, 600, 201, 111));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1000);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(160, 470, 201, 111));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1000);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(340, 410, 201, 111));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1000);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(500, 470, 211, 111));

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
            animation1->setDuration(1000);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(230, 600, 191, 111));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1000);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(160, 470, 201, 111));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1000);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(340, 410, 201, 111));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1000);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(500, 470, 201, 111));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1000);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(430, 600, 211, 111));

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
            animation1->setDuration(1000);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(160, 470, 191, 111));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1000);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(340, 410, 201, 111));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1000);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(500, 470, 201, 111));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1000);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(430, 600, 201, 111));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1000);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(230, 600, 211, 111));

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
            animation1->setDuration(1000);
            animation1->setEasingCurve(QEasingCurve::Linear);
            animation1->setEndValue(QRect(340, 410, 191, 111));

            QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame_3, "geometry");
            animation2->setDuration(1000);
            animation2->setEasingCurve(QEasingCurve::Linear);
            animation2->setEndValue(QRect(500, 470, 201, 111));

            QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame_4, "geometry");
            animation3->setDuration(1000);
            animation3->setEasingCurve(QEasingCurve::Linear);
            animation3->setEndValue(QRect(430, 600, 201, 111));

            QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame_5, "geometry");
            animation4->setDuration(1000);
            animation4->setEasingCurve(QEasingCurve::Linear);
            animation4->setEndValue(QRect(230, 600, 201, 111));

            QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame_6, "geometry");
            animation5->setDuration(1000);
            animation5->setEasingCurve(QEasingCurve::Linear);
            animation5->setEndValue(QRect(160, 470, 211, 111));

            animation1->start();
            animation2->start();
            animation3->start();
            animation4->start();
            animation5->start();
        }
}

void WithdrawFunds::on_pushButton_2_clicked()
{
}
