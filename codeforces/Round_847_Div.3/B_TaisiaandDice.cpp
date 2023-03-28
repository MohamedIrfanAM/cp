// time-limit: 1000
// problem-url: https://codeforces.com/contest/1790/problem/B
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
  int n,s,r;
  cin >> n >> s >> r;

  int max = s-r;
  cout << max << " "; 
  n -= 1;

  vector<int> ans;
  for(int i = max; i >= 1; i--)
  {
    if(i <= r)
    {
      int count = r/i;
      for(int j = 0; j < count; j++)
      {
        ans.push_back(i);
      }
      r %= i;
    }
  }

  int done = ans.size();
  while(ans.size() < n)
  {
    for(int i = 0; i < done; i++)
    {
      if(ans[i] > 1)
      {
        ans[i]--;
        ans.push_back(1);
      }
      if(ans.size() == n)
      {
        break;
      }
    }
  }

  for(auto a : ans )
  {
    cout << a << " ";
  }
  cout << endl;
}

return 0;
}
