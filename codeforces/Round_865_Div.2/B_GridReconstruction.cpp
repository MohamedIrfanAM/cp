// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1816/B
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
  vector<int> a(n);
  vector<int> b(n);
  a[0] = 2*n;
  b[n-1] = (2*n)-1;
  a[n-1] = 1;
  b[0] = n;

  int x = (2*n)-2;
  int y = n-1;
  for(int i = 1; i < n-1 ;i++)
  {
    if(i&1)
    {
      a[i] = y;
      y--;
      b[i] = x;
      x--;
    }
    else
    {
      b[i] = y;
      y--;
      a[i] = x;
      x--;

    }
  }

  for(auto k: a)
  {
    cout << k << ' ';
  }
  cout << "\n";
  for(auto k: b)
  {
    cout << k << ' ';
  }
  cout << "\n";
}


return 0;
}
