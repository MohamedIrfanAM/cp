// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1722/D
#include<bits/stdc++.h>

using namespace std;

#define ll            long long int
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> v;
  for(int i =0; i < n/2; i++)
  {
    if(s[i] == 'L')
    {
      v.pb(i);
    }
  }
  for(int i = (n&1 ? (n/2+1): n/2); i < n;i++)
  {
    if(s[i] == 'R')
    {
      v.pb(n-1-i);
    }
  }
  ll c = 0;
  for(int i = 0; i < n; i++) 
  {
    if(s[i] == 'L')
    {
      c += i;
    }
    else
    {
      c += n-i-1;
    }
  }
  // cout << c << "\n";
  sort(all(v));
  for(auto &a : v)
  {
    // cout << a << " ";
    c += n-a-1;
    c -= a;
    cout << c << " ";
  }
  for(int i = 0; i < (n-v.size()); i++) 
  {
    cout << c << " ";
  }
  cout << "\n";
}

return 0;
}
