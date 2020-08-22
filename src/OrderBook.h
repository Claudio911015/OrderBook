#include <vector>
#include <iostream>
#include <order.h>

#include <memory>

class OrderBook
{
private:
    std::vector<std::shared_ptr<order>> ord;
    const int MAX_ORDERS = 10000000;
    bool inserted = false;
public:
    OrderBook(/* args */);
    
    void insertElementSorted(std::shared_ptr<order> new_order);

};

