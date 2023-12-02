// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1294/C
#include<bits/stdc++.h>
#include <cmath>

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
  map<int,int> m;
  int k = n;
  for(int i = 2; i <= sqrt(2*n); i++){
    while(n%i == 0){
      m[i]++;
      n /= i;
    }
  }
  vector<int> v;
  for(auto &p : m){
    v.pb(p.fi);
    if(p.se >= 3){
      v.pb(p.fi*p.fi);
    }
  } 
  if(v.size() < 2){
    cout << "NO\n";
  }
  else if(k%(v[0]*v[1]) == 0 && k/(v[0]*v[1]) != v[0] && k/(v[0]*v[1]) != v[1] && k/(v[0]*v[1]) > 1){
    cout << "YES\n";
    cout << v[0] << " " << v[1] << " " <<  k/(v[0]*v[1]) << endl;
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
