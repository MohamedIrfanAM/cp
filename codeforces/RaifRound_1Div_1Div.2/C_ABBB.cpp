// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1428/C
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  string s;
  cin >>  s;

  stack<char> st;

  for(int i = 0; i < s.length(); i++)
  {
    if(st.empty())
    {
      st.push(s[i]);
    }
    else if( s[i] == 'B')
    {
      if(st.top() == 'A' || st.top() == 'B')
      {
        st.pop();
      }
      else
      {
        st.push('B');
      }
    }
    else
    {
      st.push('A');
    }
  }
  cout << st.size() << "\n";
}

return 0;
}
