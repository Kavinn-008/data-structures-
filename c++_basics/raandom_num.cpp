#include <iostream>
#include <ctime>

// This program generates random numbers.

int main() {
    srand(time(nullptr));

    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;

    std::cout << "Random numbers: " << dice1 << " " << dice2 << " " << dice3 << "\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ raandom_num.cpp -o raandom_num
    .\raandom_num.exe

Linux/Mac:
    g++ raandom_num.cpp -o raandom_num
    ./raandom_num
*/