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

bool minCountOfBills(CashWithdrawal *atm,int request)
{
    int sum=atm->getSum();
    if (sum<request){
        qDebug()<<"Not enough funds at the ATM";
        return false;
    } else {
        const int INF=1000000000;
        int *F=new int[request+1];
        F[0] = 0;
        int m, i;
        for (m = 1; m <= request; ++m)
        {
            F[m] = INF;
            for (i = 0; i < atm->getCnt(); ++i)
            {
                if (atm->getMoney()[i].getCount()>0)
                    if (m >= atm->getMoney()[i].getDenomination() && F[m - atm->getMoney()[i].getDenomination()] + 1 < F[m])
                        F[m] = F[m - atm->getMoney()[i].getDenomination()] + 1;
            }
        }
        qDebug() << "Result: "<<F[request] ;

        if (F[request] == INF)
            return false;
        else
        {
            int *denomination=new int[atm->getCnt()];
            for(int i=0;i<atm->getCnt();i++){
                denomination[i]=atm->getMoney()[i].getDenomination();
            }
            int *count=new int[atm->getCnt()];
            for(int i=0;i<atm->getCnt();i++){
                count[i]=0;
            }
            int suma=0;
            while (request > 0)
            {
                for (i = 0; i < atm->getCnt(); ++i)
                {
                    if (F[request - atm->getMoney()[i].getDenomination()] == F[request] - 1)
                    {
                        //qDebug() << atm->getMoney()[i].getDenomination() << " ";
                        for(int j=0;j<atm->getCnt();j++){
                            if (atm->getMoney()[i].getDenomination()==denomination[j]) count[j]++;
                        }
                        request -= atm->getMoney()[i].getDenomination();
                        break;
                    }
                }
            }
            for(int i=0;i<atm->getCnt();i++){
                //qDebug()<<count[i]<<" ";
            }
            for(int i=0;i<atm->getCnt();i++){
                //qDebug()<<atm->getMoney()[i].getCount()<<" "<<count[i];
                if (atm->getMoney()[i].getCount()<count[i]){
                    suma+=(count[i]-atm->getMoney()[i].getCount())*atm->getMoney()[i].getDenomination();
                    atm->getMoney()[i].setCount(0);
                } else {
                    atm->getMoney()[i].setCount(atm->getMoney()[i].getCount()-count[i]);
                }
            }
            if (suma==0) return true;
            minCountOfBills(atm,suma);
        }
    }
}

void issuance(CashWithdrawal* ATM, int request){
    if (ATM->getCnt()==0){
        //тут підтягуємо дані з бд
    } else{
        qDebug()<<request;
        int sum=ATM->getSum();
        qDebug()<<sum;
        if (sum<request){
            qDebug()<<"Not enough funds at the ATM ";
            return;
        } else {
            for(int i=0;i<ATM->getCnt();++i){
                qDebug()<<ATM->getMoney()[i].getDenomination()<<" ";
            }
            if (minCountOfBills(ATM,request)) qDebug()<<"Success";
        }
    }
}

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
        //qDebug()<<request<<"\n";
        //qDebug()<<ATM->getCnt();
        //issuance(ATM,request);
        /*for(int i=0;i<ATM->getCnt();++i){
            qDebug()<<ATM->getMoney()[i].getCount()<<" Space "<<ATM->getMoney()[i].getDenomination();
        }*/
    }
}

void WithdrawFunds::on_pushButton_2_clicked()
{
    int request=50;
    /*qDebug()<<request<<"\n";
    issuance(ATM,request);*/
}

void WithdrawFunds::on_pushButton_3_clicked()
{
    int request=100;
    /*qDebug()<<request<<"\n";
    issuance(ATM,request);*/
}


void WithdrawFunds::on_pushButton_4_clicked()
{
    int request=200;
    /*qDebug()<<request<<"\n";
    issuance(ATM,request);*/
}


void WithdrawFunds::on_pushButton_5_clicked()
{
    int request=500;
    /*qDebug()<<request<<"\n";
    issuance(ATM,request);*/
}


void WithdrawFunds::on_pushButton_6_clicked()
{
    int request=1000;
    /*qDebug()<<request<<"\n";
    issuance(ATM,request);*/
}

