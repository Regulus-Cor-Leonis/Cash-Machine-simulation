#include "withdrawfunds.h"
#include "ui_withdrawfunds.h"
#include "readerror.h"
#include "mainwindow.h"
#include "db.h"
#include "successfulwithdraw.h"
#include "outofmoney.h"
#include "nobills.h"
#include "exceedingwithdrawalamount.h"
#include <iostream>

using namespace std;

WithdrawFunds::WithdrawFunds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WithdrawFunds)
{
    ui->setupUi(this);
    count = 0;

    ui->lineEdit->setPlaceholderText("Enter amount to withdraw");
    ui->lineEdit->setMaxLength(9);

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

void WithdrawFunds::sortDescending(){
    QList<Cash>::Iterator i;
    for (i = ATM.begin(); i != ATM.end(); ++i){
        QList<Cash>::Iterator j;
        QList<Cash>::Iterator maxj=i;
        int max=i->getDenomination();
        for(j=i; j!=ATM.end();++j){
            if (max<j->getDenomination()){
                maxj=j;
                max=j->getDenomination();
            }
        }
        int temp=i->getDenomination();
        i->setDenomination(maxj->getDenomination());
        maxj->setDenomination(temp);
        temp=i->getCount();
        i->setCount(maxj->getCount());
        maxj->setCount(temp);
    }
}

int WithdrawFunds::getSum(QList<int> &atm){
    QList<int>::iterator i;
    int sum=0;
    for (i = atm.begin(); i != atm.end(); ++i){
        sum+=*i;
    }
    return sum;
}

bool WithdrawFunds::minCountOfBills(int i, QList<int> &money, QList<int> funds, int &request, int sum){
    int j=i;
    sum+=money[j];
    funds.append(money[j]);
    j=i+1;
    if (j>=money.length()) return false;
    while (sum+money[j]>request){
        j++;
        if (j>=money.length()) return false;
    }
    //cout<<"Sum="<<sum<<"\ti="<<i<<"\tj="<<j<<endl;
    if (sum+money[j]==request) {
        funds.append(money[j]);
        resFunds=funds;
        return true;
    }
    if (minCountOfBills(j,money,funds,request,sum)){
        return minCountOfBills(j,money,funds,request,sum);
    } else {
        int h=j+1;
        if (h>=money.length()) return false;
        while (money[h]==money[h+1]){
            h++;
            if (h>=money.length()-2) return false;
        }
        return minCountOfBills(h+2,money,funds,request,sum);
    }
}


void WithdrawFunds::issuance(QList<Cash> &atm, int &request){

    qDebug()<<"request="<<request;

    QList<Cash>::Iterator i;
    QList<int> money;
    money.append(0);
    for(i=atm.begin();i!=atm.end();++i){
        int j=0;
        for(j=0;j<i->getCount();j++){
            money.append(i->getDenomination());
        }
    }

    int sum=getSum(money);
    qDebug()<<"Suma="<<sum;
    QList<int> funds;
    if (sum<request){
        qDebug()<<"Not enough funds at the ATM ";
        OutOfMoney *w = new OutOfMoney;
        w->setAttribute(Qt::WA_DeleteOnClose);
        w->show();
        return;
    } else {
        if (sum==request){
            resFunds=money;
            resFunds.removeFirst();
            SuccessfulWithdraw* w = new SuccessfulWithdraw(resFunds);
            w->setAttribute(Qt::WA_DeleteOnClose);
            w->show();
        } else {
            int i=0;
            if (minCountOfBills(i,money,funds,request,0)) {
                cout<<"TRUE"<<endl;
                resFunds.removeFirst();
                SuccessfulWithdraw* w = new SuccessfulWithdraw(this->resFunds);
                w->setAttribute(Qt::WA_DeleteOnClose);
                w->show();
            }
            else {
                cout<<"FALSE"<<endl;
                NoBills* w = new NoBills;
                w->setAttribute(Qt::WA_DeleteOnClose);
                w->show();
            }
        }
    }
}

void WithdrawFunds::callMajorFunction(int request){
    resFunds.clear();
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    sortDescending();
    QList<Cash>::Iterator i;
    for(i=ATM.begin();i!=ATM.end();++i){
        cout<<i->getDenomination()<<" "<<i->getCount()<<endl;
    }

    cout<<"Check"<<endl;
    issuance(ATM,request);
    QList<int>::Iterator j;
    for (j=resFunds.begin();j!=resFunds.end();++j){
        for(i=ATM.begin();i!=ATM.end();++i){
            if (i->getDenomination()==*j){
                i->setCount(i->getCount()-1);
                break;
            }
        }
        cout<<"resFunds: "<<*j<<endl;
    }
}


void WithdrawFunds::on_pushButton_7_clicked()
{
    bool ok;
    int request=ui->lineEdit->text().toInt(&ok,10);
    if (ok==false){
        ReadError *w=new ReadError;
        w->setAttribute(Qt::WA_DeleteOnClose);
        w->show();
        ui->lineEdit->setText("");
    }
    else{
        if (request>=10000){
            ExceedingWithdrawalAmount* w=new ExceedingWithdrawalAmount;
            w->show();
        } else{
            callMajorFunction(request);
        }
    }
}

void WithdrawFunds::on_pushButton_2_clicked()
{
    int request=50;
    callMajorFunction(request);
}

void WithdrawFunds::on_pushButton_3_clicked()
{
    int request=100;
    callMajorFunction(request);
}


void WithdrawFunds::on_pushButton_4_clicked()
{
    int request=200;
    callMajorFunction(request);
}


void WithdrawFunds::on_pushButton_5_clicked()
{
    int request=500;
    callMajorFunction(request);
}


void WithdrawFunds::on_pushButton_6_clicked()
{
    int request=1000;
    callMajorFunction(request);
}


void WithdrawFunds::on_pushButton_8_clicked()
{
    MainWindow *w=new MainWindow;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setATM(ATM);
    w->show();
    this->close();
}
