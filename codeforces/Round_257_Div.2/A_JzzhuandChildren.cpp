// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/450/A
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

int tst = 1;
while(tst--)
{
  int n,m;
  cin >> n >> m;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int M = *max_element(all(v));
  int x = ceil((M*1.0)/m);
  int ans = 0;
  for(int i = 0; i < n; i++) 
  {
    if(ceil((1.0*v[i])/m) == x)
      ans = i+1;
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
