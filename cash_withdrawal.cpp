#include "cash_withdrawal.h"
#include <iostream>

Cash_withdrawal::Cash_withdrawal(Cash* data_money, int count)
{
    this->money=data_money;
    this->cnt=count;
}

int Cash_withdrawal::get_sum()
{
    int sum=0;
    for(int i=0;i<this->cnt;i++){
        sum+=this->money[i].get_count()*this->money[i].get_denomination();
    }
    return sum;
}


void Cash_withdrawal::issuance(int request)
{
    int sum=this->get_sum();
    if (sum<request){
        std::cout<<"Not enough funds at the ATM"<<std::endl;
        return;
    } else {

    }
}
