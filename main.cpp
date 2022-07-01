#include "mainwindow.h"
#include "cash.h"
#include <iostream>
#include <QApplication>
#include <QDebug>
#include <QString>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include "Windows.h"

/*void Console()
{
    AllocConsole();
    FILE *pFileCon = NULL;
    pFileCon = freopen("CONOUT$", "w", stdout);

    COORD coordInfo;
    coordInfo.X = 130;
    coordInfo.Y = 9000;

    SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), coordInfo);
    SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE),ENABLE_QUICK_EDIT_MODE| ENABLE_EXTENDED_FLAGS);
}*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //qDebug()<<argc;
    if (argc==1) {
        qDebug()<<"No arguments in command line";
        MainWindow w;
        w.show();
        return a.exec();
    }
    else{
        QList<Cash> ATM;
        Cash bill;
        for (int i = 1; i < argc; i++) {
            QString value=QString(argv[i]);
            int pos=value.indexOf('=');
            bill.setDenomination(value.left(pos).toInt());
            bill.setCount(value.mid(pos+1).toInt());
            ATM.append(bill);
        }
        //Console();
        MainWindow w;
        w.setATM(ATM);
        w.show();
        return a.exec();
    }
}
