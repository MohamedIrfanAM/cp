// time-limit: 1000
// problem-url: https://codeforces.com/contest/1831/problem/B
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
  unordered_map<int,int> m;
  unordered_map<int,int> h;
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<int> a(n);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  if(n==1)
  {
    cout << (v[0] == a[0] ? 2 : 1) << "\n";
    continue;
  }
  int k = 1;
  m[v[0]] = 1;
  h[a[0]] = 1;
  for(int i = 1; i < n; i++) 
  {
    if(v[i] == v[i-1])
    {
      k++;
    }
    else
    {
      k=1;
    }
    m[v[i]] = max(k,m[v[i]]);
  }
  k = 1;
  for(int i = 1; i < n; i++) 
  {
    if(a[i] == a[i-1])
    {
      k++;
    }
    else
    {
      k=1;
    }
    h[a[i]] = max(k,h[a[i]]);
  }
  int ans = 1;
  for(auto &p: m)
  {
    // cout << p.first << " " << p.second << "\n";
    int x = p.second+h[p.first];
    ans = max(x,ans);
  }
  for(auto &p: h)
  {
    ans = max(p.second,ans);
  }
  cout << ans << "\n";
  
}

return 0;
}
