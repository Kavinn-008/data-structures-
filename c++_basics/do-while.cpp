#include <iostream>
#include <string>

// do-while loop runs at least once before checking the condition

int main() {
    std::string name;

    do {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        if (name.empty()) {
            std::cout << "Name cannot be empty. Please try again.\n";
        }
    } while (name.empty());

    std::cout << "Hello, " << name << "!\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ do-while.cpp -o do-while
    .\do-while.exe

Linux/Mac:
    g++ do-while.cpp -o do-while
    ./do-while
*/