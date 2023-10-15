// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1725/B
#include<bits/stdc++.h>

using namespace std;

#define ll            long long int
#define double        long double
#define pb            push_back
#define endl          "\n"
#define all(p)        p.begin(), p.end()
const int mod=1e9+7;

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

int tst = 1;
while(tst--)
{
  int n,d;
  cin >> n >> d;
  vector<int> v( n);
  for(int i = 0; i <  n; i++)
  {
    cin >> v[i];
  }
  int l = 0,r = n-1;
  int ans = 0;
  sort(all(v));
  while(r >= l)
  {
    int c = v[r];
    while(d >= c && l < r)
    {
      c += v[r];
      l++;
    }
    r--;
    if(c > d)
      ans++;
  }
  cout << ans << "\n";
}

return 0;
}
