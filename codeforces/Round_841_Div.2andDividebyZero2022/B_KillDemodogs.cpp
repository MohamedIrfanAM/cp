// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1731/B
#include<bits/stdc++.h>

using namespace std;

#define int            long long int
#define double         long double
#define pb             push_back
#define endl           "\n"
#define mod            1e9+7
#define all(p)         p.begin(), p.end()

#ifdef IRFAN_DEBUG
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) {cout << "\033[48;5;196m\033[38;5;15m" << name << " : " << arg1 << "\033[0m"<< endl;}
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr (names + 1, ',');
  cout << "\033[48;5;196m\033[38;5;15m";cout.write (names, comma - names) << " : " << arg1 << " | " << "\033[0m"; __f (comma + 1, args...);
}
#else
#define bug(...)
#endif

int binmult(int a , int b)
{
  int ans = 0;
  int M = 1000000007;

  while(b > 0)
  {
    if(1&b)
    {
      ans = (ans+a)%M;
    }
    a = (a+a)%M;
    b >>= 1;
  }
  return ans;
}

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n;
  int m = (int)mod;
  cin >> n;
  int ans = ((n*n)%m) + (n%m);
  ans %= m;
  ans *= (4*n-1)%m;
  ans %= m;
  ans *= 337;
  ans %= m;
  
  cout << ans << "\n";
}

return 0;
}
