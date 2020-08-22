#include <iostream>
#include <OrderBook.h>
#include <order.h>



int main() {

    std::shared_ptr<order> nn(new order(10,5,0.0));

    std::shared_ptr<order> nn2(new order(15,5,1.0));

    std::shared_ptr<order> nn3(new order(20,1,1.0));

    std::shared_ptr<OrderBook> bx(new OrderBook());

    

    return 0;


}

