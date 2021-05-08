// time-limit: 1000
// problem-url: https://codeforces.com/contest/1519/problem/A
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
  int r,b,d;
  cin >> r >> b >> d;
  double packets = min(r,b);

  double maxballs = ceil(max(r,b)/packets);


  if((maxballs - 1) <= d)
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
