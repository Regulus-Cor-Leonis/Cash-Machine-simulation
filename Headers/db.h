#ifndef DB_H
#define DB_H

#include <QString>
#include <QSqlDatabase>
#include "cash.h"
#include <QSqlQueryModel>

class DB
{
    QSqlDatabase db;

    static DB *instance;
    DB(){}
    void dbConnect(QString hostName, QString databaseName);

public:
    DB(DB &other) = delete;
    void operator=(const DB &) = delete;
    static DB *getInstance();

    QList<Cash> getBillsFromDB();
    QSqlQueryModel *getBillsModelFromDB();
    void deleteBillsFromDB(const int &billValue);
    void insertBillsIntoDB(Cash &newCash);
    void withdrawBillsFromDB(QList<int> &withdrawCash);
    void updateBillsInDB(Cash &newCash);

};

#endif // DB_H
