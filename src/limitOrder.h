#ifndef LIMITORDER_H
#define LIMITORDER_H

#include <order.h>
#include <iostream>
#include <memory>

class limitOrder: public order
{

public:
    
    limitOrder(int price_, int amount_, int time_, bool bid_);
    
    void execute(){};

    bool operator <(std::shared_ptr<limitOrder> order2);


};

#endif