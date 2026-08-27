#include <iostream>

int main(){

  int n = 5;

  for(int i = 1;i<=n;i++){
    for(int j = 1;j<= n -1;j++){
      std::cout<<" ";
    }
    for(int j =0;j <= i;j++){
      std::cout<<"* ";
    }
    std::cout<<"\n";
  }

  return 0;
} 