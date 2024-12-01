#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;
    for (int r = nums.size() - 1; r > 1; r--)
    {
      if (r != nums.size() - 1 && nums[r + 1] == nums[r])
      {
        continue;
      }
      int q = r - 1;
      int p = 0;
      while (p < q)
      {
        int k = nums[r] + nums[p] + nums[q];
        if (k == 0)
        {
          ans.push_back({nums[p], nums[q], nums[r]});
          p++;
          while (p < q && nums[p] == nums[p - 1])
            p++;
          q--;
          while (p < q && nums[q] == nums[q + 1])
            q--;
        }
        else if (k > 0)
        {
          q--;
        }
        else
        {
          p++;
        }
      }
    }

    return ans;
  }
};