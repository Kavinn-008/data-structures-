// Pythagorean Theorem Calculator
// Calculate the hypotenuse of a right-angled triangle
//
// COMPILE: g++ -o practice_project practice_project.cpp
// RUN: ./practice_project.exe

#include <iostream>
#include <cmath>

int main(){
  using std::cout;
  using std::cin;

  double adj;
  cout<<"enter the adj side of the triangle in cm:";
  cin>> adj;
  
  double opp;
  cout<<"enter the opposit side of the triangle in cm:";
  cin>> opp;

  double hyp;

  hyp = sqrt( pow(adj,2) + pow(opp,2) ); 
  std::cout <<"the length of the hyp of the right angled triabgel is:" << hyp << "cm\n";

  return 0;
}