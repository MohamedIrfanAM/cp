// time-limit: 1000
// problem-url: https://codeforces.com/contest/1833/problem/D
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
  cin>> n;
  vector<int> v(n);
  vector<int> ans {-1};
  for(int i = 0; i < n; i++) 
  {
    cin >> v[i];
  }
  if(n == 1)
  {
    cout << v[0] << "\n";
    continue;
  }
  int c = -1;
  int index = -1;
  for(int i = 1; i < n; i++)
  {
    if(v[i] > c )
    {
      c = v[i];
      index = i;
    }
  }
  for(int i = index; i >= 0; i--)
  {
    vector<int> s;
    for(int j = index+1; j < n; j++)
    {
      s.push_back(v[j]);
    }
    for(int j = index; j >= i; j--)
    {
      s.push_back(v[j]);
    }
    for(int j = 0; j < i; j++)
    {
      s.push_back(v[j]);
    }
    ans = max(s,ans);
  }

  index--;
  for(int i = index; i >= 0; i--)
  {
    vector<int> s;
    for(int j = index+1; j < n; j++)
    {
      s.push_back(v[j]);
    }
    for(int j = index; j >= i; j--)
    {
      s.push_back(v[j]);
    }
    for(int j = 0; j < i; j++)
    {
      s.push_back(v[j]);
    }
    ans = max(s,ans);
  }
  for(auto &a: ans)
  {
    cout << a << " ";
  }
  cout << "\n";

}

return 0;
}
