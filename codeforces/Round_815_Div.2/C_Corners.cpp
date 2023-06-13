// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1720/C
#include<bits/stdc++.h>

using namespace std;

#define int           long long int
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

int tst;
cin >> tst;
while(tst--)
{
  int n,m;
  cin >> n >> m;
  int count = 0;
  vector<vector<int>> v(n);
  for(int i = 0; i < n; i++) 
  {
    string s;
    cin >> s;

    for(int j = 0; j < m; j++) 
    {
      v[i].pb(s[j]-'0');
      count += v[i][j];
    }
  }
  int ans=5;;
  for(int i = 0; i+1 < n; i++)
  {
    for(int j = 0; j+1 < m; j++)
    {
      int c = 0;
      c += v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1];
      ans = min(ans,c);
    }
  }

  // cout << count << " " << ans << "\n";
  if(count == 0) cout << 0 << "\n";
  else if(ans <= 2) cout <<  count << "\n";
  else cout << count-ans+2 << "\n";
}

return 0;
}
