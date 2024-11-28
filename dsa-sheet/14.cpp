#include <bits/stdc++.h>

using namespace std;

// Iterative method
class Solution
{
public:
  double myPow(double x, int n)
  {
    double d = x;
    double ans = 1;
    for (int i = 0; i < 32; i++)
    {
      if ((abs(n) >> i) & 1)
      {
        ans *= x;
      }
      x *= x;
    }

    return n >= 0 ? ans : 1 / ans;
  }
};

// Recursive method
class Solution
{
public:
  double pow(double x, int n)
  {
    if (x == 0)
      return 0;
    if (n == 0)
      return 1;

    double res = pow(x, n / 2);
    if (n % 2 == 0)
    {
      res = res * res;
    }
    else
    {
      res = res * res * x;
    }
    return res;
  }
  double myPow(double x, int n)
  {
    double res = pow(x, abs(n));
    if (n >= 0)
    {
      return res;
    }
    else
      return 1 / res;
  }
};