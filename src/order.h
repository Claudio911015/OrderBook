#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <memory>

class order
{

public:

    int amount;

    double time;

    int price;

    bool bid;
    
    order();
    
    virtual void execute(){};

    

};

#endif