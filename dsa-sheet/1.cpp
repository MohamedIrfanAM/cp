#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void setZeroes(vector<vector<int>> &matrix)
  {
    int n = matrix.size();
    int m = matrix[0].size();
    set<int> p, q;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (matrix[i][j] == 0)
        {
          p.insert(i);
          q.insert(j);
        }
      }
    }

    for (auto k : p)
    {
      for (int i = 0; i < m; i++)
      {
        matrix[k][i] = 0;
      }
    }
    for (auto k : q)
    {
      for (int i = 0; i < n; i++)
      {
        matrix[i][k] = 0;
      }
    }
  }
};