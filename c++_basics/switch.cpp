#include <iostream>

int main(){

  using std::cout;
  using std::cin;

  int month;
  std::cout << "Enter the number of the month (1-12):";
  std::cin >> month;


  switch(month){

    case 1:
      cout<<"jan";
      break;
    
      case 2:
        cout<<"fib";
        break;
      
      case 3:
        cout<<"march";
        break;

      case 4:
        cout<<"apr";
        break;

      case 5:
        cout<<"may";
        break;

      case 6:
        cout<<"june";
        break;

      case 7:
        cout<<"july";
        break;

      case 8:
        cout<<"aug";
        break;

      case 9:
        cout<<"sep";
        break;

      case 10:
        cout<<"oct";
        break;

      case 11:
        cout<<"nove";
        break;

      case 12:
        cout<<"dec";
        break;

      default :
        cout<<"thats a invalid month";
  }
  return 0;
}