#include <iostream>
#include <boost/asio.hpp>

int main() {
    boost::asio::io_service io_service;
    std::cout << "Hello, World!" << std::endl;
    return 0;

}