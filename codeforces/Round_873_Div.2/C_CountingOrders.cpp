// time-limit: 1000
// problem-url: https://codeforces.com/contest/1828/problem/C
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
  for(auto &k : a)
  {
    cin >> k;
  }

  for(auto &k : b)
  {
    cin >> k;
  }
  sort(all(b));
  sort(all(a));
  reverse(all(a));
  reverse(all(b));
  vector<int> c;
  int count = 0;
  int j = 0;
  for(int i = 0; i < n ;i++)
  {
    while(j < n && a[j] > b[i])
    {
      count++;
      j++;
    }
    c.push_back(count);
  }
  int ans = 1;
  int M = 1000000000+7;
  for(int i = 0; i < c.size(); i++) 
  {
    ans = (ans*(c[i]-i))%M;
  }
  cout << ans << "\n";
}

return 0;
}