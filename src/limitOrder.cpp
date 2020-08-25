#include <limitOrder.h>

limitOrder::limitOrder(int price_, int amount_, int time_, bool bid_)
{
    this->price = price_;
    this->amount = amount_;
    this ->bid = bid_;
    this ->time = time_;
    std::cout<<"I am a limit order \n";

}


bool limitOrder::operator<(std::shared_ptr<limitOrder> order2)
{
    return((order2->price < limitOrder::price) & (order2->time < limitOrder::time));
}

