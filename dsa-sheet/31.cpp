#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    map<char, int> h;
    int m = 0;
    int l = 0;
    int r = 0;

    for (int i = 0; i < s.size(); i++)
    {
      if (h.find(s[i]) == h.end())
      {
        m = max(m, i - l + 1);
      }
      else
      {
        l = h[s[i]] + 1;
      }

      h[s[i]] = i;
    }

    return m;
  }
};