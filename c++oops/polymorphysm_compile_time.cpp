#include <iostream>
using namespace std;
using std::string;

class remort{
  public :
  void show(){
    cout<<"this is the parent class"<<endl;
  }
};

class child1 : remort{
  public :
  void show(int a){
    cout<<"this is the child class 1"<<"\n"<<a<<endl;
  }
  void show(){
    cout<<"this is the child class 1 whithout parameters"<<endl;
    }
};

class child2 : child1{
  public :
  void show(){
    cout<<"this is the child class 2"<<endl;
  }
};

int main(){
  child1 c1;
  child2 c2;
  remort rem;
  rem.show();
  c1.show();
  c2.show();

  return 0;
}