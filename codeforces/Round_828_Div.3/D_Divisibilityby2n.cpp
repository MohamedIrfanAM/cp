// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1744/D
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
  vector<int> v(n);
  vector<int> a;
  int cnt = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    while(v[i] > 1 && v[i]%2 == 0)
    {
      cnt++;
      v[i]/=2;
    }
    int k = 0;
    int y = i+1;
    while(y%2 == 0 && y > 1)
    {
      k++;
      y/=2;
    }
    a.pb(k);
  }
  // cout << cnt << " ";
  if(cnt >= n)
  {
    cout << 0 << "\n";
    continue;
  }
  sort(a.rbegin(),a.rend());
  int ans = 0;
  for(auto &x: a)
  {
    ans++;
    cnt += x;
    if(cnt>= n) break;
  }
  cout << (cnt >= n ? ans : -1) << endl;
}

return 0;
}
