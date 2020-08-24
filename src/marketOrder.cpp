#include <marketOrder.h>

marketOrder::marketOrder(int price_, int amount_, int time_, bool bid_) : order(price_, amount_, time_, bid_)                                             
{
    amount = amount_;

    bid = bid_;

    std::cout<<"I am a market Order \n";

}