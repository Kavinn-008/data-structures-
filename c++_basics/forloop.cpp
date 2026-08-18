#include <iostream>
#include <string>

// A for loop repeats code a fixed number of times.

int main() {
    std::string name;

    for (int i = 1; i <= 3; i++) {
        std::cout << "Enter name " << i << ": ";
        std::getline(std::cin, name);

        std::cout << "You entered: " << name << "\n";
    }

    std::cout << "The loop is finished.\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ forloop.cpp -o forloop
    .\forloop.exe

Linux/Mac:
    g++ forloop.cpp -o forloop
    ./forloop
*/