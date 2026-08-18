#include <iostream>
#include <string>

// This program uses if and else to make decisions.

int main() {
    int age;
    std::string name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your name: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    if (age < 18) {
        std::cout << name << ", you are a minor.\n";
    } else if (age >= 18 && age < 60) {
        std::cout << name << ", you are an adult.\n";
    } else {
        std::cout << name << ", you are a senior adult.\n";
    }

    return 0;
}

/*
How to compile and run:
Windows:
    g++ conditional_statements.cpp -o conditional_statements
    .\conditional_statements.exe

Linux/Mac:
    g++ conditional_statements.cpp -o conditional_statements
    ./conditional_statements
*/