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
    void insertBillsIntoDB(Cash &newCash);
    void withdrawBillsFromDB(QList<Cash> &withdrawCash);

};

#endif // DB_H
