#include <iostream>
#include <memory>
using namespace std;
using std::string;

class Myclass
{
public:
  Myclass()
  {
    cout << "constructer invoked:" << endl;
  }
  ~Myclass()
  {
    cout << "distructor invoked:" << endl;
  }
};

int main()
{
  shared_ptr<Myclass> shPtr1 = make_shared<Myclass>();
  cout<<"the shared count: "<< shPtr1.use_count()<<endl;
  {
    shared_ptr<Myclass> shPtr2 = shPtr1;
    cout<<"the shared count: "<< shPtr1.use_count()<<endl;
  }
  cout<<"the shared count: "<<shPtr1.use_count()<<endl;
  //system("pause>nul");
  return 0;
}