#include "mainwindow.h"
#include "cash.h"
#include "cash_withdrawal.h"
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
        ptr[i-1].set_denomination(value.left(pos).toInt());
        ptr[i-1].set_count(value.mid(pos+1).toInt());
    }
    MainWindow w;
    Cash_withdrawal ATM(ptr, argc-1);
    for (int i=0;i<ATM.get_cnt();i++){
        std::cout <<ATM.get_money()[i].get_denomination()<< std::endl;
        std::cout <<ATM.get_money()[i].get_count()<< std::endl;
    }
    ATM.issuance(100000000);
    //delete[](ptr);
    w.show();
    return a.exec();
}