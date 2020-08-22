#include <OrderBook.h>

OrderBook::OrderBook()
{
    ord.reserve(MAX_ORDERS);

    std::cout<<"OrhderBook xxcreated"<<std::endl;
}

void OrderBook::insertElementSorted(std::shared_ptr<order> new_order)
{
    if(ord.size() == 0){

        ord.push_back(new_order);
        inserted = true; 

    }

    for(std::vector<std::shared_ptr<order>>::iterator i = ord.begin(); i != ord.end(); i++)
    {
        
        if(new_order > *i)
        {
            ord.insert(i,*i);
            inserted = true; 
            break;
        }

    }

    if(! inserted)
    {
        ord.push_back(new_order);
    }

}