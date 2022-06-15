#ifndef CASH_WITHDRAWAL_H
#define CASH_WITHDRAWAL_H
#include "cash.h"

class Cash_withdrawal
{
    Cash* money;
    int cnt;
public:
    Cash_withdrawal(Cash*, int count);
    void set_money(Cash* data_money){this->money=data_money;}
    void set_cnt(int count){this->cnt=count;}
    Cash* get_money() {return this->money;}
    int get_cnt(){return this->cnt;}
    int get_sum();
    void issuance(int);
};

#endif // CASH_WITHDRAWAL_H
