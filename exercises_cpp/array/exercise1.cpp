#include <iostream>

int main(){

  using std::cout;
  int largest = 0;
  int arr[10] = {1,22,3,4,5,666,7,8};
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){
    if(i == 0){
      largest = i;
    }
    else if(arr[largest]< arr[i]){
      largest = i;
    }
  }
  cout<<"the largest element in the array is: "<< arr[largest];
  return 0;
}