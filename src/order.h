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
    order();
    
    virtual void execute(){};

    bool operator <(std::shared_ptr<order> order2);

};

#endif