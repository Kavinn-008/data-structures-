#include <iostream>
using std::cout;
using std::cin;
using std::string;

string next(string str){

  int ascii = 0;

  for(int i=0;i<str.length();i++){
    ascii = int(str[i]);
    if(ascii== 122){
      str[i] = char(97);
    }
    else if (ascii == 90)
    {
      str[i] = char(65);
    }
    else if(ascii >= 65 && ascii <= 90 || ascii <= 122 && ascii >= 97){
      str[i] = str[i]+1;
    }
    
  }
  return str;

}
int main(){

  string result;
  result = next("kavin prahsad");
  cout<<result;
  return 0;
}