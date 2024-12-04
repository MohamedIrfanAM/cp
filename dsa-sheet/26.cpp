#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int romanToInt(string s)
  {
    int ans = 0;
    int n = s.size();

    for (int i = 0; i < s.size(); i++)
    {
      char x = s[i];
      if (x == 'I')
      {
        if (i < n - 1 && s[i + 1] == 'V')
        {
          ans += 4;
          i++;
        }
        else if (i < n - 1 && s[i + 1] == 'X')
        {
          ans += 9;
          i++;
        }
        else
        {
          ans++;
        }
      }
      else if (x == 'X')
      {
        if (i < n - 1 && s[i + 1] == 'L')
        {
          ans += 40;
          i++;
        }
        else if (i < n - 1 && s[i + 1] == 'C')
        {
          ans += 90;
          i++;
        }
        else
        {
          ans += 10;
        }
      }
      else if (x == 'C')
      {
        if (i < n - 1 && s[i + 1] == 'D')
        {
          ans += 400;
          i++;
        }
        else if (i < n - 1 && s[i + 1] == 'M')
        {
          ans += 900;
          i++;
        }
        else
        {
          ans += 100;
        }
      }
      else if (x == 'V')
      {
        ans += 5;
      }
      else if (x == 'L')
      {
        ans += 50;
      }
      else if (x == 'D')
      {
        ans += 500;
      }
      else if (x == 'M')
      {
        ans += 1000;
      }
    }
    return ans;
  }
};