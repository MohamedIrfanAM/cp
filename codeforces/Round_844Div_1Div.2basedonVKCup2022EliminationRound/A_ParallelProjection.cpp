// time-limit: 1000
// problem-url: https://codeforces.com/contest/1782/problem/A
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
  int w,d,h,a,b,f,g;
  cin >> w >> d >> h;
  cin >> a >> b >> f >> g;

  int ans = h;
  
  vector<int> v;

  v.push_back((w-a)+(w-f)+abs(b-g));
  v.push_back(a+f+abs(b-g));
  v.push_back(g+b+abs(a-f));
  v.push_back((d-b)+(d-g)+abs(a-f));

  sort(all(v));
  cout << ans + v[0] << "\n";
}


return 0;
}
