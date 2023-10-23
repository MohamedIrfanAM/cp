// time-limit: 2000
// problem-url: https://codeforces.com/contest/1883/problem/C
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


void solve() 
{
  int n,k;
  cin >> n >> k;
  vector<int> v(n);
  bool z = false;
  int e = 0;
  int o = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    if(v[i]%2 == 0){
      e++;
    }
    else o++;
    v[i] = v[i]%k;
    if(v[i] == 0) z = true;
  }
  if(z){
    cout << 0 << endl;
    return;
  }
  if(k == 4){
    if(e >= 2){
      cout << 0 << endl;
      return;
    }
    else if(e == 1 && o >= 1){
      cout << 1 <<endl;
      return;
    }
    else if(e == 0 && o >= 2){
      int m = *max_element(all(v));
      cout << min(2ll,k-m) << endl;
      return;
    }
  }
  int m = *max_element(all(v));
  cout << k-m << endl;
  
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
