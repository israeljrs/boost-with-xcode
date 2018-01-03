//
//  main.cpp
//  boost-hello-asio
//
//  Created by Israel Junior on 23/02/15.
//  Copyright (c) 2015 Israel Junior. All rights reserved.
//

#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

int main(int argc, const char * argv[]) {
    
    std::cout << "Por favor aguarde 5 segundos. ...\n";
    
    boost::asio::io_service io;
    boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
    t.wait();
    
    // insert code here...
    std::cout << "Hello, boost C++ ASIO !!!\n";
    return 0;
}
