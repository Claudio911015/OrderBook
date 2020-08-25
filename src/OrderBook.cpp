#include <OrderBook.h>

OrderBook::OrderBook()
{
    ord_bid.reserve(MAX_ORDERS);

    ord_ask.reserve(MAX_ORDERS);

    std::cout<<"OrhderBook xxcreated"<<std::endl;
}

void OrderBook::updateOrderBook(std::shared_ptr<order> new_order)
{
    if(new_order->bid)
    {
        OrderBook::insertElementSorted(ord_bid, new_order);
    }
    else
    {
        OrderBook::insertElementSorted(ord_ask, new_order);    
    }
    
}


void OrderBook::insertElementSorted(std::vector<std::shared_ptr<order>>& ord, std::shared_ptr<order> new_order)
{
    bool inserted = false;

    if(ord.size() == 0){

        ord.push_back(new_order);
        inserted = true; 

    }

    for(std::vector<std::shared_ptr<order>>::iterator i = ord.begin(); i != ord.end(); i++)
    {

        if(new_order->price < (*i)->price)
        {
            ord.insert(i,new_order);
            inserted = true; 
            break; 
        }

    }

    if(! inserted)
    {
        ord.push_back(new_order);
    }

    for(int i=0; i < ord.size(); i++)
    {
        std::cout<<ord[i]->price<<" ";
    }
    std::cout<<"\n";
}