#include <iostream>
using namespace std;
using std::string;

class sumof{

  private:
    int salary;

  public:
    void setSalary(int s){
      salary = s;
    }
    int getSalary(){
      return salary;
    }  
};

int main(){

  sumof obj1;

  obj1.setSalary(2000000);
  cout<<obj1.getSalary()<<endl;
  return 0;
}