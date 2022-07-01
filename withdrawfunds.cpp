#include "withdrawfunds.h"
#include "ui_withdrawfunds.h"
#include "readerror.h"
#include "mainwindow.h"
#include "db.h"
#include "successfulwithdraw.h"
#include "outofmoney.h"
#include <iostream>

using namespace std;

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

QList<Cash> sortDescending(QList<Cash> atm){
    QList<Cash>::Iterator i;
    for (i = atm.begin(); i != atm.end(); ++i){
        QList<Cash>::Iterator j;
        QList<Cash>::Iterator maxj=i;
        int max=i->getDenomination();
        for(j=i; j!=atm.end();++j){
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
    return atm;
}

QList<Cash> sortAscending(QList<Cash> atm){
    QList<Cash>::Iterator i;
    for (i = atm.begin(); i != atm.end(); ++i){
        QList<Cash>::Iterator j;
        QList<Cash>::Iterator minj=i;
        int min=i->getDenomination();
        for(j=i; j!=atm.end();++j){
            if (min>j->getDenomination()){
                minj=j;
                min=j->getDenomination();
            }
        }
        int temp=i->getDenomination();
        i->setDenomination(minj->getDenomination());
        minj->setDenomination(temp);
        temp=i->getCount();
        i->setCount(minj->getCount());
        minj->setCount(temp);
    }
    return atm;
}


int getSum(QList<int> atm){
    QList<int>::iterator i;
    int sum=0;
    for (i = atm.begin(); i != atm.end(); ++i){
        sum+=*i;
    }
    return sum;
}

bool WithdrawFunds::minCountOfBills(int i, QList<int> money, QList<int> funds, int request, int sum){
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
        QList<int>::Iterator h;
        resFunds=funds;
        return true;
    }
    if (minCountOfBills(j,money,funds,request,sum)){
        return minCountOfBills(j,money,funds,request,sum);
    } else {
        int h=j+1;
        while (money[h]==money[h+1]){
            h++;
            if (h==money.length()-2) return false;
        }
        return minCountOfBills(h+2,money,funds,request,sum);
    }
}


void WithdrawFunds::issuance(QList<int> money, QList<int> funds, int request){

    qDebug()<<"request="<<request;

    int sum=getSum(money);
    //qDebug()<<"Suma="<<sum;

    if (sum<request){
        qDebug()<<"Not enough funds at the ATM ";
        OutOfMoney *w=new OutOfMoney;
        w->show();
        return;
    } else {
        int i=0;
        if (minCountOfBills(i,money,funds,request,0)) cout<<"TRUE"<<endl;
        else cout<<"FALSE"<<endl;
    }
}

void WithdrawFunds::on_pushButton_7_clicked()
{
    bool ok;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }

    //qDebug()
    qDebug()<<"Money in format Denomination Count";
    QList<Cash>::Iterator i;
    for (i=ATM.begin();i!=ATM.end();++i){
        qDebug()<<"Money "<<i->getDenomination()<<" "<<i->getCount();
    }


    int request=ui->lineEdit->text().toLongLong(&ok,10);
    if (ok==false){
        ReadError *w=new ReadError;
        w->show();
        ui->lineEdit->setText("");
    }
    else{

        ATM=sortDescending(ATM);
        QList<Cash>*ptrATM=&ATM;
        QList<Cash>::Iterator i;
        QList<int> money;
        QList<int> index;
        money.append(0);
        for(i=ptrATM->begin();i!=ptrATM->end();++i){
            int j=0;
            for(j=0;j<i->getCount();j++){
                money.append(i->getDenomination());
            }
        }
        QList<int>::Iterator j;
        for (j=money.begin();j!=money.end();++j){
            cout<<"Money: "<<*j<<" ";
        }
        cout<<endl;
        issuance(money,index,request);
        for (j=resFunds.begin();j!=resFunds.end();++j){
            for(i=ptrATM->begin();i!=ptrATM->end();++i){
                if (i->getDenomination()==*j){
                    i->setCount(i->getCount()-1);
                    break;
                }
            }
            cout<<"resFunds: "<<*j<<endl;
        }
    }
}

void WithdrawFunds::on_pushButton_2_clicked()
{
    int request=50;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    ATM=sortAscending(ATM);
    //issuance(ATM,request);
}

void WithdrawFunds::on_pushButton_3_clicked()
{
    int request=100;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    ATM=sortAscending(ATM);
    //issuance(ATM,request);
}


