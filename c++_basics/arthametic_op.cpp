#include <iostream>
#include <string>

// This program shows basic arithmetic operations
// and how to take input from the user.

int main() {
    std::string name;
    int age;
    int number1 = 10;
    int number2 = 5;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!\n";

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "You are " << age << " years old.\n\n";

    std::cout << "Simple Math:\n";
    std::cout << number1 << " + " << number2 << " = " << (number1 + number2) << "\n";
    std::cout << number1 << " - " << number2 << " = " << (number1 - number2) << "\n";
    std::cout << number1 << " * " << number2 << " = " << (number1 * number2) << "\n";
    std::cout << number1 << " / " << number2 << " = " << (number1 / number2) << "\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ arthametic_op.cpp -o arthametic_op
    .\arthametic_op.exe

Linux/Mac:
    g++ arthametic_op.cpp -o arthametic_op
    ./arthametic_op
*/