#include <marketOrder.h>

marketOrder::marketOrder(int amount_, bool bid_)                                           
{
    amount = amount_;

    bid = bid_;

    std::cout<<"I am a market Order \n";

}