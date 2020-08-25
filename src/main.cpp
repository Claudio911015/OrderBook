#include <iostream>
#include <OrderBook.h>
#include <limitOrder.h>
#include <marketOrder.h>


int main() {

    std::shared_ptr<limitOrder> nn(new limitOrder(10,5,5.0,false));

    std::shared_ptr<limitOrder> nn2(new limitOrder(15,5,10.0,false));

    std::shared_ptr<limitOrder> nn3(new limitOrder(13,5,2.0,false));

    std::shared_ptr<limitOrder> nn4(new limitOrder(12,5,2.0,false));

    std::shared_ptr<limitOrder> nn5(new limitOrder(17,5,2.0,false));

    std::shared_ptr<marketOrder> nn6(new  marketOrder(1,true));

    std::shared_ptr<OrderBook> bx(new OrderBook());
    
    bx->updateOrderBook(nn);

    bx->updateOrderBook(nn2);
    
    bx->updateOrderBook(nn3);

    bx->updateOrderBook(nn4);

    bx->updateOrderBook(nn5);

    //bx->updateOrderBook(nn6);

}

