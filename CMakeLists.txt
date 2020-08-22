cmake_minimum_required(VERSION 3.0.0)
project(OrderBook VERSION 0.1.0)

include(CTest)
enable_testing()


include_directories(src)
add_executable(OrderBook src/main.cpp 
                         src/OrderBook.cpp
                         src/OrderBook.h
                         src/order.h
                         src/order.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
