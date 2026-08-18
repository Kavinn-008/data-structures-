#include <iostream>
#include <string>

// while loop keeps running while a condition is true.

int main() {
    std::string name;

    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        if (name.empty()) {
            std::cout << "Name cannot be empty. Try again.\n";
        }
    }

    std::cout << "Hello, " << name << "!\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ while.cpp -o while
    .\while.exe

Linux/Mac:
    g++ while.cpp -o while
    ./while
*/
