// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1698/C
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
  int n;
  cin >> n;
  vector<int> v;
  int a = 0,b = 0, c = 0;
  int x;
  for(int i = 0; i < n; i++)
  {
    cin >> x;
    if(x < 0){
      a++;
      v.pb(x);
    }
    else if(x > 0){
      b++;
      v.pb(x);
    }
    else if(c <= 3){
      v.pb(x);
      c++;
    }
  }
  if(b > 2 || a > 2){
    cout << "NO\n";
    return;
  }
  
  sort(all(v));
  n = v.size();
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == j) continue;
      for(int k = 0; k < n; k++){
        if(k == i || k == j)continue;
        int m = v[i]+v[j]+v[k];
        bool found = false;
        for(int l = 0; l < n; l++){
          if(v[l] == m){
            found = true;
            break;
          }
        }
        if(!found){
          cout << "NO\n";
          return;
        }
      }
    }
  }
  cout << "YES\n";
  
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
