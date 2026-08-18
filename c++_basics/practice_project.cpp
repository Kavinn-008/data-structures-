#include <iostream>
#include <cmath>

// This program calculates the length of the hypotenuse
// in a right triangle using the Pythagorean theorem.

int main() {
    double side1;
    double side2;

    std::cout << "Enter the first side of the triangle: ";
    std::cin >> side1;

    std::cout << "Enter the second side of the triangle: ";
    std::cin >> side2;

    double hypotenuse = sqrt((side1 * side1) + (side2 * side2));

    std::cout << "The hypotenuse is: " << hypotenuse << "\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ practice_project.cpp -o practice_project
    .\practice_project.exe

Linux/Mac:
    g++ practice_project.cpp -o practice_project
    ./practice_project
*/