#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals)
  {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    for (auto a : intervals)
    {
      if (ans.empty() || ans.back()[1] < a[0])
      {
        ans.push_back(a);
      }
      else
      {
        ans.back()[1] = max(a[1], ans.back()[1]);
      }
    }
    return ans;
  }
};