#include <iostream>
#include <string>

// Variables are like boxes that store data.

int main() {
    int age = 20;
    double height = 5.9;
    std::string city = "Colombo";

    std::cout << "Age: " << age << "\n";
    std::cout << "Height: " << height << "\n";
    std::cout << "City: " << city << "\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ variables.cpp -o variables
    .\variables.exe

Linux/Mac:
    g++ variables.cpp -o variables
    ./variables
*/