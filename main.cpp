#include "mainwindow.h"
#include "cash.h"
#include "cash_withdrawal.h"
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
                bill.set_denomination(i.key().toUInt());
                bill.set_count(i.value().toUInt());
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

    readJson(QCoreApplication::applicationDirPath() + "/../../Cash-Machine-simulation/cash_machine_conf.json");
    w.show();
    return a.exec();
}
