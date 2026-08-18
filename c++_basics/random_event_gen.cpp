#include <iostream>
#include <ctime>

// This program creates a random number and prints a result.

int main() {
    srand(time(nullptr));

    int randomNumber = (rand() % 6) + 1;

    std::cout << "Random number: " << randomNumber << "\n";

    switch (randomNumber) {
        case 1:
            std::cout << "You are first!\n";
            break;
        case 2:
            std::cout << "You are second!\n";
            break;
        case 3:
            std::cout << "You are third!\n";
            break;
        case 4:
            std::cout << "You are fourth!\n";
            break;
        case 5:
            std::cout << "You are fifth!\n";
            break;
        case 6:
            std::cout << "You are sixth!\n";
            break;
        default:
            std::cout << "No result.\n";
            break;
    }

    return 0;
}

/*
How to compile and run:
Windows:
    g++ random_event_gen.cpp -o random_event_gen
    .\random_event_gen.exe

Linux/Mac:
    g++ random_event_gen.cpp -o random_event_gen
    ./random_event_gen
*/