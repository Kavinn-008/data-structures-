#include <iostream>
#include <string>
using namespace std;
class car{
  public:
    string brand;
    int size;
    string model;
    car(string x,int y, string z){

    }     
};

int main(){

    car mycar1;

    string brand;
    cout<<"enter the brand name of the car: ";
    getline(cin,brand);
    
    int size;
    cout<<"enter the size of the car: ";
    cin >> size;
    
    string model;
    cout<<"enter the model name of the car: ";
    getline(cin,model);
    
    mycar1 car(brand,size,model);

  return 0;
}