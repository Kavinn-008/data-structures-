#include <iostream>
using namespace std;
using std::string;

class Rectangle{
  private :
    int length;
    int width;
  public :
  Rectangle(int a, int b) {
        length = a;
        width = b;
    }

  public :
    int calc_area(){
        return length*width;
    }
    int calc_parameter(){
        return 2*(length+width);
    }
};

int main(){
  
    int len;
    int wid;
    
    cout<<"Enter the length of the shape: ";
    cin>>len;

    cout<<"Enter the width of the shape: ";
    cin>>wid;
    
    Rectangle rec(len,wid);
    std::cout << "Rectangle Dimensions: " << len << "x" << wid << std::endl;
    std::cout << "Area: " << rec.calc_area() << std::endl;
    std::cout << "Perimeter: " << rec.calc_parameter() << std::endl;
    
    return 0;
}