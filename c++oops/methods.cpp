#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using std::string;
class colors{

  public:
    int sum(int a, int b);
};

int colors::sum(int a,int b){
  return a+b;
}

int main(){

  colors color1;

  int sum = color1.sum(10,20);
  cout<<sum<<endl;
  return 0;
}