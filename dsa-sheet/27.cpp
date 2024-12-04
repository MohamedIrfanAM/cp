#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    int i = 0;
    while (true)
    {
      char c;
      if (i < strs[0].size())
      {
        c = strs[0][i];
      }
      else
      {
        break;
      }
      for (int j = 0; j < strs.size(); j++)
      {
        if (i < strs[j].size() && strs[j][i] == c)
        {
          continue;
        }
        else
        {
          return strs[0].substr(0, i);
          break;
        }
      }
      i++;
    }
    return strs[0].substr(0, i);
  }
};