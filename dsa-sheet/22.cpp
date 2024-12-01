#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target)
  {
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;
    for (int t = nums.size() - 1; t > 2; t--)
    {
      if (t != nums.size() - 1 && nums[t + 1] == nums[t])
        continue;

      for (int r = t - 1; r > 1; r--)
      {
        if (r != t - 1 && nums[r + 1] == nums[r])
          continue;

        int p = 0, q = r - 1;

        while (p < q)
        {
          long long int k = 1ll * nums[t] + nums[r] + nums[p] + nums[q];

          if (k == target)
          {
            ans.push_back({nums[p], nums[q], nums[r], nums[t]});

            p++;
            q--;

            while (p < q && nums[p] == nums[p - 1])
              p++;
            while (p < q && nums[q] == nums[q + 1])
              q--;
          }
          else if (k < target)
          {
            p++;
          }
          else
          {
            q--;
          }
        }
      }
    }

    return ans;
  }
};