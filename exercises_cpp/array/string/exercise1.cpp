#include <iostream>

int main(){

  std::string string1;
  std::cout<<"Enter the string that has to be reverced: ";
  std::getline(std::cin,string1);
  std::string rev_string = string1;

  int index = 0;
  for(int i=string1.length()-1;i>=0;i--){
    rev_string[index] = string1[i];
    index++;
  }

  std::cout<<"the reversed string is: " << rev_string;

  return 0;

}