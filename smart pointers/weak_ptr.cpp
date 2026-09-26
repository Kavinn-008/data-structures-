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
  weak_ptr<int> wekptr;
  {
    shared_ptr<int> shptr1 = make_shared<int>(20);
    wekptr = shptr1;
    cout<<*shptr<<endl;
  }
  //system("pause>nul");
  return 0;
}