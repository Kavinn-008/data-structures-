#include <iostream>
#include <vector>
int main(){
  int n;
  std::vector<int> num ;
  std::cout<<"enter the number of elements to sum: ";
  std::cin>>n;
  int sum = 0;
  int val =0;
  for(int i=1;i<=n;i++){
    std::cout<<"enter the "<< i << " "<< "element: ";
    std::cin>> val;
    num.push_back(val);
    sum += val;
  }

  std::cout<<"the sum of the elements is: "<< sum;
  


  return 0;
}