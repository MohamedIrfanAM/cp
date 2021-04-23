// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/339/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
int m;
cin >> n >> m;

long long int ans = 0;
int h,t = 1;

for ( int i = 0; i < m; i++ )
{
  cin >> h;
  if( h >= t  )
  {
    ans += h-t;
    t = h;
  }
  else if ( h <= t )
  {
    ans += h+(n-t);
    t = h;
  }
}
cout << ans;

return 0;
}
