#include <iostream>
using std::string;
using namespace std;

class Employees{
  public :
  string name;
  double salary;
  Employees(string a, double b){
    name = a;
    salary = b;
  }

  void DisplayInfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"Salary : "<<salary<<endl;
    cout<<"--------------------------"<<endl;
  }
};

class Developer : public Employees{
  public :
  string language;
  Developer(string a,double b, string l): Employees(a,b){
    name = a;
    salary = b;
    language = l;
  }
  void DisplayInfo(){
    cout<<"Name : "<<name<<endl;
    cout<<"Salary : "<<salary<<endl;
    cout<<"Progeamming language :"<<" "<<language<<endl;
  }
};

class Manager : public Employees{
  public :
  int teamsize;
  Manager(string a,double b,int t): Employees(a,b){
    name = a;
    salary = b;
    teamsize = t;
  }
  void DisplayInfo(){
    cout<<" Name : "<<name<<endl;
    cout<<"Salary : "<<salary<<endl;
    cout<<"Team size :"<<teamsize<<endl;
  } 
};

class Designer : public Employees{
  public :
  string designtool;
  Designer(string a,double b,string d): Employees(a,b){  
    name = a;
    salary = b;
    designtool = d;
  }
  void DisplayInfo(){
    cout<<" Name : "<<name<<endl;
    cout<<"Salary : "<<salary<<endl;
    cout<<"Design tool :"<<designtool<<endl;
  }
};

int main(){

    string name;
    cout<<"Enter the employee name: ";
    std::getline(std::cin,name);

    int salary;
    cout<<"Enter the salary of the employee";
    cin>>salary;

    Employees emp(name,salary);
    Designer dis(name,salary,"figma");
    Manager man(name,salary,10);
    Developer dev(name,salary,"C++");

    emp.DisplayInfo();
    dis.DisplayInfo();
    man.DisplayInfo();
    dev.DisplayInfo();
    
  return 0;
}