// If-Else - Making decisions in your program
// if-else helps your program choose what to do based on conditions
//
// COMPILE: g++ -o if_else if_else.cpp
// RUN: ./if_else.exe

#include <iostream>

int main(){
  using std::cout;
  using std::cin;
  
  // Example 1: Simple if statement
  int age;
  cout << "Enter your age: ";
  cin >> age;
  
  if(age >= 18) {
    cout << "You are an adult." << "\n";
  }
  else {
    cout << "You are a minor." << "\n";
  }
  
  // Example 2: If-Else with multiple conditions
  int score;
  cout << "\nEnter your test score: ";
  cin >> score;
  
  if(score >= 90) {
    cout << "Grade: A (Excellent!)" << "\n";
  }
  else if(score >= 80) {
    cout << "Grade: B (Good!)" << "\n";
  }
  else if(score >= 70) {
    cout << "Grade: C (Okay)" << "\n";
  }
  else {
    cout << "Grade: F (Need to study more)" << "\n";
  }
  
  // Example 3: Comparing numbers
  int num1 = 10;
  int num2 = 20;
  
  cout << "Comparing " << num1 << " and " << num2 << ":" << "\n";
  
  if(num1 > num2) {
    cout << num1 << " is bigger" << "\n";
  }
  else if(num1 < num2) {
    cout << num2 << " is bigger" << "\n";
  }
  else {
    cout << "Both numbers are equal" << "\n";
  }
  
  return 0;
}
