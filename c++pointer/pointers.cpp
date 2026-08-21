#include <iostream>

int main(){

  int *ptr =nullptr;
  int x = 10;
  ptr = &x;

  std::cout << ptr << " " << *ptr;

  return 0;
}