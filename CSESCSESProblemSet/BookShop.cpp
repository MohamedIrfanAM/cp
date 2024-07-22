// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1158
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


int maxPages(vector<int> &h, vector<int> &s, int** dp, int w, int n){
  if(w == 0 || n == -1){
    return 0;
  }
  if(dp[n][w] != -1){
    return dp[n][w];
  }
  if(h[n] > w){
    dp[n][w] = maxPages(h,s,dp,w,n-1);
    return dp[n][w];
  }
  dp[n][w] = max((s[n]+maxPages(h,s,dp,w-h[n],n-1)),maxPages(h,s,dp,w,n-1));
  return dp[n][w];
}

void solve() 
{
  int n,x;
  cin >> n >> x;
  vector<int> h(n);
  vector<int> s(n);
  // vector<vector<int>> dp(n+5, vector<int>(x+5,-1));
  int ** dp;
  dp = new int*[n+1];
  for(int i = 0; i <= n; i++){
    dp[i] = new int[x+1];
    for(int j = 0; j <= x; j++) 
    {
      dp[i][j] = -1;
    }
  }
  for(int i = 0; i < n; i++)
  {
    cin >> h[i];
  }
  for(int i = 0; i < n; i++)
  {
    cin >> s[i];
  }
  int ans =  maxPages(h,s,dp,x,n-1);
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
