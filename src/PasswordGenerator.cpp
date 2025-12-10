#include "PasswordGenerator.h"
#include <random>

PasswordGenerator::PasswordGenerator(int length, bool useUpper, bool useDigits, bool useSymbols)
    : length(length), useUpper(useUpper), useDigits(useDigits), useSymbols(useSymbols) {}


std::string PasswordGenerator::generate() const {
    const std::string lower = "abcdefghijklmnopqrstuvwxyz";
    const std::string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string digits = "0123456789";
    const std::string symbols = "!@#$%^&*()_+-=";

    std::string charset = lower; 

    if (useUpper) charset += upper; 
    if (useDigits) charset += digits;
    if (useSymbols) charset += symbols;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, charset.size() - 1);

    std::string pwd; 
    pwd.reserve(length);

    for(int i = 0; i < length; i++)
        pwd += charset[dist(gen)];
    
    return pwd; 
}