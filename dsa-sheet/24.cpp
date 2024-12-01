#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int maxLen(vector<int> &arr)
  {
    int n = arr.size();
    map<int, int> h;
    int s = 0;
    int m = 0;
    h[0] = -1;
    for (int i = 0; i < n; i++)
    {
      s += arr[i];
      if (h.find(s) == h.end())
      {
        h[s] = i;
      }
      else
      {
        int x = i - h[s];
        m = max(m, x);
      }
    }

    return m;
  }
};