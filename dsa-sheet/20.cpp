#include <bits/stdc++.h>

using namespace std;

struct custom_hash
{
  static uint64_t splitmix64(uint64_t x)
  {
    // http://xorshift.di.unimi.it/splitmix64.c
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const
  {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int, custom_hash> h;
    for (int i = 0; i < nums.size(); i++)
    {
      h[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++)
    {
      if (h.find(target - nums[i]) != h.end())
      {
        int k = h[target - nums[i]];
        if (i != k)
        {
          return {k, i};
        }
      }
    }
    return {0, 0};
  }
};