// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1635/
#include<bits/stdc++.h>
#include <stdio.h>

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

vector<int> dp(1e6+10,-2);
int count = 0;
int minCoins(vector<int> &v, int x){
  if(x < 0){
    return -1;
  }
  if(x == 0){
    return 0;
  }
  if(dp[x] != -2){
    return dp[x];
  }
  dp[x] = -1;
  for(int i = 0; i < v.size(); i++){
    int k = minCoins(v,x-v[i]);
    if(k != -1){
      if(dp[x] > -1){
        dp[x] = min(dp[x],k+1);
      }
      else{
        dp[x] = k+1;
      }
    }
  }
  return dp[x];
}

void solve() 
{
  int n,x;
  cin >> n >> x;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int ans = minCoins(v,x);
  cout << ans << endl; 
}

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst = 1;
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



