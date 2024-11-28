#include <bits/stdc++.h>

using namespace std;

// Compinatorics solution
class Solution
{
public:
  int uniquePaths(int m, int n)
  {
    int N = n + m - 2;
    int r = m - 1;
    double res = 1;

    for (int i = 1; i <= r; i++)
      res = res * (N - r + i) / i;
    return (int)res;
  }
};

// Iterative DP solution
class Solution
{
public:
  int uniquePaths(int m, int n)
  {
    vector<vector<int>> v(m, vector<int>(n));
    v[0][0] = 1;
    int ans = 1;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (j > 0)
        {
          v[i][j] += v[i][j - 1];
        }
        if (i > 0)
        {
          v[i][j] += v[i - 1][j];
        }
      }
    }

    return v[m - 1][n - 1];
  }
};

// Pure recursive solution: ( Only left to add dp array for memoisation)
class Solution
{
public:
  int uniquePaths(int m, int n)
  {
    if (m == 1 && n == 1)
    {
      return 1;
    }

    int x = 0;
    if (m > 1)
    {
      x += uniquePaths(m - 1, n);
    }
    if (n > 1)
    {
      x += uniquePaths(m, n - 1);
    }
    return x;
  }
};