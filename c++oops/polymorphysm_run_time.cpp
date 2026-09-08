#include <iostream>
using namespace std;
using std::string;

class Class{
  public :
  virtual void show(){
    cout<<"this is parent";
  }
};

class child1 : Class{
  private :
  void show() override {
    cout<<"this is child1";
  }
};

class child2 : Class{
  private :
  void show () override {
    cout<<"this is child2";
  }
};


int main(){

    Class *x;
    
    Class par;
    child1 c1;
    child2 c2;
    
    
    x = &par;
    x -> show();
    
    return 0;
}