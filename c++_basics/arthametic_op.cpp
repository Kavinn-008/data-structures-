// Arithmetic Operations and User Input
// This program shows how to take input from user and do basic math
//
// COMPILE: g++ -o arthametic_op arthametic_op.cpp
// RUN: ./arthametic_op.exe

#include <iostream>

int main(){
  using std::string;
  using std::cout;
  using std::cin;

  // Get user's name
  string name;
  cout << "Enter your name: " << "\n";
  std::getline(std::cin >> std::ws, name);
  cout << "Hello " << name << "!\n\n";

  // Get user's age
  int age;
  cout << "Enter your age: ";
  cin >> age;
  cout << "You are " << age << " years old.\n\n";

  // Simple arithmetic examples
  int num1 = 10;
  int num2 = 5;
  
  cout << "Simple Math:" << "\n";
  cout << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
  cout << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
  cout << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
  cout << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";

  return 0;
}