#include <iostream>
using namespace std;
using string = std::string;

class animal{

  public :
    string ani = "nishitha";

  void dog(){
      cout<<"this animal can bark";
  }
};

class cat : public animal{
  public :
  void catSound(){
    cout<<"this animal can meow";
  }
};


int main(){

  cat Cat;
  Cat.dog();
  Cat.catSound();
  return 0;
}