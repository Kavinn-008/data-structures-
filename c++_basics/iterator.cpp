#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 34};
  vector<int>::iterator it;
  it = nums.end();
  it--;
  cout << *it << endl;

  return 0;
}
