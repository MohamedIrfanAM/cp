// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1514/B
#include<bits/stdc++.h>

using namespace std;

int BinExp(long long int a , long long int b)
{
  int ans = 1;
  long long int M = 1000000007;

  while(b > 0)
  {
    if(1&b)
    {
      ans = (ans*a)%M;
    }
    a = (a*a)%M;
    b >>= 1;
  }
  return ans;
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
  unsigned long long int n,k;
  cin >> n >> k;

  cout << BinExp(n,k) << "\n";
}
return 0;
}
