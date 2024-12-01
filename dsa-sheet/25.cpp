#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int subarraySum(vector<int> &arr, int k)
  {
    int n = arr.size();
    unordered_map<int, int> h;
    int s = 0;
    int m = 0;

    h[0] = 1;

    for (int i = 0; i < n; i++)
    {
      s += arr[i];

      if (h.find(s - k) != h.end())
      {
        m += h[s - k];
      }

      h[s]++;
    }

    return m;
  }
};
