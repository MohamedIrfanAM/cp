// time-limit: 2000
// problem-url: https://codeforces.com/contest/1841/problem/B
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
  int n;
  cin >> n;
  vector<int> v(n);
  bool l = false;
  int x = INT_MAX;
  int y = INT_MAX;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  y = v[0];
  int k = v[0];
  cout << 1;
  
  bool r = false;
  for(int i = 1; i < n; i++) 
  {
    // cout << "\033[48;5;196m\033[38;5;15m" << x << y << l << r << "\033[0m" << endl;
    if(v[i] >= v[i-1] && !l)
    {
      cout << 1;
      y = min(v[i],y);
      k = max(k,v[i]);
    }
    else if(v[i] < v[i-1] && !l)
    {
      // cout << "\033[48;5;196m\033[38;5;15m" << i << "\033[0m" << endl;
      l = true;
    }
    if(l && v[i] <= y && !r)
    {
      cout << 1;
      x = v[i];
      r = true;
    }
    else if(l && !r && v[i] >= k)
    {
      cout << 1;
      k = v[i];
    }
    else if(r && l && v[i] <= y && v[i] >= x)
    {
      cout << 1;
      x = v[i];
    }
    else if(l)
      cout << 0;
  }
  cout << endl;
   
}

return 0;
}
