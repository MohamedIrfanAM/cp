#include <bits/stdc++.h>
#include <stack>

using namespace std;

using namespace std;

class Solution
{
public:
  bool isValid(string ss)
  {
    stack<int> s;
    for (auto a : ss)
    {
      if (a == '{' || a == '(' || a == '[')
      {
        s.push(a);
      }
      else
      {
        if (s.empty())
          return false;
        if (s.top() == '{' && a == '}')
        {
          s.pop();
        }
        else if (s.top() == '(' && a == ')')
        {
          s.pop();
        }
        else if (s.top() == '[' && a == ']')
        {
          s.pop();
        }
        else
        {
          return false;
        }
      }
    }
    return s.empty();
  }
};

int main()
{
  Solution s;
  vector<int> v = {4, 2, 2, 6, 4};
}