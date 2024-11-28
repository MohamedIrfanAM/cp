#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int ans = 0;
    int mx = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (mx + nums[i] >= 0)
      {
        mx += nums[i];
      }
      else
      {
        mx = 0;
      }
      ans = max(ans, mx);
    }
    if (ans == 0)
      return *max_element(nums.begin(), nums.end());
    return ans;
  }
};