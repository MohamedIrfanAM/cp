#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<vector<int>> generate(int numRows)
  {
    vector<vector<int>> res;
    for (int i = 0; i < numRows; i++)
    {
      res.push_back({});
      for (int j = 0; j <= i; j++)
      {
        if (j == 0 || j == i)
        {
          res[i].push_back(1);
        }
        else
        {
          res[i].push_back(res[i - 1][j - 1] + res[i - 1][j]);
        }
      }
    }
    return res;
  }
};