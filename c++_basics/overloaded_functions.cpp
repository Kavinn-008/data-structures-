#include <iostream>
#include <string>

// This is a beginner-friendly example of function overloading.
// Overloading means we can create multiple functions with the same name,
// but different parameters.

// Function 1: no topping is given
void bakePizza() {
    std::cout << "Here is your plain pizza.\n";
}

// Function 2: one topping is given
void bakePizza(std::string topping) {
    std::cout << "Here is your " << topping << " pizza.\n";
}

int main() {
    // First command: call the function with no arguments
    bakePizza();

    // Ask the user for a topping
    std::string topping;
    std::cout << "Enter your topping: ";
    std::getline(std::cin, topping);

    // Second command: call the overloaded function with a topping
    bakePizza(topping);

    std::cout << "\nThank you for ordering!\n";

    return 0;
}

/*
How to compile and run this file:

Windows (Command Prompt):
    g++ overloaded_functions.cpp -o overloaded_functions
    overloaded_functions.exe

Linux or Mac:
    g++ overloaded_functions.cpp -o overloaded_functions
    ./overloaded_functions

This is a simple beginner example of function overloading.
*/