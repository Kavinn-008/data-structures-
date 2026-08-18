#include <iostream>
#include <string>

// Namespaces help us separate variables and functions.
// This is useful when two parts of code use the same name.

namespace first {
    int score = 10;
    std::string name = "Alice";
}

namespace second {
    int score = 20;
    std::string name = "Bob";
}

int main() {
    std::cout << "First score: " << first::score << "\n";
    std::cout << "First name: " << first::name << "\n";

    std::cout << "Second score: " << second::score << "\n";
    std::cout << "Second name: " << second::name << "\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ namespace.cpp -o namespace
    .\namespace.exe

Linux/Mac:
    g++ namespace.cpp -o namespace
    ./namespace
*/