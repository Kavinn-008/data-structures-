// Type Aliases - Creating shorter names for data types
// typedef and using are two ways to create nicknames for types
//
// COMPILE: g++ -std=c++11 -o typedef typedef.cpp
// RUN: ./typedef.exe

#include <iostream>
#include <vector>

// Old way: typedef (creates an alias for a type)
typedef int  i;                    // Now 'i' is a nickname for 'int'
typedef std::string str;           // Now 'str' is a nickname for 'std::string'

// Modern way: using (C++11 standard, better and easier)
using bubu = bool;                 // Now 'bubu' is a nickname for 'bool'
using dot = double;                // Now 'dot' is a nickname for 'double'

int main() {
    // Using our custom type names
    i x = 1;                       // x is an integer (using typedef alias 'i')
    str s = "kavin";               // s is a string (using typedef alias 'str')
    
    bubu flag = false;              // flag is a bool (using 'using' alias 'bubu')
    dot pi = 3.14159;              // pi is a double (using 'using' alias 'dot')
    
    // Display the values
    std::cout << "Integer x: " << x << "\n";
    std::cout << "String s: " << s << "\n";
    std::cout << "Boolean flag: " << (flag ? "true" : "false") << "\n";
    std::cout << "Double pi: " << pi << "\n";
    
    return 0;
}