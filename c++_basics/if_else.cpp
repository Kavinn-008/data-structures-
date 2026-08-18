#include <iostream>

// If and else let the program choose what to do.

int main() {
    int age;
    int score;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are an adult.\n";
    } else {
        std::cout << "You are a minor.\n";
    }

    std::cout << "Enter your score: ";
    std::cin >> score;

    if (score >= 90) {
        std::cout << "Grade: A\n";
    } else if (score >= 80) {
        std::cout << "Grade: B\n";
    } else if (score >= 70) {
        std::cout << "Grade: C\n";
    } else {
        std::cout << "Grade: F\n";
    }

    return 0;
}

/*
How to compile and run:
Windows:
    g++ if_else.cpp -o if_else
    .\if_else.exe

Linux/Mac:
    g++ if_else.cpp -o if_else
    ./if_else
*/
