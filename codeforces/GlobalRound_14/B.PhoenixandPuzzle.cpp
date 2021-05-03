// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1515/B
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
  if(n%2 != 0)
  {
    cout << "NO" << "\n";
  }
  else if (n%2 == 0)
  {
    int s = n/2;
    int s2 = 0;
    if(n%4 == 0)
    {
      s2 = n/4;
    }
    for(int i = 1; i <= s; i++)
    {
       if(i*i == s)
       {
         cout << "YES\n" ;
         break;
       }
       else if(i*i == s2)
       {
         cout << "YES\n" ;
         break;
       }
       else if(i*i > n)
       {
         cout << "NO\n";
         break;
       }
    }
  }
}


return 0;
}
