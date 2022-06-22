#include "mainwindow.h"
#include "cash.h"
#include "cashwithdrawal.h"
#include <iostream>
#include <QApplication>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cash* ptr= new Cash[(argc-1)];
    for (int i = 1; i < argc; i++) {
        QString value=QString(argv[i]);
        int pos=value.indexOf('=');
        ptr[i-1].setDenomination(value.left(pos).toInt());
        ptr[i-1].setCount(value.mid(pos+1).toInt());
    }
    MainWindow w;
    CashWithdrawal* ATM=new CashWithdrawal(ptr, argc-1);
    /*for (int i=0;i<ATM->getCnt();i++){
        std::cout <<ATM->getMoney()[i].getDenomination()<< std::endl;
        std::cout <<ATM->getMoney()[i].getCount()<< std::endl;
    }*/
    issuance(ATM,500);
    //delete[](ptr);
    w.show();
    return a.exec();
}
