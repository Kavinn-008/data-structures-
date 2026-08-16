// Output Formatting - Different ways to display numbers
// %f is for decimal numbers, %d is for whole numbers
//
// COMPILE: g++ -o formatspecifiers formatspecifiers.cpp
// RUN: ./formatspecifiers.exe

#include <iostream>

int main(){
  // Declare some numbers
  float a = 1.234;      // Float number (smaller)
  float b = 2.345;
  double c = 3.456789;  // Double number (more precise)
  int num = 42;         // Whole number

  // Using printf to format output
  printf("Float number: %.3f \n", a);           // %.3f means show 3 decimal places
  printf("Another float: %.2f \n", b);         // %.2f means show 2 decimal places
  printf("Double number: %f \n", c);           // %f shows default decimal places
  printf("Whole number: %d \n", num);          // %d for integers

  // Using cout (C++ style)
  std::cout << "\nUsing cout:" << "\n";
  std::cout << "Float: " << a << "\n";
  std::cout << "Double: " << c << "\n";
  std::cout << "Integer: " << num << "\n";

  return 0;
}