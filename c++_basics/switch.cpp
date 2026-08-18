#include <iostream>

// switch is used when we want to check one value against many cases.

int main() {
    int month;

    std::cout << "Enter a number from 1 to 12: ";
    std::cin >> month;

    switch (month) {
        case 1:
            std::cout << "January\n";
            break;
        case 2:
            std::cout << "February\n";
            break;
        case 3:
            std::cout << "March\n";
            break;
        case 4:
            std::cout << "April\n";
            break;
        case 5:
            std::cout << "May\n";
            break;
        case 6:
            std::cout << "June\n";
            break;
        case 7:
            std::cout << "July\n";
            break;
        case 8:
            std::cout << "August\n";
            break;
        case 9:
            std::cout << "September\n";
            break;
        case 10:
            std::cout << "October\n";
            break;
        case 11:
            std::cout << "November\n";
            break;
        case 12:
            std::cout << "December\n";
            break;
        default:
            std::cout << "Invalid month number.\n";
            break;
    }

    return 0;
}

/*
How to compile and run:
Windows:
    g++ switch.cpp -o switch
    .\switch.exe

Linux/Mac:
    g++ switch.cpp -o switch
    ./switch
*/