// time-limit: 1000
// problem-url: https://codeforces.com/contest/1840/problem/C
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

int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n,k,q;
  cin >> n >> k >> q;
  vector<int> v(n);
  for(int i = 0; i < n; i++) 
  {
    cin >> v[i];
  }
  int m = 0;
  int c = 0;
  int streak = false;
  vector<int> ans;
  if(n == 1 && v[0] <= q) ans.pb(1);
  if(v[0] <= q && n >= 2 && v[1] > q)
    ans.pb(1);
  if(n >= 2 && v.back() <= q && v[n-2] > q) ans.pb(1);
  for(int i = 1 ; i+1 < n; i++)
  {
    if(v[i] <= q && v[i+1] > q && v[i-1] > q)
      ans.pb(1);
  }

  for(int i = 1; i < n;i++)
  {
    if(v[i] <= q  && v[i-1] <= q)
    {
      if(streak)c++;
      else 
      {
        c = 2;
        streak = true;
      }
      if(i == n-1)
        ans.pb(c);
    }
    else if(streak)
    {
      ans.pb(c);
      streak = false;
      c = 0;
    }
  }
  int count = 0;
  for(auto &a: ans)
  {
    if(a >= k) 
    {
      int x = (a-k)+1;
      count += (x*(x+1))/2;
    }
  }
  cout << count << "\n";
}

return 0;
}
