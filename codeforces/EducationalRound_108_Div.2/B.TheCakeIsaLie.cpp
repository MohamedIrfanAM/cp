// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1519/B
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
  int n,m,k;
  cin >> n >> m >> k;
  int x = 1, y = 1;
  int c = 0; ;
  c += n-x;
  x = n;
  c += x*(m-y);
  y = m;
  if( c == k )
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
