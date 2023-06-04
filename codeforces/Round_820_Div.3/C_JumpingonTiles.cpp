// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1729/C
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
  cout << abs((int)abs(s[0]-s.back())) << " ";
  vector<pair<int,int>> v;
  for(int i = 1; i < s.size()-1; i++)
  {
    if(s[i] <= max(s[0],s.back()) && s[i] >= min(s[0],s.back()))
      v.pb({s[i],i+1});
  }
  cout << v.size()+2 << "\n";
  sort(all(v));
  if(s.back() < s[0])reverse(all(v));
  cout << 1 << " ";
  for(auto &Z: v)
  {
    cout << Z.second << " ";
  }
  cout << s.size() << "\n";;
  
}

return 0;
}
