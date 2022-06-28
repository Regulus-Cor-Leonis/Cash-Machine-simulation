#include "mainwindow.h"
#include "cash.h"
#include "cashwithdrawal.h"
#include <iostream>
#include <QApplication>
#include <QDebug>
#include <QString>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

void readJson(QString fileName){
    QFile file;
    file.setFileName(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QByteArray bytes = file.readAll();
        file.close();
        QJsonParseError jsonError;
        QJsonDocument document = QJsonDocument::fromJson( bytes, &jsonError );
        if( jsonError.error != QJsonParseError::NoError )
        {
            qDebug() << "Can't open";
            return;
        }
        if( document.isObject() )
        {
            QJsonObject jsonObj = document.object();
            QVariantMap cashMap = jsonObj.toVariantMap();
            QList<Cash> cash;

            QMapIterator<QString, QVariant> i(cashMap);
            Cash bill;
            while (i.hasNext()){
                i.next();
                bill.setDenomination(i.key().toUInt());
                bill.setCount(i.value().toUInt());
                cash.append(bill);
            }
        }

    }
    else {
        qDebug() << "Can't open";
    }
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug()<<argc;
    if (argc==1) {
        qDebug()<<"No arguments in command line";
        MainWindow w;
        w.show();
        return a.exec();
    }
    else{
        Cash* ptr= new Cash[(argc-1)];
        for (int i = 1; i < argc; i++) {
            QString value=QString(argv[i]);
            int pos=value.indexOf('=');
            ptr[i-1].setDenomination(value.left(pos).toInt());
            ptr[i-1].setCount(value.mid(pos+1).toInt());
        }
        CashWithdrawal* ATM=new CashWithdrawal(ptr, argc-1);
            /*for (int i=0;i<ATM->getCnt();i++){
                std::cout <<ATM->getMoney()[i].getDenomination()<< std::endl;
                std::cout <<ATM->getMoney()[i].getCount()<< std::endl;
            }*/
        issuance(ATM,500);
    }
    //delete[](ptr);

    //readJson(QCoreApplication::applicationDirPath() + "/../../Cash-Machine-simulation/cash_machine_conf.json");
    /*MainWindow w;
    w.show();
    return a.exec();*/
}
