// time-limit: 2000
// problem-url: https://codeforces.com/contest/1606/problem/B
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
  long long int n,k;
  cin >> n >> k;

  if(n == 1)
  {
    cout << "0\n";
    continue;
  }
  else if( k == 1)
  {
    cout << n-1 << "\n";
    continue;
  }
  

  long long i = 0,ans = 0;
  while(true)
  {
    long long int power = pow(2LL,i) ;
    long long int diff = power - n;
    if( diff >= 0LL)
    {
      ans = i;
      break;
    }
    else if( power > k )
    {
      ans = i;
      break;
    }
    i++;
  }

  long long int power = pow(2,ans);
  if(power >= n)
  {
    cout << ans << "\n";
    continue;
  }

  n -= power;
  if(n%k == 0)
  {
    ans += n/k;
  }
  else
  {
    ans += (n/k) + 1;
  }
  cout << ans << "\n";
}



return 0;
}
