// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1821/B
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
  cin >>n;
  vector<int> a(n);
  vector<int> b(n);
  
  for(auto &k : a)
  {
    cin >> k;
  }

  for(auto &k : b)
  {
    cin >> k;
  }

  vector<pair<int,int>> v;
  int l = -1;
  bool streak = false;
  for(int i =1; i < n; i++)
  {
    if(b[i] >= b[i-1])
    {
      if(!streak)
      {
        l = i-1;
        streak = true;
      }
      if(i == n-1)
      {
        v.push_back({l,i});
        streak = false;
      }
    }
    else
    {
      if(streak)
      {
        v.push_back({l,i-1});
      }
      streak = false;
    }
  }
  sort(all(v),[](auto &a,auto &b){if(a.first == b.first)return a.second > b.second;else return a.first < b.first;});
  for(auto p : v)
  {
    bool found = false;
    for(int i = p.first;i <= p.second; i++)
    {
      if(a[i] != b[i])
      {
        found = true;
        break;
      }
    }
    if(found)
    {
      cout << p.first+1 << ' ' << p.second+1 << "\n";
    }
  }
}

return 0;
}
