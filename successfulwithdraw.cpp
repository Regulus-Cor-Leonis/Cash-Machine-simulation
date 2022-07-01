#include "successfulwithdraw.h"
#include "ui_successfulwithdraw.h"

SuccessfulWithdraw::SuccessfulWithdraw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SuccessfulWithdraw)
{
    ui->setupUi(this);

    /*
    list << 1 << 10 << 100 << 1000 << 10000; //filling list

    //Number of animations
    count = 5 * 5 - 1; //* 5 - 1 necessary action
    //Countdown to stop
    iteration = 0;
    //Go to next banknot
    iterator = 0;
    //Enumeration animation
    countA = 0;

    timerA = new QTimer(this);
    connect(timerA, SIGNAL(timeout()), this, SLOT(animationCash()));
    connect(timerA, SIGNAL(timeout()), this, SLOT(stop()));
    timerA->start(1000);
    */
}

SuccessfulWithdraw::~SuccessfulWithdraw()
{
    delete ui;
}

/*
void SuccessfulWithdraw::animationCash()
{
    if (countA == 0)
    {
        countA = countA + 1;
        ui->label_5->setText(QString::number(list[iterator]));
        QPropertyAnimation* animation1 = new QPropertyAnimation(ui->label_3, "geometry");
        animation1->setDuration(1000);

        animation1->setStartValue(QRect(-30, 10, 261, 151));
        animation1->setEasingCurve(QEasingCurve::InQuad);
        animation1->setEndValue(QRect(-30, 10, 301, 171));

        QPropertyAnimation* animation2 = new QPropertyAnimation(ui->frame, "geometry");
        animation2->setDuration(1000);

        animation2->setStartValue(QRect(73, 63, 51, 21));
        animation2->setEasingCurve(QEasingCurve::InQuad);
        animation2->setEndValue(QRect(200, 80, 51, 21));

        animation1->start();
        animation2->start();
    }
    else if (countA == 1)
    {
        countA = countA + 1;
        QPropertyAnimation* animation2 = new QPropertyAnimation(ui->label_3, "geometry");
        animation2->setDuration(1000);

        animation2->setStartValue(QRect(-30, 10, 301, 171));
        animation2->setEasingCurve(QEasingCurve::InQuad);
        animation2->setEndValue(QRect(-30, 10, 261, 151));


        QPropertyAnimation* animation3 = new QPropertyAnimation(ui->frame, "geometry");
        animation3->setDuration(1000);
        animation3->setEasingCurve(QEasingCurve::InQuad);
        animation3->setEndValue(QRect(190, 190, 51, 21));

        animation2->start();
        animation3->start();
    }
    else if (countA == 2)
    {
        countA = countA + 1;
        QPropertyAnimation* animation4 = new QPropertyAnimation(ui->frame, "geometry");
        animation4->setDuration(1000);
        animation4->setEasingCurve(QEasingCurve::InQuad);
        animation4->setEndValue(QRect(70, 300, 51, 21));

        animation4->start();
    }
    else if (countA == 3)
    {
        countA = countA + 1;
        QPropertyAnimation* animation5 = new QPropertyAnimation(ui->frame, "geometry");
        animation5->setDuration(1000);
        animation5->setEasingCurve(QEasingCurve::InQuad);
        animation5->setEndValue(QRect(140, 360, 51, 21));

        animation5->start();
    }
    else if (countA == 4)
    {
        countA = 0;
        QPropertyAnimation* animation6 = new QPropertyAnimation(ui->frame, "geometry");
        animation6->setDuration(1000);
        animation6->setEasingCurve(QEasingCurve::InQuad);
        animation6->setEndValue(QRect(107, 440, 51, 21));

        animation6->start();
        iterator = iterator + 1;
    }
}

void SuccessfulWithdraw::stop()
{
    iteration = iteration + 1;
    if (iteration > count)
    {
        timerA->stop();
    }
}
*/
