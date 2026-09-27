#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 34};
  // int n = nums.size();
  // sort(nums.begin(), nums.end());
  // auto upper = upper_bound(nums.begin(),nums.end(), 5);
  // for (int i = 0; i < n; i++)
  //{
  //  cout << nums[i] << endl;
  //}
  // auto fin = max_element(nums.begin(), nums.end());
  // cout << *fin << endl;
  auto fin = find(nums.begin(), nums.end(), 0);
  int inde = distance(nums.begin(), fin);
  cout << *fin << endl;
  return 0;
}