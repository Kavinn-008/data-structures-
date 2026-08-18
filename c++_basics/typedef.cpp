#include <iostream>
#include <string>

// typedef and using let us create shorter names for data types.

using Number = int;
using Text = std::string;
using Decimal = double;

int main() {
    Number age = 21;
    Text name = "Alice";
    Decimal price = 19.99;

    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Price: " << price << "\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ typedef.cpp -o typedef
    .\typedef.exe

Linux/Mac:
    g++ typedef.cpp -o typedef
    ./typedef
*/