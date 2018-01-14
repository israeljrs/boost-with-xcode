//
//  main.cpp
//  StringBoost
//
//  Created by Israel Junior on 13/01/18.
//  Copyright © 2018 Israel Junior. All rights reserved.
//

#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>

int main(int argc, const char * argv[]) {
    
    std::string data = "boost library is simple.";
    
    //convert string to upper case.
    boost::to_upper(data);
    std::cout << "In upper case : " << data << std::endl;
    
    //convert string to back to lower case.
    boost::to_lower(data);
    std::cout << "In lower case : " << data << std::endl;
    
    return 0;
}
