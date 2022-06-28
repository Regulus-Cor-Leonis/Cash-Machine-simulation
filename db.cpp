#include "db.h"
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
        instance->dbConnect("DESKTOP-ONV4O98", "CashMachine");
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
        bill.set_count(qry.value(0).toInt());
        bill.set_denomination(qry.value(1).toInt());
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
    int value = newCash.get_denomination();
    int count = newCash.get_count();
    bool flag = false;
    for (int i = 0; i < oldCash.length(); ++i){
        if (newCash.get_denomination() == oldCash[i].get_denomination()){
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

void DB::updateBillsInDB(Cash &newCash)
{
    QList<Cash> oldCash = getBillsFromDB();
    QSqlQuery qry;
    int value = newCash.get_denomination();
    int count = newCash.get_count();
    bool flag = false;
    for (int i = 0; i < oldCash.length(); ++i){
        if (newCash.get_denomination() == oldCash[i].get_denomination()){
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
