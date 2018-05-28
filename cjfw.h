#ifndef _cjfw_
#define _cjfw_

#include <string>
#include <iostream>

//std::ios_base::sync_with_stdio(false);
//std::cin.tie(nullptr);
    
template<unsigned long T>
void pretty_print(std::string (*f)()){ 
    for (unsigned long i = 1; i <= T; i++){ //Iterate through test cases
        std::cout << "Case #" << i << ": ";
        std::cout << f() << "\n";
    } 
}

#endif
