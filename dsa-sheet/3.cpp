#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void nextPermutation(vector<int> &nums)
  {
    int n = nums.size();
    for (int i = n - 1; i > 0; i--)
    {
      if (nums[i] > nums[i - 1])
      {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
          if (nums[j] > nums[i - 1] && nums[j] < nums[min])
          {
            min = j;
          }
        }
        swap(nums[i - 1], nums[min]);
        sort(nums.begin() + i, nums.end());
        return;
      }
    }
    sort(nums.begin(), nums.end());
  }
};