void WithdrawFunds::on_pushButton_4_clicked()
{
    int request=200;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    ATM=sortAscending(ATM);
    //issuance(ATM,request);
}


void WithdrawFunds::on_pushButton_5_clicked()
{
    int request=500;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    ATM=sortAscending(ATM);
    //issuance(ATM,request);
}


void WithdrawFunds::on_pushButton_6_clicked()
{
    int request=1000;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    ATM=sortAscending(ATM);
    //issuance(ATM,request);
}


void WithdrawFunds::on_pushButton_8_clicked()
{
    MainWindow *w=new MainWindow;
    w->setATM(ATM);
    w->show();
    this->close();
}


/*if (i==atm->end()) return false;
if (i->getCount()==0) ++i;
cout<<"\n\tSum="<<sum<<" \ti.d="<<i->getDenomination()<<" \ti.c="<<i->getCount()<<endl;
if (sum<request){
    funds->append(i);
    sum+=i->getDenomination();
    i->setCount(i->getCount()-1);
}
if (sum==request) return true;
if (sum>request){
    i->setCount(i->getCount()+1);
    sum-=i->getDenomination();
    funds->removeLast();
    ++i;
}
if (i==atm->end()) return false;
if (minCountOfBills(i,atm,funds,request,sum)){
    cout<<"TRUE: \tSum="<<sum<<" \ti.d="<<i->getDenomination()<<" \ti.c="<<i->getCount()<<endl;
    QList<QList<Cash>::Iterator>::Iterator j;
    QList<Cash>::Iterator h;
    for(j=funds->begin();j!=funds->end();++j){
        h=*j;
        cout<<"Funds: \tj.d="<<h->getDenomination()<<" \tj.c="<<h->getCount()<<endl;
    }
    return true;
} else {
    cout<<"FALSE-1: \tSum="<<sum<<" \ti.d="<<i->getDenomination()<<" \ti.c="<<i->getCount()<<endl;
    QList<QList<Cash>::Iterator>::Iterator j;
    QList<Cash>::Iterator h;
    for(j=funds->begin();j!=funds->end();++j){
        h=*j;
        cout<<"Funds: \tj.d="<<h->getDenomination()<<" \tj.c="<<h->getCount()<<endl;
    }
    i=funds->last();
    sum-=i->getDenomination();
    i->setCount(i->getCount()+1);
    funds->removeLast();
    if (i==--atm->end()) return false;
    cout<<"FALSE-2: \tSum="<<sum<<" \ti.d="<<i->getDenomination()<<" \ti.c="<<i->getCount()<<endl;
    ++i;
    if (i==atm->end()) return false;
    else {
        cout<<"FALSE-3: \tSum="<<sum<<" \ti.d="<<i->getDenomination()<<" \ti.c="<<i->getCount()<<endl;
        minCountOfBills(i,atm,funds,request,sum);
    }
}*/


/*bool isDefault(QList<Cash>* atm){
    QList<int> defDenomination;
    defDenomination.append(1000);
    defDenomination.append(500);
    defDenomination.append(200);
    defDenomination.append(100);
    defDenomination.append(50);
    QList<Cash>::iterator i;
    QList<int>::iterator j;
    int counter=0;
    for (i = atm->begin(); i != atm->end(); ++i){
        for (j=defDenomination.begin();j!=defDenomination.end();++j){
            if (i->getDenomination()==*j){
                counter++;
                break;
            }
        }
    }
    if (counter==atm->length()) return true;
    else return false;
}

void defaultWithdraw(int request, int minvalue, QList<Cash>::Iterator h, QList<Cash>* atm, QList<int> valueList){
    if (request==0){
        cout<<"Result: request="<<request<<"\th="<<h->getDenomination()<<"\tvalueList=";
        QList<int>::Iterator i;
        for (i=valueList.begin();i!=valueList.end();++i){
            cout<<*i<<" ";
        }
        cout<<endl;
        return;
    }
    if ((minvalue>=500)&&(request>=500)){
        valueList.append(500);
        defaultWithdraw(request-500,500,h,atm,valueList);
        valueList.removeLast();
    }
    if ((minvalue>=200)&&(request>=200)){
        valueList.append(200);
        defaultWithdraw(request-200,200,h,atm,valueList);
        valueList.removeLast();
    }
    if ((minvalue>=100)&&(request>=100)){
        valueList.append(100);
        defaultWithdraw(request-100,100,h,atm,valueList);
        valueList.removeLast();
    }
}*/

