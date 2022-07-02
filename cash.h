#ifndef CASH_H
#define CASH_H


class Cash
{
    int denomination;
    int count;
public:
    Cash(){}
    void setDenomination(int value){this->denomination=value;}
    void setCount(int value){this->count=value;}
    int getDenomination() {return this->denomination;}
    int getCount(){return this->count;}
};


#endif // CASH_H
