// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1772/D
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
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  if(is_sorted(all(v))){
    cout << 0 << endl;
    return;
  }
  if(is_sorted(v.rbegin(),v.rend())){
    cout << *max_element(all(v)) << endl;
    return;
  }
  int ans = 0;
  for(int i = 0; i < n-1; i++) 
  {
    v[i+1] = abs(ans-v[i+1]);
    if(v[i] > v[i+1]){
      if((v[i]-v[i+1])%2 == 0){
        int x = (v[i]-v[i+1])/2;
        ans += v[i]-x;
        v[i] = x;
        v[i+1] = x;
      }
      else{
        cout << -1 << endl;
        return;
      }
    }
    else{
      if(ans >= v[i+1]){
        v[i] = abs(v[i]-ans);
        v[i+1] = abs(v[i+1]-ans);
      }
      else{
        cout << -1 << endl;
        return;
      }
    }
  }
  // for(auto &Z: v)
  // {
  //   cout << Z << " ";
  // }
  // cout << "\n";
  
  cout << ans <<endl;
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
