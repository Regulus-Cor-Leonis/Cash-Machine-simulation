#include "Headers\db.h"
#include <QDebug>
#include <QSqlQuery>

DB *DB::instance = nullptr;

void DB::dbConnect(QString hostName, QString databaseName){
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName(QString("DRIVER={SQL Server};"
                "SERVER=%1;DATABASE=%2;Persist Security Info=true;")
              .arg(hostName, databaseName));
    if (!db.open())
        qDebug() << "can't connect to db";
}


DB *DB::getInstance()
{
    if (instance == nullptr){
        instance = new DB();
        instance->dbConnect("DESKTOP-BLMSA4C", "CashMachine");
    }
    return instance;
}


QList<Cash> DB::getBillsFromDB()
{
    QSqlQuery qry;
    QList<Cash> cash;
    Cash bill;
    qry.prepare("SELECT value, count from Bill");
    qry.exec();
    while (qry.next()) {
        bill.setCount(qry.value(1).toInt());
        bill.setDenomination(qry.value(0).toInt());
        cash.append(bill);
    }
    return cash;
}

QSqlQueryModel *DB::getBillsModelFromDB()
{
    QSqlQuery qry;
    QSqlQueryModel *model = new QSqlQueryModel();
    qry.prepare("SELECT value, count from Bill");
    qry.exec();
    model->setQuery(std::move(qry));
    return model;
}

void DB::deleteBillsFromDB(const int &billValue)
{
    QSqlQuery qry;
    qry.prepare("DELETE FROM Bill WHERE value = :value");
    qry.bindValue(":value", billValue);
    qry.exec();

}

void DB::insertBillsIntoDB(Cash &newCash)
{
    QList<Cash> oldCash = getBillsFromDB();
    QSqlQuery qry;
    int value = newCash.getDenomination();
    int count = newCash.getCount();
    bool flag = false;
    for (int i = 0; i < oldCash.length(); ++i){
        if (newCash.getDenomination() == oldCash[i].getDenomination()){
            flag = true;
            break;
        }
    }
    if (flag){
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

//delete cash from db after withdrawal
void DB::withdrawBillsFromDB(QList<int>& withdrawCash)
{
    QSqlQuery qry;
    int value;
    for (int i = 0; i < withdrawCash.length(); ++i) {
        value = withdrawCash[i];
        qry.prepare("UPDATE Bill SET count = count - 1 WHERE value = :value");
        qry.bindValue(":value", value);
        qry.exec();
    }
}

void DB::updateBillsInDB(Cash &newCash)
{
    QList<Cash> oldCash = getBillsFromDB();
    QSqlQuery qry;
    int value = newCash.getDenomination();
    int count = newCash.getCount();
    bool flag = false;
    for (int i = 0; i < oldCash.length(); ++i){
        if (newCash.getDenomination() == oldCash[i].getDenomination()){
            flag = true;
            break;
        }
    }
    if (flag){
        qry.prepare("UPDATE Bill SET count = :count WHERE value = :value");
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
