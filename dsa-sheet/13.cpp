#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target)
  {
    int p = matrix.size();
    int n = matrix[0].size();

    int l = 0;
    int r = p;

    while (r - l > 1)
    {
      int m = l + (r - l) / 2;
      if (matrix[m][0] <= target)
      {
        l = m;
      }
      else
      {
        r = m;
      }
    }
    int k = l;
    if (k >= p)
      return false;
    l = 0;
    r = matrix[k].size();

    if (matrix[k][0] == target)
      return true;

    while (r - l > 1)
    {
      int m = l + (r - l) / 2;
      if (matrix[k][m] < target)
      {
        l = m;
      }
      else
      {
        r = m;
      }
    }
    if (r >= n)
      return false;
    return (matrix[k][r] == target);
  }
};