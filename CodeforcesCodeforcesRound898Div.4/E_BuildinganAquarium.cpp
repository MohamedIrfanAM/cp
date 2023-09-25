// time-limit: 2000
// problem-url: https://codeforces.com/contest/1873/problem/E
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
  int n,x;
  cin >> n >> x;
  vector<int> v(n);
  int m = -1;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    m = max(m,v[i]);
  }
  sort(all(v));
  long long ans = 0;
  vector<long long> h(n);
  h[0] = v[0];
  for(int i = 1; i < n; i++) 
  {
    h[i] = h[i-1]+v[i];
  }
  long long l = 1;
  long long r = max(m,x)+(2*h[n-1]);
  while(l <= r){
    int k = (l+r)/2;
    // cout << "l =" << l << "; r =" << r << "k= " << k<< endl; 
    auto it = upper_bound(all(v),k);
    long long d = it-v.begin();
    long long cost = (d*k)-h[d-1];
    if(cost == x){
      ans = k;
      break;
    }
    else if(cost < x){
      ans = k;
      l = k+1;
    }
    else
      r = k-1;
  }
  cout << ans << endl;
}

return 0;
}
/*
     ______      __             ______                             
   _/      \_   |  \           /      \                            
  /   $$$$$$ \   \$$  ______  |  $$$$$$\ ______   _______          
 /  $$$____$$$\ |  \ /      \ | $$_  \$$|      \ |       \         
|  $$/     \ $$\| $$|  $$$$$$\| $$ \     \$$$$$$\| $$$$$$$\        
| $$|  $$$$$| $$| $$| $$   \$$| $$$$    /      $$| $$  | $$        
| $$| $$| $$| $$| $$| $$      | $$     |  $$$$$$$| $$  | $$        
| $$ \$$  $$| $$| $$| $$      | $$      \$$    $$| $$  | $$ ______ 
 \$$\ \$$$$$$$$  \$$ \$$       \$$       \$$$$$$$ \$$   \$$|      \
  \$$\ __/   \                                              \$$$$$$
   \$$$    $$$                                                     
     \$$$$$$ 
*/
