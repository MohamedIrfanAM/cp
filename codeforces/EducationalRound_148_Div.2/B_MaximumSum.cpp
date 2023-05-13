// time-limit: 2000
// problem-url: https://codeforces.com/contest/1832/problem/B
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
  int n,k;
  cin >> n >> k;
  vector<int> v(n);
  int sum1 = 0;
  for(auto &a : v)
  {
    cin >> a;
    sum1 += a;
  }
  sort(all(v));

  vector<int> a;
  vector<int> b;
  int sum = 0;
  for(int i = n-1; i >= 0; i--)
  {
    sum += v[i];
    a.push_back(sum);
  }
  sum = 0;
  for(int i = 0; i+1 < n; i+=2)
  {
    sum += v[i]+v[i+1];
    b.push_back(sum);
  }

  vector<int> ans;
  for(int i =0; i < b.size(); i++)
  {
    int sum2 = b[i];
    if(k-i-2 >= 0 && k-i-2 < a.size())
      sum2 += a[k-i-2];
    ans.push_back(sum2);
  }

  for(int i =0; i < a.size(); i++)
  {
    int sum2 = a[i];
    if(k-i-2 >= 0 && k-i-2 < b.size())
      sum2 += b[k-i-2];
    ans.push_back(sum2);
  }


  cout << sum1-*min_element(all(ans)) << "\n";
}

return 0;
}
