// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1703/E
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
  int n;
  cin >> n;
  vector<string> v(n);
  for(int i = 0; i < n; i++) 
  {
    cin >> v[i];
  }
  int count = 0;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      int x = v[i][j]-'0';
      x += v[j][n-i-1]-'0';
      x += v[n-i-1][n-j-1]-'0';
      x += v[n-j-1][i]-'0';
      if(x >= 2 && v[i][j] != '1')
      {
        count++;
        v[i][j] = '1';
      }
      else if(x <= 2 && v[i][j] == '1')
      {
        count++;
        v[i][j] = '0';
      }
    }
  }
  cout << count << endl;
}

return 0;
}
