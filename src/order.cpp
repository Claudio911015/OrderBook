#include <order.h>

order::order()
{

    std::cout<<"I am an order \n";

}

bool order::operator < (std::shared_ptr<order> order2) const
{
    return(this->price > order2->price);
}
