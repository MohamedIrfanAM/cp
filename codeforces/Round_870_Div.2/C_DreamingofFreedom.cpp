// time-limit: 2500
// problem-url: https://codeforces.com/problemset/problem/1826/C
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

int N = 10e6+320;
vector<int> v(N);
void solve() 
{
  int n,m;
  cin >> n >> m;
  if( m == 1 || n == 1 ){
    cout << "YES\n";
    return;
  }
  if(v[n] <= m){
    cout << "NO\n";
  }
  else{
    cout << "YES\n";
  }
}

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst = 1;
cin >> tst;
for(int i = 2; i <= N; i++){
  if(v[i] != 0){
    continue;
  }
  for(int j = i; j <= N; j+=i){
    if(v[j] == 0)
      v[j] = i;
  }
}
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
