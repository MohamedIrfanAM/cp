// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1760/E
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
  int one = 0;
  int zero = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(v[i])one++;
    else zero++;
  }
  int gain = 0;
  int k = -1;
  int l = 0;
  int x = 0;
  while( l < n && v[l] )
  {
    l++;
    x++;
  }
  if(x < (zero-1))
  {
    gain = zero-1-x;
    k = l;
  }

  l = n-1;
  x = 0;
  while( l >= 0 && v[l] != 1  )
  {
    x++;
    l--;
  }
  if(x < (one-1) && (one-1-x) > gain)
  {
    k = l;
  }
  if(k >= 0) v[k] = !v[k];

  int sum = 0;
  int ans = 0;
  for(int i = 0; i < n; i++) 
  {
    sum += v[i];
    if(!v[i])
    {
      ans += sum;
    }
  }
  cout << ans << "\n";


   
}

return 0;
}
