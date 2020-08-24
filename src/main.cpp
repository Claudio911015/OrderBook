#include <iostream>
#include <OrderBook.h>
#include <order.h>
#include <marketOrder.h>


int main() {

    std::shared_ptr<order> nn(new order(10,5,0.0,true));

    std::shared_ptr<order> nn2(new order(5,5,1.0,true));

    std::shared_ptr<order> nn3(new order(7,1,1.0,true));

    //std::shared_ptr<marketOrder> nn4(new marketOrder(20));

    std::shared_ptr<OrderBook> bx(new OrderBook());

    bx->updateOrderBook(nn);

    bx->updateOrderBook(nn);
    
    bx->updateOrderBook(nn2);
    
    bx->updateOrderBook(nn3);

}

