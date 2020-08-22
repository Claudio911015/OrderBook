#ifndef ORDER_H
#define ORDER_H

#include <iostream>

class order
{
private:
    int price;
    int amount;
public:
    order();
    
    virtual void execute(){};

};


#endif