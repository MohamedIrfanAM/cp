// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1706/B
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
  map<int,vector<int>> m;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    m[x].pb(i+1);
  }
  for(int i =1; i <= n; i++)
  {
    int count = 1;
    auto v = m[i];
    if(v.size() == 0)
    {
      cout << "0 ";
      continue;
    }
    int l = v[0];
    for(int j = 1; j < v.size(); j++) 
    {
      if((v[j]-l)%2)
      {
        count++;
        l=v[j];
      }
    }
    cout << count << " ";
  }
  cout << endl;
   
}

return 0;
}
