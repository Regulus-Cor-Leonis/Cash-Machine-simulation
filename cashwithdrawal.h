#ifndef CASH_WITHDRAWAL_H
#define CASH_WITHDRAWAL_H
#include "cash.h"

class CashWithdrawal
{
    Cash* money;
    int cnt;
public:
    CashWithdrawal();
    CashWithdrawal(Cash*, int count);
    void setMoney(Cash* data_money){this->money=data_money;}
    void setCnt(int count){this->cnt=count;}
    Cash* getMoney() {return this->money;}
    int getCnt(){return this->cnt;}
    int getSum();
};

#endif // CASH_WITHDRAWAL_H
