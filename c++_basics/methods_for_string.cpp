//https://cplusplus.com/reference/string/

#include <iostream>

int main(){

  //std::string name;
  std::string name = "123456789";
  //std::cout<<"enter your name:";
  //std::getline(std::cin,name);

  int x = 0;
  //int x = name.length();
  //x = name.empty();
  //name.insert(0,"@");
  //x = name.find("k");
  name.erase(0,3);
  
  std::cout<< name ;
  std::cout<< x;
  return 0;
}