#include <iostream>
#include <string>
using std::string;
using std::cout;

char find_gratest(string v){

  char gratest = v[0];
  for(int i =0;i<v.length();i++){
    if(v[i]>gratest){
      gratest = v[i];
    }
  }
  cout<<gratest;
  return gratest;
}

int main(){
  
  
  find_gratest("zaara");
  
  return 0;
}