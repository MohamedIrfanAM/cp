// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1799/B
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
  cin >> n;
  bool one = false;
  int count = 0;
  vector<pair<int,int>> v(n);
  vector<pair<int,int>> ans;
  int k = 1;
  for(auto &a: v)
  {
    cin >> a.first;
    a.second = k;
    if(a.first == v[0].first) count++;
    if(a.first == 1) one = true;
    k++;
  }
  if(count == n || n == 1)
  {
    cout << "0\n";
    continue;
  }
  else if(one)
  {
    cout << "-1\n";
    continue;
  }
  sort(all(v));
  reverse(all(v));
  auto m = v[0];
  for(int j = 0; j < 30; j++)
  {
    for(int i =0; i < n; i++)
    {
      if(v[i].first > m.first && v[i].first > 2)
      {
        v[i].first = ceil((v[i].first*1.0)/m.first);
        ans.push_back({v[i].second,m.second});
      }
      if(m.first > v[i].first ) 
      {
        m.first = v[i].first;
        m.second = v[i].second;
      }
    }
  }

  cout << ans.size() << "\n";
  for(auto &p : ans)
  {
    cout << p.first <<" " << p.second << "\n";
  }
}

return 0;
}
