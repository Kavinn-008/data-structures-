#include <iostream>

int main(){

  using std::string;

  double cars[5];
  int opp = 0;
  double price;

  std::cout<<"enter the price u are looking for: ";
  std::cin >> price;

  for(int i = 0; i <= 5; i ++){
    std::cout<<"enetr the price of the car "<< i+1 << " :";
    std::cin>> cars[i];
    
    if (cars[i] == price){
      opp = i;
    }
  }

  std::cout<<"the car u are looking for is: " << opp << " " << cars[opp] << std::endl;

  
  return 0;
}