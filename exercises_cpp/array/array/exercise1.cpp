#include <iostream>

int main(){

  int arr[] = {1,2,3,4,5,6,7,9999999};
  int size = sizeof(arr)/sizeof(arr[0]);
  int gratest = arr[0];
  for(int i=0;i<size;i++){
    if(arr[i]>gratest){
      gratest = arr[i];
    }
  }
  std::cout<<gratest;
  return 0;
}