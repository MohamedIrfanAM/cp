#include <bits/stdc++.h>

using namespace std;

// Extended Boyer-Moore Majority Voting Algorithm
class Solution
{
public:
  vector<int> majorityElement(vector<int> &nums)
  {
    int x = 0;
    int m = -1;
    int x1 = 0;
    int m1 = -1;
    int y = 0;
    for (auto a : nums)
    {

      if (x == 0 && a != m1)
      {
        m = a;
        x++;
      }
      else if (x1 == 0 && a != m)
      {
        m1 = a;
        x1++;
      }
      else if (a == m)
      {
        x++;
      }
      else if (a == m1)
      {
        x1++;
      }
      else
      {
        x--;
        x1--;
      }
    }

    int c1 = 0;
    int c2 = 0;
    for (auto a : nums)
    {
      if (a == m)
      {
        c1++;
      }
      else if (a == m1)
      {
        c2++;
      }
    }
    vector<int> ans;
    if (c1 > nums.size() / 3)
      ans.push_back(m);
    if (c2 > nums.size() / 3)
      ans.push_back(m1);
    return ans;
  }
};