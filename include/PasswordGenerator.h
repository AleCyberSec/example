#pragma once 
#include <string>

class PasswordGenerator {
    public: 
        PasswordGenerator(int length = 12, bool useUpper = true, bool useDigits = true, bool useSymbols = true);
        std::string generate() const; 

    private: 
        int length; 
        bool useUpper; 
        bool useDigits; 
        bool useSymbols; 
};