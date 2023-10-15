// time-limit: 1000
// problem-url: https://codeforces.com/contest/1779/problem/A
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
  string s;
  cin >> s;

  bool l_found = false;
  bool r_found = false;
  for(int i =0; i < n; i++)
  {
    if(!l_found && s[i] == 'R') 
    {
      r_found = true;
    }
    else if(r_found && s[i] == 'L')
    {
      l_found = true;
    }
    if(l_found && r_found)
    {
      break;
    }
  }
  if(l_found && r_found)
  {
    cout << "0\n";
    continue;
  }

  bool ans_found = false;
  for(int i = 0; i+1 < n; i++)
  {
    if(s[i] == 'L' && s[i+1] == 'R')
    {
      cout << i+1 << "\n";
      ans_found =true;
      break;
    }
  }

  if(!ans_found)
  {
    cout << "-1\n";
  }
}


return 0;
}
