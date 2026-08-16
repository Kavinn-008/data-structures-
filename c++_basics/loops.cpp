// Loops - Repeating code multiple times
// Loops help you run the same code over and over without writing it again and again
//
// COMPILE: g++ -o loops loops.cpp
// RUN: ./loops.exe

#include <iostream>

int main(){
  using std::cout;
  using std::cin;
  
  // Example 1: For loop (repeat a fixed number of times)
  cout << "For Loop - Print numbers 1 to 5:" << "\n";
  for(int i = 1; i <= 5; i++) {
    cout << "Number: " << i << "\n";
  }
  
  // Example 2: While loop (repeat until condition is false)
  cout << "\nWhile Loop - Print numbers 10 to 15:" << "\n";
  int j = 10;
  while(j <= 15) {
    cout << "Number: " << j << "\n";
    j++;  // Increase j by 1
  }
  
  // Example 3: Simple multiplication table using loop
  int num;
  cout << "\nEnter a number for multiplication table: ";
  cin >> num;
  
  cout << "Multiplication table of " << num << ":" << "\n";
  for(int i = 1; i <= 10; i++) {
    cout << num << " x " << i << " = " << (num * i) << "\n";
  }
  
  // Example 4: Sum numbers from 1 to 100
  int sum = 0;
  for(int i = 1; i <= 100; i++) {
    sum = sum + i;
  }
  cout << "\nSum of 1 to 100 = " << sum << "\n";
  
  return 0;
}
