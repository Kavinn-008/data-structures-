#include <iostream>

int main(){

  int arr[] = {11,22,3333,44,55,66};
  int n = sizeof(arr)/sizeof(arr[0]);
  int first,second,third,temp =0;
  first = arr[0];
  second = arr[0];
  third = arr[0];
  for (int i=0;i<n;i++){
    if(arr[i] > first){
      third = second;
      second = first;
      first = arr[i];
    }
    else if(arr[i] > second){
      third = second;
      second = arr[i];
    }
    else if(arr[i] > third){
      third = arr[i];
    }
  }

    std::cout<<"first"<<first<<"second"<<second<<"third"<<third;

  return 0;
}