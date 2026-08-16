#include <iostream>

int main(){
  using std::cout;
  using std::cin;

  int age;
  cout<< " enter the age:";
  cin >> age;

  std::string name;
  cout<<"enter your name:";
  std::getline(cin >> std::ws, name);

  if(age < 18)
  {
    cout<<"you are a miner " << name <<"\n";
  }
  else if(age > 18)
  {
    cout << " you are not a miner " << name << "\n";
  }
  else
  {
    cout << "you are neither a miner nor adult " << name << "\n";  
  }
  

  return 0;
}