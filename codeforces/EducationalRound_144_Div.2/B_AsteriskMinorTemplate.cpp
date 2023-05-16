// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1796/B
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
  string a,b;
  cin >> a >> b;

  if(a[0] == b[0])
  {
    cout << "YES\n" << a[0] << "*\n";
    continue;
  }
  else if(a.back() == b.back())
  {
    cout << "YES\n*" << a.back() << "\n";
    continue;
  }

  string ans = "";
  for(int i = 0; i+1 < a.size() ; i++)
  {
    for(int j = 0; j+1 < b.size(); j++)
    {
      if(a[i] == b[j] && a[i+1] == b[j+1])
      {
        ans.push_back(a[i]);
        ans.push_back(a[i+1]);
        break;
      }
    }
    if(ans != "")
    {
      break;
    }
  }

  if(ans != "")
  {
    cout << "YES\n*" << ans << "*\n";
  }
  else
    cout << "NO\n";
}

return 0;
}
