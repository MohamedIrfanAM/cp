// time-limit: 2000
// problem-url: https://codeforces.com/contest/1883/problem/B
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
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  map<char,int> m;
  for(int i = 0; i < s.size(); i++) 
  {
    m[s[i]]++; 
  }
  int x = 0;
  int y = 0;
  int z = 0;
  for(auto p :m){
    if(p.second%2){
      x++;
    }
    else{
      y++;
    }
    z += p.second/2;
  }
  int l = x ? x-1: 0;
  // cout << x << " " << y << " " << l << " " << z*2 << endl;
  if(x){
    if(k&1){
      k--;
      x--;
    }
    int o;
    if(x&1){
      o = min(x-1,k);
    }
    else
    {
      o = min(x,k);
    }
    x -= o;
    k -= o;
    if(x > 1){
      cout << "NO\n";
      return;
    }
  }
  if(z*2 >= k){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
}

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst = 1;
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
