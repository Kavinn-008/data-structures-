#include <iostream>

// This program shows how arrays work.
// An array stores many values of the same type in one place.

int main() {
    // Create an array that can store 5 prices
    double prices[5];

    std::cout << "Enter 5 car prices:\n";

    for (int i = 0; i < 5; i++) {
        std::cout << "Car " << i + 1 << " price: ";
        std::cin >> prices[i];
    }

    std::cout << "\nThe prices are:\n";

    for (int i = 0; i < 5; i++) {
        std::cout << "Car " << i + 1 << ": " << prices[i] << "\n";
    }

    return 0;
}

/*
How to compile and run:
Windows:
    g++ array.cpp -o array
    .\array.exe

Linux/Mac:
    g++ array.cpp -o array
    ./array
*/