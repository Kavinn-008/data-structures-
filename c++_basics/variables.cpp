// Variables - Storing information in your program
// A variable is like a box where you can store data (numbers, text, etc.)
//
// COMPILE: g++ -o variables variables.cpp
// RUN: ./variables.exe

#include <iostream>

int main(){
  using std::cout;
  
  // Integer variables (whole numbers)
  int age = 20;
  int year = 2026;
  
  cout << "Integer variables:" << "\n";
  cout << "Age: " << age << "\n";
  cout << "Year: " << year << "\n\n";
  
  // Float variables (decimal numbers)
  float height = 5.9;      // 5.9 feet
  float weight = 70.5;     // 70.5 kg
  
  cout << "Float variables:" << "\n";
  cout << "Height: " << height << " feet" << "\n";
  cout << "Weight: " << weight << " kg" << "\n\n";
  
  // Double variables (more precise decimal numbers)
  double pi = 3.14159;
  double temperature = 37.5;
  
  cout << "Double variables:" << "\n";
  cout << "Pi: " << pi << "\n";
  cout << "Temperature: " << temperature << " Celsius" << "\n\n";
  
  // String variables (text)
  std::string city = "New York";
  std::string country = "USA";
  
  cout << "String variables:" << "\n";
  cout << "City: " << city << "\n";
  cout << "Country: " << country << "\n";
  
  return 0;
}