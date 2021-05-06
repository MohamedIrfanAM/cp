// time-limit: 1000
// problem-url: https://codeforces.com/contest/1520/problem/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;
while(t--)
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int k;
  int c = 0;
  for(int i = 0; i < n; i++)
  {
    bool no = false;
     k =n;
    if(s[i] != s[i-1] && i != 0)
    {
      for(int j = i+1; j < n; j++)
      {
        if(s[i] == s[j] )
        {
          if(j > k)
          {
            cout << "NO\n";
            no = true;
            break;
          }
        }
        else if(s[i] != s[j])
        {
          k = j;
        }
      }
    }

    else if(i == 0)
    {
      for(int j = i+1; j < n; j++)
      {
        if(s[i] == s[j] )
        {
          if(j > k)
          {
            cout << "NO\n";
            no = true;
            break;
          }
        }
        else if(s[i] != s[j])
        {
          k = j;
        }
      }
    }
    if(no)
    {
      break;
    }
    else
    {
      c++;
    }
  }
  if(c == n)
  {
    cout << "YES\n";
  }
}


return 0;
}
