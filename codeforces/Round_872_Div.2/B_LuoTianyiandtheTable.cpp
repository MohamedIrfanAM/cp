// time-limit: 1000
// problem-url: https://codeforces.com/contest/1825/problem/B
#include <algorithm>
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


int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n,m;
  cin >> n >> m;
  vector<int> v(n*m);
  for(auto &a : v)
  {
    cin >> a;
  }

  sort(all(v));

  int p = v.back()-v[1];
  int k = v.back()-v[0];

  int ans1 = (min(m,n)-1)*p;
  ans1 += k*((m*n)-min(n,m));

  p = v[(n*m)-2]-v[0];
  k = v.back()-v[0];

  int ans2 = (min(m,n)-1)*p;
  ans2 += k*((m*n)-min(n,m));
  cout << max(ans1,ans2) << "\n";
}

return 0;
}
