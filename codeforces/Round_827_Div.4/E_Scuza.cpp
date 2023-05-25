// time-limit: 3000
// problem-url: https://codeforces.com/problemset/problem/1742/E
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
  int n,q;
  cin >> n >> q;
  vector<int> v(n);
  vector<int> sum(n+1);
  vector<int> m(n+1);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    sum[i+1] = sum[i]+v[i];
    m[i+1] = max(m[i],v[i]);
  }
  vector<pair<int,int>> k(q);
  for(int i = 0; i < q; i++) 
  {
    cin >> k[i].first;
    k[i].second = i;
  }
  sort(all(k));
  vector<int> ans(q);   
  int i = 1;
  for(auto &p: k)
  {
    int x = p.first;
    while(i <= n && m[i] <= x)
    {
      i++;
    }
    ans[p.second] = sum[i-1];
  }
  for(auto &Z: ans)
  {
    cout << Z<< " ";
  }
  cout << "\n";
  
}

return 0;
}
