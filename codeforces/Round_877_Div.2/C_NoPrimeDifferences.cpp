// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1838/C
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
  int n,m;
  cin >> n >> m;
  vector<vector<int>> v(n);
  int x = 1;
  for(int i = 0; i < n;i++)
  {
    for(int j = 0; j < m; j++)
    {
      v[i].pb(x);
      x++;
    }
  }

  x = 0;
  int done = 0;
  for(int i = n/2; i < n; i++)
  {
    for(int j = 0; j < m;j ++)
    {
      cout << v[i][j] << " ";
    }
    done++;
    cout << endl;
    if(done == n) break;
    for(int j = 0; j < m; j++) 
    {
      cout << v[x][j] << " ";
    }
    done++;
    x++;
    cout << endl;
  }
}

return 0;
}
