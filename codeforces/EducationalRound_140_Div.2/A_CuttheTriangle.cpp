// time-limit: 2000
// problem-url: https://codeforces.com/contest/1767/problem/A
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
  vector<int> v(6);
  bool negative = false;
  for(int i = 0; i < 6 ; i++)
  {
    cin >> v[i];
    if(v[i] < 0)
    {
      negative = true;
    }
  }
  if(negative)
  {
    cout << "NO\n";
    continue;
  }

  if(v[0] == v[2])
  {
    if(v[1] == v[5] || v[3] == v[5] )
    {
      cout << "NO\n";
      continue;
    }
  }

  if(v[0] == v[4])
  {
    if(v[1] == v[3] || v[3] == v[5] )
    {
      cout << "NO\n";
      continue;
    }
  }
  
  if(v[4] == v[2])
  {
    if(v[1] == v[5] || v[3] == v[1] )
    {
      cout << "NO\n";
      continue;
    }
  }

  cout << "YES\n";

}

return 0;
}