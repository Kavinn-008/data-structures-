#include <iostream>

// This program shows how to print different kinds of values.
// We can print whole numbers, decimal numbers, and text.

int main() {
    float value1 = 1.234;
    float value2 = 2.345;
    double value3 = 3.456789;
    int count = 42;

    std::cout << "Float value: " << value1 << "\n";
    std::cout << "Second float value: " << value2 << "\n";
    std::cout << "Double value: " << value3 << "\n";
    std::cout << "Integer value: " << count << "\n";

    std::cout << "\nThis is the beginner way to print values using cout.\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ formatspecifiers.cpp -o formatspecifiers
    .\formatspecifiers.exe

Linux/Mac:
    g++ formatspecifiers.cpp -o formatspecifiers
    ./formatspecifiers
*/