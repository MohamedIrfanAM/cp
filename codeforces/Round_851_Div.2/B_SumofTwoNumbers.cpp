// time-limit: 1000
// problem-url: https://codeforces.com/contest/1788/problem/B
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
  string n;
  cin >> n;
  int c = 0;
  string x,y;
  for(auto &a : n)
  {
    int s = a-'0';
    if(s%2 == 0)
    {
      x.push_back(s/2+'0');
      y.push_back(s/2+'0');
    }
    else if(c&1 )
    {
      x.push_back((s+1)/2+'0');
      y.push_back((s)/2+'0');
      c++;
    }
    else
    {
      y.push_back((s+1)/2+'0');
      x.push_back((s)/2+'0');
      c++;
    }
  }
  while(x[0] == '0' && x.size() > 1) 
  {
    x.erase(x.begin());
  }

  while(y[0] == '0' && y.size() > 1) 
  {
    y.erase(y.begin());
  }
  cout << x << " " << y << "\n";
}

return 0;
}
