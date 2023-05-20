// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1787/B
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

map<int,int> prime_factors( int n )
{
  map<int,int> p;
  int n1 = n;
  for(int i = 2; i*i <= n1; i++)
  {
    while(n%i == 0)
    {
      p[i]++;
      n /= i;
    }
    if(n == 1)
    {
      break;
    }
  }
  if(n != 1)
  {
    p[n]++;
  }
  return p;
}

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n;
  cin >> n;
  auto p = prime_factors(n);
  
  vector<pair<int,int>> v;
  for(auto a: p)
  {
    v.push_back({a.second,a.first});
  }
  sort(all(v));
  int ans = 0;
  for(int i = 0; i < v.size(); i++)
  {
    int m = v[i].second;
    if(v[i].first < 1) continue;
    for(int j = i+1; j < v.size(); j++)
    {
      if(v[j].first > 0)
      {
        m *= v[j].second;
        v[j].first -= v[i].first;
      }
    }
    ans += m*v[i].first;
  }
  cout << ans << "\n";

}

return 0;
}
