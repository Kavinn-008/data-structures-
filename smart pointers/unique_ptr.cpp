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
  
  //unique_ptr<int>uniPtr1 = make_unique<int>(110);
  //cout<<*uniPtr1<<endl;
  //unique_ptr<int>uniptr2 = move(uniPtr1);
  //cout<<*uniptr2 + 1 <<endl;
  //unique_ptr<Myclass> uniPtr1 = make_unique<Myclass>();

  {
     unique_ptr<Myclass> uniPtr1 = make_unique<Myclass>();
  }
  //system("pause>nul");
  cout<<"check if the memory is released"<<endl;
  return 0;
}