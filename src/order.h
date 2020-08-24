#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <memory>

class order
{
private:

    int amount;

    double time;

public:

    int price;

    bool bid;
    
    order(int price_, int amount_, int time_, bool bid_);
    
    virtual void execute(){};

    bool operator <(std::shared_ptr<order> order2);

};

#endif