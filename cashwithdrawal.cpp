#include "cashwithdrawal.h"
#include <iostream>

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

void issuance(CashWithdrawal* ATM, int request)
{
    std::cout<<"\n"<<request<<std::endl;
    int sum=ATM->getSum();
    if (sum<request){
        std::cout<<"Not enough funds at the ATM"<<std::endl;
        return;
    } else {
        const int INF=1000000000;
        int *F=new int[request+1];
        F[0] = 0;
        int m, i;
        for (m = 1; m <= request; ++m)
        {
            F[m] = INF;
            for (i = 0; i < ATM->getCnt(); ++i)
            {
                if (ATM->getMoney()[i].getCount()>0)
                    if (m >= ATM->getMoney()[i].getDenomination() && F[m - ATM->getMoney()[i].getDenomination()] + 1 < F[m])
                        F[m] = F[m - ATM->getMoney()[i].getDenomination()] + 1;
            }
        }
        //std::cout << F[request] << std::endl;

        if (F[request] == INF)
            std::cout << "Impossible" << std::endl;
        else
        {
            int *denomination=new int[ATM->getCnt()];
            for(int i=0;i<ATM->getCnt();i++){
                denomination[i]=ATM->getMoney()[i].getDenomination();
            }
            int *count=new int[ATM->getCnt()];
            for(int i=0;i<ATM->getCnt();i++){
                count[i]=0;
            }
            int suma=0;
            while (request > 0)
            {
                for (i = 0; i < ATM->getCnt(); ++i)
                {
                    if (F[request - ATM->getMoney()[i].getDenomination()] == F[request] - 1)
                    {
                        std::cout << ATM->getMoney()[i].getDenomination() << " ";
                        for(int j=0;j<ATM->getCnt();j++){
                            if (ATM->getMoney()[i].getDenomination()==denomination[j]) count[j]++;
                        }
                        request -= ATM->getMoney()[i].getDenomination();
                        break;
                    }
                }
            }
            for(int i=0;i<ATM->getCnt();i++){
                std::cout<<count[i]<<" ";
            }
            for(int i=0;i<ATM->getCnt();i++){
                if (ATM->getMoney()[i].getCount()<count[i]){
                    suma+=(count[i]-ATM->getMoney()[i].getCount())*ATM->getMoney()[i].getDenomination();
                    ATM->getMoney()[i].setCount(0);
                } else {
                    ATM->getMoney()[i].setCount(ATM->getMoney()[i].getCount()-count[i]);
                }
            }
            if (suma==0) return;
            issuance(ATM,suma);
        }

    }
}
