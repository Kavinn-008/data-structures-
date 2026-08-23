#include <iostream>

int main(){

  using std::cout;
  int largest1 = 0;
  int largest2 = 0;
  int largest3 = 0;
  int arr[10] = {1,22,3,4,5,666,7,8,333};
  int size = sizeof(arr)/sizeof(arr[0]);

  for(int i=0;i<size;i++){
    if(i == 0){
      largest1 = i;
    }
    else if(arr[largest1]< arr[i]){
      largest3 = largest2;
      largest2 = largest1;
      largest1 = i;
    }
    else if(arr[largest2] < arr[i]){
      largest3 = largest2;
      largest2 = i;
    }
    else if(arr[largest3] < arr[i]){
      largest3 = i;
    }
  }
  cout<<"the first largest element in the array is: "<< arr[largest1]<<"\n";
  cout<<"the second largest element in the array is: "<< arr[largest2]<<"\n";
  cout<<"the third largest element in the array is: "<< arr[largest3]<<"\n";
  return 0;
}