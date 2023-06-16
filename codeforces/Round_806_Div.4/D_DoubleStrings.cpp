// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1703/D
#include<bits/stdc++.h>

using namespace std;

#define int           long long int
#define double        long double
#define pb            push_back
#define endl          "\n"
#define all(p)        p.begin(), p.end()
const int mod=1e9+7;

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
  map<string,int> m;
  vector<string>v;
  for(int i = 0; i < n; i++) 
  {
    string x;
    cin >> x;
    v.pb(x);
    m[x]++;
  }
  for(int i = 0; i < n ;i++)
  {
    int x = v[i].size();
    bool found = false;
    for(int j = 0; j < x; j++) 
    {
      string y = v[i].substr(0,j+1);
      string b = v[i].substr(j+1);
      if(m[y] && m[b])
      {
        cout << 1;
        found = true;
        break;
      }
    }
    if(!found)cout << 0;
  }
  cout << endl;
}

return 0;
}
