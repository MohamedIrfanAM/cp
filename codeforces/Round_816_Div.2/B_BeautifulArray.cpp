// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1715/B
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
  int n,k,b,s;
  cin >> n >> k >> b >> s;
  if(s < k*b || (s-(k*b)) > (k-1)*n)
  {
    cout << "-1\n";
    continue;
  }
  // else
  //   cout << n << " " << k << " " << b << " " << s << "\n";
  vector<int> v(n);
  v[0] = k*b;
  int x = k*b;
  for(int i = 0; i < n; i++)
  {
    if(x < s)
    {
      v[i] += min((s-x),k-1);
      x += min((s-x),k-1);
    }
    // cout << v[i] << " ";
  }
  for(auto &Z: v)
  {
    cout << Z << " ";
  }
  cout << "\n";
  
}

return 0;
}
