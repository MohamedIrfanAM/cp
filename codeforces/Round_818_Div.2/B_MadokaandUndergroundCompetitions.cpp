// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1717/B
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
  int n,k,r,c;
  cin >> n >> k >> r >> c;
  vector<string> v(n);
  for(int i = 0; i < n; i++) 
  {
    for(int j = 0; j < n; j++) 
    {
        v[i].pb('.');
    }
  }
  c--;r--;
  for(int i = 0; i < n; i++)
  {
    int y = c+i-r;
    for(int j = y; j >= 0;j -= k)
    {
      if(j >= 0 && j < n)
        v[i][j] = 'X';
    }
    for(int j = y; j < n; j+=k) 
    {
      if(j >= 0)
        v[i][j] = 'X';
    }
  }
  for(auto s: v)
  {
    cout << s << "\n";
  }
}

return 0;
}
