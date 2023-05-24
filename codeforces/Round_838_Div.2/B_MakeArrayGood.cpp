// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1762/B
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
  vector<pair<int,int>> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i].first;
    v[i].second = i+1;
  }
  sort(all(v));
  map<int,int> m;
  for(int i = 0; i < n-1; i++) 
  {
    int a = v[i].first;
    int b = v[i+1].first;
    if(b < a)
    {
      m[v[i+1].second] = a-b;
      v[i+1].first = v[i].first;
    }
    else if(b%a)
    {
      int k = (((b/a)+1)*a)-b;
      int x = b%a;
      int y = k;
      if((b+x)%a == 0) y = x;
      v[i+1].first += y;
      m[v[i+1].second] =y;
    }
  }
  cout << m.size() << "\n";
  for(auto &Z: m)
  {
    cout << Z.first << " " << Z.second << "\n";
  }
  
}

return 0;
}
