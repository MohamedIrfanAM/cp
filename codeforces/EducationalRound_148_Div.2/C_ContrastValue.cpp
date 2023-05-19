// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1832/C
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
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) 
  {
    cin >> v[i];
  }
  if(n == 1)
  {
    cout << "1\n";
    continue;
  }
  else if(n == 2)
  {
    cout << (v[0] == v[1] ? 1 : 2) <<"\n";
    continue;
  }

  int l = 0,count=0;
  vector<int> v1;
  v1.push_back(v[0]);
  for(int i = 1; i < n; i++)
  {
    if(v[i] != v[i-1])
      v1.push_back(v[i]);
  }
  for(int i = 1; i+1 < v1.size(); i++)
  {
    if(abs(v1[i]-v1[l])+abs(v1[i]-v1[i+1]) == abs(v1[l]-v1[i+1]))
    {
      count++;
    }
    else
      l = i;
  }
  cout << v1.size()-count << "\n";
}

return 0;
}
