//
//  main.cpp
//  hello-bost
//
//  Created by Israel Junior on 23/02/15.
//  Copyright (c) 2015 Israel Junior. All rights reserved.
//

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main(int argc, const char * argv[]) {
    
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;
    
    std::for_each(
                  in(std::cin), in(), std::cout << (_1 * 3) << " " );
    
    return 0;
}
