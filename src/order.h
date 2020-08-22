#ifndef ORDER_H
#define ORDER_H

#include <iostream>

class order
{
private:
    int price;
    int amount;
    double time;
public:
    order();
    
    virtual void execute(){};

    virtual bool operator <(order& order2){return true;};

};

#endif