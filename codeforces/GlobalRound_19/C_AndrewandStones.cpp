// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1637/C
#include<bits/stdc++.h>

using namespace std;

#define int           long long int
#define double        long double
#define pb            push_back
#define endl          "\n"
#define all(p)        p.begin(), p.end()
#define fi            first
#define se            second
const int mod=1e9+7;

#ifdef IRFAN_DEBUG
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) {cout << name << " : " << arg1 << endl;}
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr (names + 1, ',');
  cout.write (names, comma - names) << " : " << arg1 << " | " ; __f (comma + 1, args...);
}
#else
#define bug(...)
#endif


void solve() 
{
  int n;
  cin >> n;
  vector<int> v;
  vector<int> o;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if(i > 0 && i < n-1){
      if(x&1){
        o.pb(x);
      }
      else{
        v.pb(x);
      }
    }
  }
  int x = v.size();
  sort(all(o));
  reverse(all(o));
  for(auto &Z: o)
  {
    v.pb(Z);
  }
  int ans = 0;
  for(int i = 0; i < n-2; i++) 
  {
    if(v[i]&1){
      if(i < n-3 && v[i+1]&1 && (v[i] > 1 || v[i+1] > 1)){
        v[i]--;
        v[i+1]--;
        x = i+2;
        ans += 2;
      }
      else{
        cout << -1 << endl;
        return;
      }
    }
    while(v[i] > 1 && x < n-2){
      v[i] -= 2;
      ans++;
      v[x] += 1;
      x++;
      if(x < n-2){
        v[x] += 1;
        x++;
      }
    }
    ans += v[i]/2;
  }
  cout << ans << endl; 
  

}

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  solve();
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
