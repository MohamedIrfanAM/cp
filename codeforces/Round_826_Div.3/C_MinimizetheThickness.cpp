// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1741/C
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
  vector<int> a(n+1);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    a[i+1]=a[i]+v[i];
  }
  vector<int> k;

  for(int i = 1; i <= n; i++)
  {
    int ans = i;
    int sum = a[i];
    int c = 0;
    int y = i;
    for(int j = i+1; j <= n; j++) 
    {
      int d = a[j]-a[y];
      c++;
      if(d == sum)
      {
        // cout << sum << " " <<  d << " " << c;
        ans = max(ans,c);
        y = j;
        c=0;
      }
      if(d > sum) break;
      if(j == n && d == sum) 
      {
        k.pb(ans);
      }
    }
    // cout << "\n";
  }
  auto it= min_element(all(k));
  cout << (it != k.end() ? *it : n) << "\n";
   
}

return 0;
}
