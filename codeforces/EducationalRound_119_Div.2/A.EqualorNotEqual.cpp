// time-limit: 2000
// problem-url: https://codeforces.com/contest/1620/problem/A
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

  int n = s.length();
  int begin = 0;
  int end = 1; 

  if(s.length() == 2)
  {
    if(s[0] != s[1])
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
    }
    continue;
  }

  if(s[0] != 'N')
  {
    for(int i = 0; i < n; i++)
    {
      if(s[i] == 'E')
      {
        begin++;
      }
      else
      {
        begin++;
        break;
      }
    }
  }
  else
  {
    begin = 1;
  }

  for(int i = n-2; i >= 0; i--)
  {
    if(s[i] == 'E' )
    {
      end++;
    }
    else
    {
      break;
    }
  }

  if((end+begin) > n)
  {
    if(s[n-1] == 'N')
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
    }
  }
  else if((end+begin) < n)
  {
    cout << "YES\n";
  }
  else if((end+begin) == n)
  {
    if(s[begin-1] == s[n-1])
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n"; 
    }
  }
}



return 0;
}
