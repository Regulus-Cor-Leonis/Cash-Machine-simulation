#ifndef CASH_H
#define CASH_H


class Cash
{
    int denomination;
    int count;
public:
    Cash();
    void set_denomination(int value){this->denomination=value;}
    void set_count(int value){this->count=value;}
    int get_denomination() {return this->denomination;}
    int get_count(){return this->count;}
};


#endif // CASH_H
