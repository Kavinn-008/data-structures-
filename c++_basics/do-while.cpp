#include <iostream>

int main(){

  std::string name;

  do{
    std::cout<<"enter your name sir:";
    std::getline(std::cin,name);
  }while(!name.empty());

  std::cout<<" hello " << name;

  return 0;
}