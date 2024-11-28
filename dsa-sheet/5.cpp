#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    int k = 0;
    for (int j = 0; j <= 2; j++)
    {
      for (int i = 0; i < nums.size(); i++)
      {
        if (nums[i] == j)
        {
          swap(nums[i], nums[k++]);
        }
      }
    }
  }
};