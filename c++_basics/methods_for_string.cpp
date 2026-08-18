#include <iostream>
#include <string>

// This file shows some basic string functions.

int main() {
    std::string name = "Hello World";

    std::cout << "Original text: " << name << "\n";
    std::cout << "Length: " << name.length() << "\n";

    if (name.empty()) {
        std::cout << "The string is empty.\n";
    } else {
        std::cout << "The string is not empty.\n";
    }

    name.append("!");
    std::cout << "After append: " << name << "\n";

    std::cout << "First letter index: " << name.find('H') << "\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ methods_for_string.cpp -o methods_for_string
    .\methods_for_string.exe

Linux/Mac:
    g++ methods_for_string.cpp -o methods_for_string
    ./methods_for_string
*/