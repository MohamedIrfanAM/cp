// time-limit: 1000
// problem-url: https://codeforces.com/contest/1826/problem/0
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
  vector<int> v;

  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(),v.end());

  if(n == 1)
  {
    if(v[0] == 0)
    {
      cout << "0\n";
    }
    else
    {
      cout << "-1\n";
    }
    continue;
  }

  bool found = false;
  for(int i = 0; i < n; i++)
  {
    if(i != n-1)
    {
      if(v[i] == v[i+1])
      {
        continue;
      }
    }
    if(n-i-1 >= v[i])
    {
      cout << n-i-1 << "\n";
      found = true;
      break;
    }
  }
  if(!found)
  {
    cout << "-1\n";
  }
}

return 0;
}