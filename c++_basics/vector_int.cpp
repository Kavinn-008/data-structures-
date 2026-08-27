#include <iostream>
#include <vector>
using std::cout;
using std::cin;
int main(){

  std::vector<std::string> names = {"kavin","prashad","rakshitha","anand"};

  for(int i=0;i<names.size();i++){
    cout<<"\n";
    for(int j =0;j<names[i].size();j++) {
      cout<<names[i][j];
    }
  }

  return 0;
}