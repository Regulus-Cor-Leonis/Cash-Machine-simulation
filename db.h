#ifndef DB_H
#define DB_H

#include <QString>
#include <QSqlDatabase>
#include "cash.h"

class DB
{
    QSqlDatabase db;

public:
    DB(){}

    void dbConnect(QString hostName, QString databaseName);
    QList<Cash> getBillsFromDB();
    void insertBillsIntoDB(QList<Cash> cash);
    void withdrawBillsFromDB(QList<Cash> withdrawCash);

};

#endif // DB_H
