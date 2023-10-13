// time-limit: 1000
// problem-url: https://codeforces.com/contest/1877/problem/B
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
  int n,p;
  cin >> n >> p;
  vector<pair<int,int>> v(n);
  for(int i = 0; i < n; i++) 
  {
    cin >> v[i].second;
  }
  for(int i = 0; i < n; i++) 
  {
    cin >> v[i].first;
  }

  sort(all(v));
  int ans = p;
  int c = 0;
  for(int i = 0; i < n;i++)
  {
    if(i <= c)
    {
      if( v[i].first < p ){
        int k = min(n-1-c,v[i].second);
        c += k;
        ans += v[i].first*k;
      }
    }
    else if(i == c+1){
      ans += p;
      c++;
      if(v[i].first < p){
        c += min(n-1-c,v[i].second);
        ans += v[i].first*min(n-1-c,v[i].second);
      }
    }
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
