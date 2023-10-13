// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1848/B
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
  int n,k;
  cin >> n >> k;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<vector<int>> h(k+1);
  for(int i = 0; i <= k; i++){
    h[i] = {-1,-2,-2};
  }

  for(int i = 0; i < n; i++){
    if(i-h[v[i]][0]-1 >= h[v[i]][1]){
      h[v[i]][2] = h[v[i]][1];
      h[v[i]][1] = i-h[v[i]][0]-1;
    }
    else if(i-h[v[i]][0]-1 >= h[v[i]][2]){
      h[v[i]][2] = i-h[v[i]][0]-1;
    }
    h[v[i]][0] = i;
  }

  for(int i = 0; i <= k; i++){
    if(n-h[i][0]-1 >= h[i][1]){
      h[i][2] = h[i][1];
      h[i][1] = n-h[i][0]-1;
    }
    else if(n-h[i][0]-1 >= h[i][2]){
      h[i][2] = n-h[i][0]-1;
    }
  }
  
  int ans = INT_MAX;
  for(int i = 0; i <= k; i++){
    int l =h[i][1]/2;
    int x = max(l,h[i][2]);
    ans = min(ans,x);
    // cout << i << " " << h[i][0] << " " << h[i][1] << " " << h[i][2] << endl;
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
