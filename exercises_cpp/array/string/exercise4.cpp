#include <iostream>
using std::string;

string too_upper(string name){

  for(int i=0;i<name.length();i++){
    if(i == 0 || name[i-1] == ' '){
      name[i] = toupper(name[i]); 
    }
  }
  return name;

}
int main(){

  string result;
  result = too_upper("kavin prashad");
  std::cout<<result;
  return 0;
}