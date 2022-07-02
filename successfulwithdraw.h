#ifndef SUCCESSFULWITHDRAW_H
#define SUCCESSFULWITHDRAW_H

#include <QMainWindow>
#include <QList>
#include "math.h"
#include <QPropertyAnimation>
#include <QPushButton>
#include <QFrame>
#include <QTimer>
#include <QThread>
#include <QDateTime>
#include <QDebug>

namespace Ui {
class SuccessfulWithdraw;
}

class SuccessfulWithdraw : public QMainWindow
{
    Q_OBJECT
    QList<int> resFunds;

public:
    explicit SuccessfulWithdraw(QList<int> resFunds, QWidget *parent = nullptr);
    ~SuccessfulWithdraw();
    //----------------------------------------------------
    int count;
    int iteration;
    int iterator;
    int countA;
    QTimer* timerA;

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::SuccessfulWithdraw *ui;

private slots:
    void animationCash();
    void stop();

};

#endif // SUCCESSFULWITHDRAW_H
