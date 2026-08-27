// Compile: g++ dynamic_memoryallocation.cpp -o dynamic_memoryallocation
// Run:     .\dynamic_memoryallocation.exe

#include <iostream>

int main(){

  const int size = 10;
  int fixedArray[size] = {1, 2, 3};

  // A dynamic array is created while the program is running.
  int *numbers = new int[size];

  std::cout << "Enter " << size << " numbers:\n";
  for (int index = 0; index < size; ++index) {
    std::cin >> numbers[index];
  }

  std::cout << "\nNumbers in the dynamic array:\n";
  for (int index = 0; index < size; ++index) {
    std::cout << "numbers[" << index << "] = " << numbers[index] << '\n';
  }

  // The first element is at index 0 and the last is at index size - 1.
  std::cout << "\nFirst number: " << numbers[0] << '\n';
  std::cout << "Last number: " << numbers[size - 1] << '\n';

  numbers[0] = 100;
  std::cout << "After changing the first number: " << numbers[0] << '\n';

  int sum = 0;
  for (int index = 0; index < size; ++index) {
    sum += numbers[index];
  }
  std::cout << "Sum: " << sum << '\n';

  std::cout << "\nFixed array example: " << fixedArray[0] << ' '
            << fixedArray[1] << ' ' << fixedArray[2] << '\n';

  // Always release an array created with new[] using delete[].
  delete[] numbers;

  return 0;
}