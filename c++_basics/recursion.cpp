#include <iostream>

int factorial(int num){

  if(num != 0){
    return num * factorial(num - 1); 
  }
  else{
    return 1;
  }
};
int main(){

  int num;
  int result;
  std::cout<<"eneter the rumber to be factorial: ";
  std::cin>>num;
  result = factorial(num);
  std::cout<<result;
  return 0;
}