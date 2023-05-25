// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1759/C
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
  int l,r,x,a,b;
  cin >> l >>r >> x >> a >> b;
  if(abs(b-a) >= x)
  {
    cout << 1 << "\n";
    continue;
  }
  if(a == b)
  {
    cout << 0 << "\n";
    continue;
  }
  int ans = 3;
  if(a < b)
  {
    if((r-b) >= x || (a-l) >= x) ans = 2;
    else if((r-a) >= x && (b-l >= x)) ans = 3;
    else ans = -1;
  }
  else
  {
    if((b-l) >= x || (r-a) >= x) ans = 2;
    else if((a-l) >=x && (r-b) >= x) ans = 3;
    else ans =  -1;
  }
  cout << ans << "\n";
}

return 0;
}
