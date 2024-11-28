#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void rotate(vector<vector<int>> &matrix)
  {
    int n = matrix.size();
    for (int i = 0; i < n / 2; i++)
    {
      int k = n - 2 * i;
      for (int j = i; j < i + k - 1; j++)
      {
        int p = matrix[j][n - i - 1];
        matrix[j][n - i - 1] = matrix[i][j];
        int k = matrix[n - i - 1][n - j - 1];
        matrix[n - i - 1][n - j - 1] = p;
        p = matrix[n - j - 1][i];
        matrix[n - j - 1][i] = k;
        matrix[i][j] = p;
      }
    }
  }
};