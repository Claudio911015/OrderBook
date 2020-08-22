#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <memory>

class order
{
private:

    int price;

    int amount;

    double time;

public:
    order(int price_, int amount_, int time_);
    
    virtual void execute(){};

    bool operator <(std::shared_ptr<order> order2);

};

#endif