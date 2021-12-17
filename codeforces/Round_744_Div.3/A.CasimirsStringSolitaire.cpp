// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1579/A
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
  int a = 0, b = 0, c= 0;

  cin >> s;

  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] == 'A')
    {
      a++;
    }
    else if(s[i] == 'B')
    {
      b++;
    }
    else if(s[i] == 'C')
    {
      c++;
    }
  }

  if((c+a) == b)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
}




return 0;
}
