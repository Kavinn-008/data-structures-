#include <iostream>
using std::string;
using namespace std;

class cars{
  public:
    string brand;
    string model;
    int year;
    cars(){
      brand = "unknown";
      model = "unknown";
      year = 0;
    }
    cars(string x, string y,int z);

};

cars::cars(string x, string y, int z){
      brand = x;
      model = y;
      year = z;
}

int main(){

  cars mycar1;
  cars mycar2("ford","gtr",2008);
  cars mycar3("bmw","M4",2022);

  cout<<mycar1.brand<<"\n"<<mycar2.brand<<"\n"<<mycar3.brand<<endl;

  return 0;
} 