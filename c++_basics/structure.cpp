#include <iostream>
#include <string>

// A structure is a custom data type.
// It lets us store different kinds of information together.

struct Car {
    std::string brand;
    int year;
    double price;
};

struct Person {
    std::string name;
    std::string skinColor;
    double height;
};

int main() {
    Car myCar;
    myCar.brand = "BMW";
    myCar.year = 2022;
    myCar.price = 25000.00;

    Person person1;
    person1.name = "Alex";
    person1.skinColor = "White";
    person1.height = 5.9;

    std::cout << "Car brand: " << myCar.brand << "\n";
    std::cout << "Car year: " << myCar.year << "\n";
    std::cout << "Car price: " << myCar.price << "\n";

    std::cout << "Person name: " << person1.name << "\n";
    std::cout << "Skin color: " << person1.skinColor << "\n";
    std::cout << "Height: " << person1.height << "\n";

    return 0;
}

/*
How to compile and run:
Windows:
    g++ structure.cpp -o structure
    .\structure.exe

Linux/Mac:
    g++ structure.cpp -o structure
    ./structure
*/