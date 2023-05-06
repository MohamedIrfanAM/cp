// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1820/A
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
  string s;
  cin >> s;
  int count = 0;
  if(s[0] == '_')
  {
    count++;
  }
  if(s.back() == '_')
  {
    count++;
  }
  if(s.size() == 1)
  {
    if(s[0] == '^')
    {
      count = 1;
    }
    else
    {
      count = 2;
    }
  }

  for(int i = 1; i < s.size(); i++)
  {
    if(s[i] == '_')
    {
      if(s[i-1] != '^')
      {
        count++;
      }
    }
  }

  cout << count << "\n";
}

return 0;
}
