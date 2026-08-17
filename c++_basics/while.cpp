// Loops - Repeating code multiple times
// Loops help you run the same code over and over without writing it again and again
//
// COMPILE: g++ -o loops loops.cpp
// RUN: ./loops.exe

#include <iostream>

int main(){

  std::string name;
  int a = 1;

  while (name.empty()){
    std::cout  << "enterr your name:";
    std::getline(std::cin ,name);
  }

  std::cout<<" hello " << name;


  return 0;
}
