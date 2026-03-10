#include <order.h>

class marketOrder : public order
{
private:

    int amount;
    
public:

    bool bid;

    marketOrder(int amount_, bool bid_);
    
};
