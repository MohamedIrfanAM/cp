// time-limit: 3000
// problem-url: https://codeforces.com/problemset/problem/1790/C
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
  cin >>n;
  map<int,int> m;
  vector<vector<int>> v(n);
  for(int i = 0; i < n; i++) 
  {
    for (int j = 0; j < n-1; j++)
    {
      int x;
      cin >>x;
      m[x] = max(j,m[x]);
      v[i].push_back(x);

    }
  }
  int other;
  int count = 0;
  for(int i = 0; i < n; i++)
  {
    if(v[i][n-2] == v[0][n-2])
      count++;
    else
      other = v[i][n-2];
  }

  vector<int> ans(n-2);
  for(auto &p : m)
  {
    if(p.second != n-2)
      ans[p.second]=p.first;
  }
  for(auto &a: ans)
  {
    cout << a << " ";
  }
  if(count == n-1)
  {
    cout << other << " " << v[0][n-2] << "\n";
  }
  else
    cout << v[0][n-2] << " " << other << "\n";
}

return 0;
}
