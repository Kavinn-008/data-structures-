#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<vector<int>> nums = {{1,2,5},{6,7,4},{8,9,6}};
  sort(nums.begin(),nums.end());
  return 0;
}