#include <order.h>

order::order()
{

    std::cout<<"I am an order \n";

}

bool order::operator<(std::shared_ptr<order> order2)
{
    return((order2->price < order::price) & (order2->time < order::time));
}
