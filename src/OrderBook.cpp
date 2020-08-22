#include <OrderBook.h>


OrderBook::OrderBook(int n)
{

    bid = n;

    std::cout<<"OrderBook xxcreated"<<std::endl;
}

int OrderBook::add(int a, int b)
{
    return a+b;
}

