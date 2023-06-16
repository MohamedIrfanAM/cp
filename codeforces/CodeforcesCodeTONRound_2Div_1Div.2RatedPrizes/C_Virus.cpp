// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1704/C
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
  vector<int> v(m);
  for(int i = 0; i < m; i++)
  {
    cin >> v[i];
  }
  sort(all(v));
  vector<int> a;
  for(int i = 1; i < m; i++) 
  {
    a.pb(v[i]-v[i-1]-1);
  }
  a.pb((n-v.back())+v[0]-1);
  sort(all(a));
  reverse(all(a));
  int x = 0;
  int inf = 0;
  for(auto &k: a)
  {
    k -= x;
    // cout << k << " ";
    if(k <= 0)
      break;
    else if(k <= 2)
    {
      inf += 1;
      x += 2;;
    }
    else
    {
      inf += (k-1);
      x+=4;
    }
  }
  cout << n-inf << "\n";
  
  
}

return 0;
}
