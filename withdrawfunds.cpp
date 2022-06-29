#include "withdrawfunds.h"
#include "ui_withdrawfunds.h"
#include "readerror.h"
#include "mainwindow.h"
#include "db.h"
#include "successfulwithdraw.h"
#include "outofmoney.h"

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
        //qDebug()<<"It's i="<<i->getDenomination();
        for(j=i; j!=atm.end();++j){
            //qDebug()<<j->getDenomination();
            if (max<j->getDenomination()){
                maxj=j;
                max=j->getDenomination();
            }
        }
        //qDebug()<<"Max="<<maxj->getDenomination();
        int temp=i->getDenomination();
        i->setDenomination(maxj->getDenomination());
        maxj->setDenomination(temp);
        temp=i->getCount();
        i->setCount(maxj->getCount());
        maxj->setCount(temp);
        //qDebug()<<"after swap";
    }
    return atm;
}

QList<Cash> sortAscending(QList<Cash> atm){
    QList<Cash>::Iterator i;
    for (i = atm.begin(); i != atm.end(); ++i){
        QList<Cash>::Iterator j;
        QList<Cash>::Iterator minj=i;
        int min=i->getDenomination();
        //qDebug()<<"It's i="<<i->getDenomination();
        for(j=i; j!=atm.end();++j){
            //qDebug()<<j->getDenomination();
            if (min>j->getDenomination()){
                minj=j;
                min=j->getDenomination();
            }
        }
        //qDebug()<<"Max="<<maxj->getDenomination();
        int temp=i->getDenomination();
        i->setDenomination(minj->getDenomination());
        minj->setDenomination(temp);
        temp=i->getCount();
        i->setCount(minj->getCount());
        minj->setCount(temp);
        //qDebug()<<"after swap";
    }
    return atm;
}

bool minCountOfBills(QList<Cash> atm,int request){

    int sum=0;
    QList<Cash>::iterator i;
    for (i = atm.begin(); i != atm.end(); ++i){
        sum+=i->getCount()*i->getDenomination();
    }
    qDebug()<<sum;
    if (sum<request){
        return false;
    }
    else {
        const int INF=1000000000; // Значение константы }бесконечность}
        int* F=new int[request+1];
        F[0]=0;
        int m;
        for(m=1; m<=request; ++m)   // заполняем массив F
        {                     // m - сумма, которую нужно выдать
          F[m]=INF;           // помечаем, что сумму m выдать нельзя
          for (i = atm.begin(); i != atm.end(); ++i)  // перебираем все номиналы банкнот
          {
             if(m>=i->getDenomination() && F[m-i->getDenomination()]+1<F[m])
                 F[m] = F[m-i->getDenomination()]+1; // изменяем значение F[m], если нашли
          }                       // лучший способ выдать сумму m
        }
        if (F[request] == INF){
            qDebug()<<"Not success";
            return false;
        }
        else
        {
            int *denomination=new int[atm.length()];
            i=atm.begin();
            for(int j=0;j<atm.length();++j){
                denomination[j]=i->getDenomination();
                ++i;
            }
            int *count=new int[atm.length()];
            for(int i=0;i<atm.length();i++){
                count[i]=0;
            }
            int suma=0;
            while (request > 0)
            {
                for (i = atm.begin(); i != atm.end(); ++i)
                {
                    if (F[request - i->getDenomination()] == F[request] - 1)
                    {
                        qDebug() <<i->getDenomination() << " ";
                        for(int j=0;j<atm.length();j++){
                            if (i->getDenomination()==denomination[j]) count[j]++;
                        }
                        request -= i->getDenomination();
                        break;
                    }
                }
            }
            for(int i=0;i<atm.length();i++){
                //qDebug()<<count[i]<<" ";
            }
            int j=0;
            for (i = atm.begin(); i != atm.end(); ++i){
                //qDebug()<<atm->getMoney()[i].getCount()<<" "<<count[i];
                if (i->getCount()<count[j]){
                    suma+=(count[j]-i->getCount())*i->getDenomination();
                    i->setCount(0);
                } else {
                    i->setCount(i->getCount()-count[j]);
                }
                ++j;
            }
            if (suma==0) return true;
            minCountOfBills(atm,suma);
        }
    }
}

/*bool minCountOfBills(QList<Cash> atm,int request)
{
    QList<Cash>::Iterator i;
    i=atm.begin();
    int cnt=0;
    while(request>0 && i!=atm.end()){
        qDebug()<<cnt<<" "<<request<<" "<<i->getDenomination();
        cnt+=request/i->getDenomination();
        request=request%i->getDenomination();
        ++i;
    }
    qDebug()<<cnt;
    return true;
}*/

void issuance(QList<Cash> ATM, int request){
    qDebug()<<request;
    int sum=0;
    QList<Cash>::iterator i;
    for (i = ATM.begin(); i != ATM.end(); ++i){
        sum+=i->getCount()*i->getDenomination();
    }
    qDebug()<<sum;
    if (sum<request){
        qDebug()<<"Not enough funds at the ATM ";
        OutOfMoney *w=new OutOfMoney;
        w->show();
        return;
    } else {
        if (minCountOfBills(ATM,request)) {
            qDebug()<<"Success";
            SuccessfulWithdraw *w=new SuccessfulWithdraw;
            w->show();
        }
    }
}

void WithdrawFunds::on_pushButton_7_clicked()
{
    bool ok;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    //qDebug()<<ATM.length();
    long long int request=ui->lineEdit->text().toLongLong(&ok,10);
    if (ok==false){
        ReadError *w=new ReadError;
        w->show();
        ui->lineEdit->setText("");
    }
    else{
        //QList<Cash>::iterator i;
        ATM=sortAscending(ATM);
        /*for (i = ATM.begin(); i != ATM.end(); ++i){
            qDebug()<<i->getCount()<<" "<<i->getDenomination();
        }*/
        issuance(ATM,request);
    }
}

void WithdrawFunds::on_pushButton_2_clicked()
{
    int request=50;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    //qDebug()<<request<<"\n";
    ATM=sortAscending(ATM);
    issuance(ATM,request);
}

void WithdrawFunds::on_pushButton_3_clicked()
{
    int request=100;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    ATM=sortAscending(ATM);
    issuance(ATM,request);
}


void WithdrawFunds::on_pushButton_4_clicked()
{
    int request=200;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    ATM=sortAscending(ATM);
    issuance(ATM,request);
}


void WithdrawFunds::on_pushButton_5_clicked()
{
    int request=500;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    ATM=sortAscending(ATM);
    issuance(ATM,request);
}


void WithdrawFunds::on_pushButton_6_clicked()
{
    int request=1000;
    if (ATM.length()==0){
        DB* db = DB::getInstance();
        ATM=db->getBillsFromDB();
    }
    ATM=sortAscending(ATM);
    issuance(ATM,request);
}


void WithdrawFunds::on_pushButton_8_clicked()
{
    MainWindow *w=new MainWindow;
    w->setATM(ATM);
    w->show();
    this->close();
}

