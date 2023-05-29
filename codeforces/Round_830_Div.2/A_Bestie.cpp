// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1732/A
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
  int g; 
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(i==0)g=v[i];
    else g = __gcd(g,v[i]);
  }
  if(g == 1)
  {
    cout << "0\n";
    continue;
  }
  int ans = INT_MAX;
  for(int i = n-1; i>=0; i--)
  {
    int x = v[i];
    int y = __gcd(v[i],i+1);
    // cout << x << " " << y << "\n";
    for(int j = 0; j < n;j++)
    {
      x = __gcd(x,v[j]);
      y = __gcd(y,v[j]);
    }
    // cout << x << " " << y << "\n";
    if(x == 1)break;
    else if(y == 1)
    {
      ans = min(ans,n-i);
    }
  }
  cout << min(ans,3ll) << "\n";
}

return 0;
}
