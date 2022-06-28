#include "cashwithdrawal.h"
#include <QDebug>
#include <iostream>

CashWithdrawal::CashWithdrawal()
{
    this->cnt=0;
}

CashWithdrawal::CashWithdrawal(Cash* data_money, int count)
{
    this->money=data_money;
    this->cnt=count;
}

int CashWithdrawal::getSum()
{
    int sum=0;
    for(int i=0;i<this->cnt;i++){
        sum+=this->money[i].getCount()*this->money[i].getDenomination();
    }
    return sum;
}

