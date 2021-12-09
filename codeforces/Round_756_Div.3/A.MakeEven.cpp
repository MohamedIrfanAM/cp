// time-limit: 1000
// problem-url: https://codeforces.com/contest/1611/problem/A
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
  int n ;
  cin >> n;
  string s = to_string(n);
  bool found = false;


  if( n%2 == 0 )
  {
    cout << 0 << endl;
  }
  else
  {
    for(int i = 0; i < s.length(); i++)
    {
      if(int(s[i])%2 == 0)
      {
        found = true;
        break;
      }
    }

    if(found)
    {
      if(s[0]%2 == 0)
      {
        cout << 1 << endl;
      }
      else if(s.length() >= 2)
      {
        cout << 2 << endl;
      }
    }
    else
    {
      cout << -1 << endl;
    }
  }
}


return 0;
}
