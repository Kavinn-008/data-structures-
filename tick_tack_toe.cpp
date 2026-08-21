#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

class calc{

  double PI = 3.14;

  public:

    int area(float radius){
      return PI * pow(radius,2);
  }

    int circumferance(float radius){
      return 2*PI*radius;
  }

};

int main(){

  calc mycalc_obj;
  float area;
  float circumferance;
  float radius;
  cout<<"Enter the radius of the circle: ";
  cin>>radius;

  area = mycalc_obj.area(radius);
  circumferance = mycalc_obj.circumferance(radius);
  
  cout<<"the area of the circe: " << area;
  cout<<"the circumferance of the circe: "<< circumferance;
  return 0;
}