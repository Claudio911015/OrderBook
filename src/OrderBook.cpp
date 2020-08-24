#include <OrderBook.h>

OrderBook::OrderBook()
{
    ord_bid.reserve(MAX_ORDERS);

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


void OrderBook::insertElementSorted(std::vector<std::shared_ptr<order>> ord, std::shared_ptr<order> new_order)
{
    if(ord_bid.size() == 0){

        ord_bid.push_back(new_order);
        inserted = true; 

    }

    for(std::vector<std::shared_ptr<order>>::iterator i = ord_bid.begin(); i != ord_bid.end(); i++)
    {
        
        if(new_order > *i)
        {
            ord_bid.insert(i + 1,new_order);
            inserted = true; 
            break;
        }

    }

    if(! inserted)
    {
        ord_bid.push_back(new_order);
    }

    for(int i=0; i < ord_bid.size(); i++)
    {
        std::cout<<ord_bid[i]->price<<" ";
    }
    std::cout<<"\n";
}