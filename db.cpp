#include "db.h"
#include <QDebug>
#include <QSqlQuery>

void DB::dbConnect(QString hostName, QString databaseName){
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName(QString("DRIVER={SQL Server};"
                "SERVER=%1;DATABASE=%2;Persist Security Info=true;")
              .arg(hostName, databaseName));
    if (!db.open())
        qDebug() << "can't connect to db";
}


QList<Cash> DB::getBillsFromDB()
{
    QSqlQuery qry;
    QList<Cash> cash;
    Cash bill;
    qry.prepare("SELECT value, count from Bill");
    qry.exec();
    while (qry.next()) {
        bill.set_count(qry.value(0).toInt());
        bill.set_denomination(qry.value(1).toInt());
        cash.append(bill);
    }
    return cash;
}

void DB::insertBillsIntoDB(QList<Cash> &newCash)
{
    QList<Cash> oldCash = getBillsFromDB();
    QSqlQuery qry;
    int value, count;
    for (int i = 0; i < newCash.length(); ++i){
        for (int j = 0; j < oldCash.length(); ++j){
            value = newCash[i].get_denomination();
            count = newCash[i].get_count();
            if (newCash[i].get_denomination() == oldCash[j].get_denomination()){
                qry.prepare("UPDATE Bill SET count = count + :count WHERE value = :value");
                qry.bindValue(":value", value);
                qry.bindValue(":count", count);
                qry.exec();
            }
            else {
                qry.prepare("INSERT INTO Bill (value, count) VALUES (:value, :count)");
                qry.bindValue(":value", value);
                qry.bindValue(":count", count);
                qry.exec();
            }
        }
    }

}

void DB::withdrawBillsFromDB(QList<Cash> &withdrawCash)
{
    QSqlQuery qry;
    int value, count;
    for (int i = 0; i < withdrawCash.length(); ++i){
        value = withdrawCash[i].get_denomination();
        count = withdrawCash[i].get_count();
        qry.prepare("UPDATE Bill SET count = count - :count WHERE value = :value");
        qry.bindValue(":value", value);
        qry.bindValue(":count", count);
        qry.exec();
    }
}
