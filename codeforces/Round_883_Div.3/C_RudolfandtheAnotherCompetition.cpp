// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1846/C
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
  int n,m,h;
  cin >> n >> m >> h;
  vector<vector<int>> v(n);
  vector<vector<int>> k(n);
  int a,b;
  int ans = 1;
  for(int i = 0; i < n; i++) 
  {
    for(int j = 0; j < m; j++) 
    {
      int x;
      cin >> x;
      v[i].pb(x);
    }
    sort(all(v[i]));
    int s = 0;
    int c = 0;
    int l = 0;
    for(int j = 0; j < m; j++) 
    {
      if(s + v[i][j] <= h){
        s += v[i][j];;
        l += s;
        c++;
      }
    }
    k[i].pb(c);
    k[i].pb(l);
    if( i == 0){
      a = c;
      b = l;
    }
    else{
      if(c > a){
        ans++;
      }
      else if(c == a){
        if(l < b){
          ans++;
        }
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
