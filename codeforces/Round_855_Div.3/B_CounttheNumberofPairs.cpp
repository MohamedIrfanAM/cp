// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1800/B
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
  int n;
  int k;
  cin >> n >> k;
  string s;
  cin >> s;
  map<int,int> m;

  for(int i = 0; i < n; i++) 
  {
    int x = s[i];
    m[x]++;
   }

  int ans = 0;
  for(auto &p: m)
  {
      int a = p.second;
      int b = 0;
      if(p.first+32 < 123)
        b = m[p.first+32];

      ans += min(a,b);
      p.second -= min(a,b);
      if(p.first+32 < 123)
      {
        m[p.first+32] -= min(a,b);
      }

      ans += min(k,(abs(a-b)/2));
      p.second = 0;

      if(p.first+32 < 123)
      {
        m[p.first+32] =0;
      }
      k -= min(k,(abs(a-b)/2));

  }
  cout << ans << "\n";

}

return 0;
}
