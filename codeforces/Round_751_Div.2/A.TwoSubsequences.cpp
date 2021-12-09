// time-limit: 2000
// problem-url: https://codeforces.com/contest/1602/problem/A
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  string s;
  cin >> s;
  char low = '~'; 

  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] < low)
    {
      low = s[i];
    }
  }

  cout << low << ' ';
  int done = 0;

  for(char a: s)
  {
    if(a != low)
    {
      cout << a ;
    }
    else if(done)
    {
      cout << a;
    }
    else
    {
      done++;
    }
  }
  cout << "\n";
}


return 0;
}
