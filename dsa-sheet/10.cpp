#include <bits/stdc++.h>

using namespace std;

// Using sort
class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] == nums[i - 1])
      {
        return nums[i];
      }
    }
  }
};

// Using hasbmap to store frequency
class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
      m[nums[i]]++;
      if (m[nums[i]] > 1)
        return nums[i];
    }
    return nums[0];
  }
};

// Using floyd's clycle check
class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    int p = nums[0];
    int q = nums[0];

    do
    {
      p = nums[p];
      q = nums[nums[q]];
    } while (p != q);
    q = nums[0];
    while (p != q)
    {
      p = nums[p];
      q = nums[q];
    }
    return p;
  }
};