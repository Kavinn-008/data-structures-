#include <iostream>

// Ternary operator is a short way to write if-else.

int main() {
    int number = 9;

    (number % 2 == 0)
        ? std::cout << number << " is an even number.\n"
        : std::cout << number << " is an odd number.\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ ternary_opp.cpp -o ternary_opp
    .\ternary_opp.exe

Linux/Mac:
    g++ ternary_opp.cpp -o ternary_opp
    ./ternary_opp
*/