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

// Using unorderd_set O(n) ( implemented usign hashmap, use custom hash to prevent O(n) operations)
class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {
    if (nums.size() == 0)
      return 0;
    unordered_set<int> s, custom_hash;
    for (int i = 0; i < nums.size(); i++)
    {
      s.insert(nums[i]);
    }
    int m = 1;
    int c = 1;
    for (auto it : s)
    {
      if (s.find(it - 1) != s.end())
      {
        c = 1;
        int x = it;
        while (s.find(x + 1) != s.end())
        {
          c++;
          x++;
        }
        m = max(m, c);
      }
    }

    return m;
  }
};

// Using set, time complexity is (O(nlogn))
class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {
    set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
      s.insert(nums[i]);
    }
    if (s.empty())
      return 0;
    int m = 1;
    int c = 1;
    auto it = s.begin();
    it++;
    for (; it != s.end(); it++)
    {
      auto pre = it;
      pre--;
      if (*it == *pre + 1)
      {
        c++;
        m = max(m, c);
      }
      else
      {
        c = 1;
      }
    }

    return m;
  }
};