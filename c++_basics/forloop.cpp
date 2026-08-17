#include <iostream>

int main(){

  std::string name;

  for(int i = 0; i < 10 ; i++){

    std::cout<<"enter your name "<< i << " :";
    std::getline(std::cin,name);

    if(name == "kavin prashad"){
      std::cout<<name;
      break;
    }
  }

  return 0;
}