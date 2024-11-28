#include <bits/stdc++.h>

using namespace std;

// Boyer-Moore Majority Voting Algorithm
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int x = 0;
    int m = -1;
    for (auto a : nums)
    {

      if (x == 0)
      {
        m = a;
        x++;
      }
      else if (a == m)
      {
        x++;
      }
      else
      {
        x--;
      }
    }
    return m;
  }
};

// Map method
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    map<int, int> m;
    for (auto a : nums)
    {
      m[a]++;
      if (m[a] > nums.size() / 2)
      {
        return a;
      }
    }
    return nums[0];
  }
};