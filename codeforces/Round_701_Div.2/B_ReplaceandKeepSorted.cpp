// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1485/B
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
  int n,q,k;
  cin >> n >> q >> k;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<int> a(n+1);
  vector<int> b(n+1);
  for(int i = 0; i < n; i++) 
  {
    if(i < n-1){
      a[i] = v[i+1]-v[i]-1;
    }
    else{
      a[i] = k-v[i];
    }

    if(i == 0){
      b[i] = v[i] - 1;
    }
    else if(i > 0){
      b[i] = v[i]-v[i-1]-1;
    }
  }

  for(int i = 1; i < n; i++) 
  {
    a[i] = a[i]+a[i-1];
  }
  for(int i = n-2; i >= 0; i--){
    b[i] = b[i]+b[i+1];
  }
  for(int i = 0; i < q; i++) 
  {
    int l,r;
    cin >> l >> r;
    l--;r--;
    int x = 0;
    if(l != r){
      x += a[r-1];
      x -= l == 0 ? 0 : a[l-1];
      x += b[l+1];
      x -= r == n-1 ? 0 : b[r+1];
    }
    x += v[l]-1;
    x += k-v[r];
    cout << x << endl;
  } 
}

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst = 1;
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
