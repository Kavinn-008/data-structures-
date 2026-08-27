#include <iostream>
using std::cout;
using std::cin;
using std::string;

string rev_string(string name){

  string temp = name;
  int index=0;
  for(int i = name.length()-1;i>=0;i--){
    name[index] = temp[i];
    index++;
  }

  return name;
}

int main(){

  string name = "kavin prashad";
  string result;
  result = rev_string(name);
  cout<<result;
  return 0;
}