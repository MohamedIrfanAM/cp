// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1797/B
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
  vector<vector<int>> v(n);
  int count = 0;
  for(int i = 0; i < n; i++) 
  {
    vector<int> v1(n);
    for(int j = 0; j < n; j++)
    {
      cin >> v1[j];
    }
    v[i]=v1;
  }

  for(int i = 0; i < n; i++) 
  {
    for(int j = 0; j < n; j++)
    {
      int a = v[i][j];
      if(n-1-i >= 0 && n-1-j >= 0)
      {
        int b = v[n-1-i][n-1-j];
        if(a != b)
        {
          count++;
          // cout << i << " " << j << "\n";
        }
      }
    }
  }
  count /= 2;

  if(k >= count && (n&1 || (k-count)%2==0))
  {
    cout << "YES\n";
  }
  else
    cout << "NO\n";


  
}

return 0;
}
