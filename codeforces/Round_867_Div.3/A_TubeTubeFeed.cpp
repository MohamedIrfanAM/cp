// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1822/A
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
  int n,t;
  cin >> n >> t;
  vector<vector<int>>v;

  for(int i = 0; i < n; i++)
  {
    vector<int> k = {0,0,0};
    int x;
    cin >> x;
    x += i;
    k[1] = x;
    v.push_back(k);
  }

  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v[i][0] = x;
    v[i][2] = i+1;
  }
  
  sort(v.rbegin(),v.rend());

  int ans = -1;
  for(auto p : v)
  {
    if(p[1] <= t )
    {
      ans = p[2];
      break;
    }
  }
  cout << ans << "\n";
}

return 0;
}