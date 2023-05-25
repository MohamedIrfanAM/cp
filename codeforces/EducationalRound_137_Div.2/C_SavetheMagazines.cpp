// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1743/C
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
  int n = 0;string s;
  int k;
  cin >> k;
  cin >> s;
  vector<int> v(k);
  for(int i = 0; i < k; i++)
  {
    cin >> v[i];
  }
  if(count(all(s),'1') == k)
  {
    cout << accumulate(all(v),0ll) << "\n";
    continue;
  }
  for(int i = 0; i+1 < k; i++) 
  {
    if(s[i] == '0' && s[i+1] == '1')
    {
      vector<int> a;
      while(i+1 < k && s[i+1] == '1' )
      {
        a.pb(v[i]);
        i++;
      }
      if(s[i] == '1') a.pb(v[i]);
      sort(all(a));
      n += accumulate(all(a),0ll);
      if(a.size() > 1) n -= a[0];
    }
    else if(s[i] == '1')
      n+= v[i];
  }
    cout << n << "\n";
  
}

return 0;
}
