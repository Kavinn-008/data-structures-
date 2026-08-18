#include <iostream>

struct car{

  int type;
  std::string brand;
  int size;

};

struct name{
  std::string sex;
  int hight;
  std::string skin;
};


int mian(){
  using std::string;
  using std::cin;
  using std::cout;

  car mycar1;

  mycar1.brand = "bmw";
  mycar1.size = 20;
  mycar1.type = 30;

  name alex;

  alex.skin = "white";
  alex.sex = "male";
  alex.hight = 5.9;

  name john;

  john.hight = 5.9;
  john.skin = "black";
  john.sex = "femail";

  cout<<"john has a " << mycar1.brand << " and he is a " << john.skin;
  cout<<"alex has a " << mycar1.brand << " and he is a " << alex.skin;

  return 0;
}