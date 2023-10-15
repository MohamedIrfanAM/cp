// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1804/B
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
  int n,k,w,d;
  cin >> n >> k >> d >> w;
  vector<int> v(n);
  map<int,pair<int,int>> m;
  for(auto &a: v)
  {
    cin >> a;
    m[a].first++;
  }

  int open = 0,wait =-1,duration = 0,ans =0,start = -1;
  bool done = 0;
  for( auto &p : m)
  {
    done = false;
loop:
    if(start > -1)
    {
      duration = p.first - start;
    }
    if(p.second.second > 0)
    {
      if(open > 0 && duration <= d && start > -1)
      {
        int x = min(p.second.second,open);
        p.second.second -= x;
        open -= x;
      }
      if(p.second.second > 0)
      {
        ans += ceil(p.second.second/(k*1.0));
        open = ceil(p.second.second/(k*1.0))*k-p.second.second;
        p.second.second = 0;
        start = p.first;

      }
      if(open > 0)
      {
        open -= p.second.first;
        p.second.first = 0;
      }
      else
      {
        open = 0;
        start = -1;
      }
      wait = -1;
    }
    else if(open > 0 && duration <= d && start > -1)
    {
      int x = min(p.second.first,open);
      p.second.first -= x;
      open -= x;
      
    }
    if(p.second.first > 0)
    {
      if(wait > -1)
      {
        m[wait].second += p.second.first;
      }
      else
      {
        m[p.first+w].second += p.second.first;
        wait = p.first+w;
      }
    }

    // cout << p.first <<" " << p.second.first << " " << p.second.second << "\n";
    if(w == 0 && !done)
    {
      p.second.first = 0;
      done = true;
      goto loop;
    }
  }
  cout << ans << '\n';

}

return 0;
}

