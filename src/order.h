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

    bool operator < (std::shared_ptr<order> order2) const;
    

};

#endif