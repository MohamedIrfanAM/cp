// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1733/C
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
void __f (const char* name, Arg1&& arg1) {cout << name << " : " << arg1 << endl;}
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr (names + 1, ',');
  cout.write (names, comma - names) << " : " << arg1 << " | " ; __f (comma + 1, args...);
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
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> o;
  vector<int> e;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(v[i]&1)o.pb(i+1);
    else e.pb(i+1);
  }
  cout << n-1 << endl;
  if(v[0]&1){
    for(int i = 0; i+1 < o.size(); i++)
    {
      cout << o[i] << " "  << o.back() << endl;
    }
    for(int i = 0; i < e.size(); i++) 
    {
      cout << 1 << " " << e[i] << endl;
    }
  }
  else{
    for(int i = 0; i+1 < e.size(); i++)
    {
      cout << e[i] << " "  << e.back() << endl;
    }
    for(int i = 0; i < o.size(); i++) 
    {
      cout << 1 << " " << o[i] << endl;
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
