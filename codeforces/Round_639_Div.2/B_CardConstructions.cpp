// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1345/B
#include<bits/stdc++.h>

using namespace std;

long long int cards(int n)
{
  return ((3*pow(n,2))+n)/2;
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n; cin >> n;

  if( n < 2)
  {
    cout << 0 << "\n";
    continue;
  }
  int count = 0;
  long long int ans;
  int pos = 10e5;
  while(n > 1)
  {
    int l=1,r=pos;
    while( l <= r)
    {
      int m = (l+r)/2;
      if(cards(m) <= n)
      {
        ans = cards(m);
        l = m+1;
        pos = m;
      }
      else
      {
        r = m-1;
      }
    }
    n -= ans;
    count++;
  }
  cout << count << "\n";
}

return 0;
}
