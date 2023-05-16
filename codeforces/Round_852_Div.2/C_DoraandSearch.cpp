// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1793/C
#include <algorithm>
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
  for(auto &a: v)
  {
    cin >> a;
  }
  if(n < 4 || is_sorted(all(v)))
  {
    cout << "-1\n";
    continue;
  }
  int l = 0, r = n-1;
  int low = 1; int high = n;

  while(r-l >= 3)
  {
    if(v[r] != high && v[l] != low && v[r] != low && v[l] != high)
    {
      break;
    }
    if(v[r] == high)
    {
      r--;
      high--;
    }

    if(v[l] == high)
    {
      l++;
      high--;
    }
    if(v[l] == low)
    {
      l++;
      low++;
    }

    if(v[r] == low)
    {
      r--;
      low++;
    }
  }
  if(r-l >= 3)
    cout << l+1 << " " << r+1 << "\n";
  else
    cout << "-1\n";
}

return 0;
}
