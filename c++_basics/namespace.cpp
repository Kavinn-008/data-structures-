// Namespaces - A way to organize your code
// Think of it like having two separate boxes for your variables
// Namespaces help when different parts of code use the same variable names
//
// COMPILE: g++ -o namespace namespace.cpp
// RUN: ./namespace.exe

#include <iostream>

// First namespace with its own variables
namespace first {
  int a = 19;
  std::string name = "kavin";
}

// Second namespace with its own variables (also has 'a' but it's different)
namespace second {
  int a = 20;
  std::string name = "rkashitha";
}

int main(){
  using std::cout;
  
  // Local variable in main function
  int a = 69;
  cout << "Main's a = " << a << "\n";
  
  // Access variables from first namespace using :: (scope resolution operator)
  cout << "First namespace a = " << first::a << "\n";
  cout << "First namespace name = " << first::name << "\n";
  
  // Access variables from second namespace
  cout << "Second namespace a = " << second::a << "\n";
  cout << "Second namespace name = " << second::name << "\n";
  
  return 0;
}