// time-limit: 3000
// problem-url: https://codeforces.com/problemset/problem/1811/B
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

int dist(int a,int n)
{
  if(a > n/2)
  {
    return n-a+1;
  }
  else
  {
    return a;
  }
}


int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n,x1,x2,y1,y2,a,b,p,q;
  cin >> n >> x1 >> y1 >> x2 >> y2;

  a = dist(x1,n);
  b = dist(y1,n);

  p = dist(x2,n);
  q = dist(y2,n);

  int d1 = min(a,b);
  int d2 = min(p,q);
  cout << abs(d1-d2) << "\n";
}

return 0;
}
