#include <iostream>
#include "PasswordGenerator.h"

int main () {
    std::cout << "Password generator starting..." << std::endl; 
    
    PasswordGenerator gen(16, true, true, true);

    std::cout << "Password generated: " << gen.generate() <<  std::endl; 
    
    return 0; 
}