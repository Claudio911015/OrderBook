#include <order.h>

order::order(int price_, int amount_, int time_, bool bid_):
                                                price(price_),
                                                amount(amount_),
                                                time(time_),
                                                bid(bid_)
{

    std::cout<<"I am an order \n";

}

bool order::operator<(std::shared_ptr<order> order2)
{
    return((order2->price < order::price) & (order2->time < order::time));
}
