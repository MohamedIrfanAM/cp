// time-limit: 4000
// problem-url: https://www.hackerrank.com/contests/minixtreme-1696598936/challenges/sherlock-and-the-grid
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

  int n,m,k;
  cin >> n >> m  >> k;
  vector<int> v;
  multiset<int> s;
  int l = 1;
  
  // for(int i = 1; i <= n; i++)
  // {
  //   for(int j = 1; j <= m; j++)
  //   {
  //     cout << i*j << " ";
  //   }
  //   cout << endl;
  // }
  for(int i = 1; i <= n; i++)
  {
    for(int j = i; j <= m; j++)
    {
      if(l == k){
        cout << i*j  << endl;
        exit(0);
      }
      l++;
      if(j <= n && i <=  m && i != j){
        // cout << i*j << endl;
        if(l == k){
          cout << i*j  << endl;
          exit(0);
        }
        l++;
      }
    }
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
