// time-limit: 2000
// problem-url: https://codeforces.com/contest/1829/problem/C
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
  vector<pair<int,string>> v(n);

  for(auto &p : v)
  {
    cin >> p.first >> p.second;
  }

  sort(v.begin(),v.end());

  int ans = 0;
  bool left = false,right = false;

  for(auto p: v)
  {
    if(p.second == "11")
    {
      if(right && left )
      {
        ans = min(p.first,ans);
      }
      else
      {
        ans = p.first;
      }
      right = true;
      left = true;
      break;
    }
    else if(p.second[1] == '1' && !right)
    {
      right = true;
      ans += p.first;
    }
    else if(p.second[0] == '1' && !left)
    {
      left = true;
      ans += p.first;
    }
  }
  if(left && right)
  {
    cout << ans << "\n";
  }
  else
  {
    cout << "-1\n";
  }
}

return 0;
}
