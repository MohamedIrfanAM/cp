// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1571/A
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
  cin >> s;
  map<char,int> m;

  for(int i = 0 ; i < s.length(); i++)
  {
    if(s[i] == '<')
    {
      m['<']++;
    }
    else if(s[i] == '>')
    {
      m['>']++;
    }
    else if(s[i] == '=')
    {
      m['=']++;
    }
  }

  if(m['='] != 0 && m['>'] == 0 && m['<'] == 0)
  {
      cout << "=\n";
  }
  else if(m['<'] != 0 && m['>'] != 0)
  {
    cout << "?\n";
  }
  else if(m['<'] == 0)
  {
    cout << ">\n";
  }
  else if(m['>'] == 0)
  {
    cout << "<\n";
  }
}



return 0;
}
