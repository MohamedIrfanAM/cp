// time-limit: 1000
// problem-url: https://codeforces.com/contest/1521/problem/A
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
  long long a,b;
  cin >> a >> b;
 
  long long k = a*b;
  long long z = a*b;
  bool found = false;

  while(true)
  {
    if(b == 1)
    {
      cout << "NO\n";
      break;
    }
    for(int x = a; x <= z; x+=a)
    {
      for(int y = a; y <= z; y+= a )
      {
        if(x+y == z && x != y)
        {
          if(x%k != 0 && y%k != 0)
          {
          cout << "YES\n" << x << " " << y << " " << z << "\n";
          found = true;
          break;
          } 
        }
        else
        {
          found = false;
        }
        if(x+y > z )
        {
          break;
        }
      }
      if(found)
      {
        break;
      }
    }

    if(found)
    {
      break;
    }
    else
    {
      z += k;
    }
    if(z >= pow(10,18))
    {
      cout << "NO\n";
      break;
    }
  }
 
 
}
 
return 0;
}
