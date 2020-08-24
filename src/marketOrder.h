#include <order.h>

class marketOrder : public order
{
private:

    int amount;
    
public:

    bool bid;

    marketOrder(int price_, int amount_, int time_, bool bid_);
    
};
