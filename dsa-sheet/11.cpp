#include <bits/stdc++.h>

using namespace std;

// Using XOR operations

vector<int> Solution::repeatedNumber(const vector<int> &arr)
{
  int n1 = arr.size();
  int x = 0;
  for (int i = 0; i < n1; i++)
  {
    x ^= arr[i];
  }
  for (int i = 1; i <= n1; i++)
  {
    x ^= i;
  }

  int k = 0;
  while (x > 0)
  {
    if (x % 2 == 1)
    {
      break;
    }
    x /= 2;
    k++;
  }

  int p = 0;
  int q = 0;

  for (int i = 0; i < n1; i++)
  {
    int d = arr[i];
    int a = arr[i];
    int k1 = k;
    while (k1--)
    {
      a /= 2;
    }
    if (a % 2 == 1)
    {
      p ^= d;
    }
    else
    {
      q ^= d;
    }
  }
  for (int i = 1; i <= n1; i++)
  {
    int d = i;
    int a = i;
    int k1 = k;
    while (k1--)
    {
      a /= 2;
    }
    if (a % 2 == 1)
    {
      p ^= d;
    }
    else
    {
      q ^= d;
    }
  }
  vector<int> ans;
  if (find(arr.begin(), arr.end(), p) != arr.end())
  {
    ans.push_back(p);
    ans.push_back(q);
  }
  else
  {
    ans.push_back(q);
    ans.push_back(p);
  }
  return ans;
}

// Extended square matrix version
class Solution
{
public:
  vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
  {
    int n1 = grid.size();
    int x = 0;
    for (int i = 0; i < n1; i++)
    {
      for (int j = 0; j < n1; j++)
      {
        x ^= grid[i][j];
      }
    }
    for (int i = 1; i <= n1 * n1; i++)
    {
      x ^= i;
    }

    int k = 0;
    while (x > 0)
    {
      if (x % 2 == 1)
      {
        break;
      }
      x /= 2;
      k++;
    }

    int p = 0;
    int q = 0;

    for (int i = 0; i < n1; i++)
    {
      for (int j = 0; j < n1; j++)
      {
        int d = grid[i][j];
        int a = d;
        int k1 = k;
        while (k1--)
        {
          a /= 2;
        }
        if (a % 2 == 1)
        {
          p ^= d;
        }
        else
        {
          q ^= d;
        }
      }
    }
    for (int i = 1; i <= n1 * n1; i++)
    {
      int d = i;
      int a = i;
      int k1 = k;
      while (k1--)
      {
        a /= 2;
      }
      if (a % 2 == 1)
      {
        p ^= d;
      }
      else
      {
        q ^= d;
      }
    }
    vector<int> ans;
    for (auto arr : grid)
    {
      if (find(arr.begin(), arr.end(), p) != arr.end())
      {
        ans.push_back(p);
        ans.push_back(q);
        return ans;
      }
    }

    ans.push_back(q);
    ans.push_back(p);
    return ans;
  }
};