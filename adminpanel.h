#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include "db.h"
#include "cash.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>

namespace Ui {
class AdminPanel;
}

class AdminPanel : public QMainWindow
{
    Q_OBJECT
    QList<Cash> ATM;

public:
    explicit AdminPanel(QWidget *parent = nullptr);
    ~AdminPanel();
    void setATM(QList<Cash> atm){this->ATM=atm;}
    QList<Cash> getATM(){return this->ATM;}

private:
    Ui::AdminPanel *ui;

private slots:
    void showTime();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_tableView_clicked(const QModelIndex &index);
    void on_pushButton_10_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_9_clicked();
};

#endif // ADMINPANEL_H
