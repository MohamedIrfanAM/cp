// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1613/C
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
  long long n,h;

  cin >> n >> h;

  vector<long long int> arr(n);

  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  
  long long l = 1;
  unsigned long long r = 10e18;
  unsigned long long int ans;

  while(l <= r)
  {
    long long m = (l+r)/2;

    long long damage = m;

    for(int i = 1; i < n ; i++)
    {
      damage += min(m,arr[i]-arr[i-1]);
    }

    if(damage >= h)
    {
      ans = m;
      r = m-1;
    }
    else 
    {
      l = m +1 ;
    }

  }
    cout << ans << "\n";
  
  
}

return 0;
}
