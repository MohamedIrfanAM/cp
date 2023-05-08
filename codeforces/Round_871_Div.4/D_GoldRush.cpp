// time-limit: 2000
// problem-url: https://codeforces.com/contest/1829/problem/D
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

bool found = false;
void assemble(int m,int n,bool l)
{
  if(found)
  {
    return;
  }
  int a = 3*m;
  if(a == n)
  {
    found = true;
    return;
  }
  if(m%2 == 0 && l)
  {
    int b = (3*m)/2;
    if(b == n)
    {
      found = true;
      return;
    }
    else if(b < n)
    {
      assemble(b, n,1);
    }
  }
  if(a < n)  
  {
    assemble(a, n,0);
  }
}


int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n,m;
  cin >> n >> m;
  found = false;
  if(n == m)
  {
    cout << "YES\n";
    continue;
  }
  assemble(m, n,1);
  if(found)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
}

return 0;
}
