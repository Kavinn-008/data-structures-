#include <iostream>
#include <string>

class Cars {
public:
    int se_no;
    std::string name;

    void displayCar() {
        std::cout << "Car Number: " << se_no << std::endl;
        std::cout << "Car Name: " << name << std::endl;
    }
};

int main() {
    Cars carobj1;

    carobj1.se_no = 101;
    carobj1.name = "kavinprashad";

    std::cout << "Before update:" << std::endl;
    carobj1.displayCar();

    std::cout << "Enter car number: ";
    std::cin >> carobj1.se_no;

    std::cout << "Enter car name: ";
    std::cin >> carobj1.name;

    std::cout << "\nAfter update:" << std::endl;
    carobj1.displayCar();

    return 0;
}