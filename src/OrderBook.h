#include <vector>
#include <iostream>
#include <order.h>

#include <memory>

class OrderBook
{
private:

    std::vector<std::shared_ptr<order>> ord_bid;

    std::vector<std::shared_ptr<order>> ord_ask;

    const int MAX_ORDERS = 10000000;

public:

    OrderBook(/* args */);
    
    void updateOrderBook(std::shared_ptr<order> new_order);

    void insertElementSorted(std::vector<std::shared_ptr<order>>& ord, std::shared_ptr<order> new_order);

    

};

