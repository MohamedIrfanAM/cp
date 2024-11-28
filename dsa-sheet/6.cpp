#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int n = prices.size();
    vector<int> p(n);
    p[0] = prices[0];
    for (int i = 1; i < n; i++)
    {
      p[i] = min(prices[i], p[i - 1]);
    }
    int m = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      m = max(m, prices[i] - p[i]);
    }
    return m;
  }
};