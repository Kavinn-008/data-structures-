#include <iostream>
#include <cmath>

// This program shows a few basic math functions from <cmath>.

int main() {
    double a = 2.34;
    double b = 3.867;

    std::cout << "Maximum: " << std::max(a, b) << "\n";
    std::cout << "Minimum: " << std::min(a, b) << "\n";
    std::cout << "Square root of 16: " << std::sqrt(16) << "\n";
    std::cout << "Power: " << std::pow(2, 3) << "\n";
    std::cout << "Round: " << std::round(b) << "\n";
    std::cout << "Ceiling: " << std::ceil(a) << "\n";
    std::cout << "Floor: " << std::floor(a) << "\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ somemath.cpp -o somemath
    .\somemath.exe

Linux/Mac:
    g++ somemath.cpp -o somemath
    ./somemath
*/