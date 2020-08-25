#include <iostream>
#include <OrderBook.h>
#include <limitOrder.h>
#include <marketOrder.h>


int main() {

    std::shared_ptr<limitOrder> nn(new limitOrder(10,5,5.0,false));

    std::shared_ptr<limitOrder> nn2(new limitOrder(15,5,10.0,false));

    std::shared_ptr<limitOrder> nn3(new limitOrder(20,5,2.0,false));

    //std::shared_ptr<order> nn2(new order(5,5,1.0,true));

    //std::shared_ptr<order> nn3(new order(7,1,1.0,true));

    std::shared_ptr<marketOrder> nn4(new  marketOrder(1,true));

    std::shared_ptr<OrderBook> bx(new OrderBook());
    
    bx->updateOrderBook(nn);

    bx->updateOrderBook(nn2);
    
    bx->updateOrderBook(nn3);
    
    //bx->updateOrderBook(nn4);

}

