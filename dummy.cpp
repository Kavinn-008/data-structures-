#include <iostream>

int main(){
  int* a;
  int x = 9;
  a = &x;
  std::cout<<*a;
  return 0;
}