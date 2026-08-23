#include <iostream>

int findlargest(int x[], int n){
  for(int i =0;i<n;i++){
    for(int j = 0;j<j-i-1;j++){
      if(x[i] > x[j]){
        x[i] = x[j];
      }
      return x;
    }
  } 
}
int main(){

  int arr[10] = {1,2,33,44444,55,667,888,654,223,4};
  int k = 0;
  int temp = 0;
  std::cout<<"Enter hwo many largest numeber u for: ";
  std::cin>> k;
  int size = sizeof(arr)/sizeof(arr[0]);
  findlargest(arr,size);
  return 0;
}