// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1728/C
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
  map<int,int> m;
  map<int,int> m2;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    m[v[i]]++;
  }
  vector<int> a;
  for(int i = 0; i < n; i++) 
  {
    int x;
    cin >> x;
    if(m[x]-- <= 0){
      a.pb(x);
    }
    m2[x]++;
  }
  vector<int> b;
  for(int i = 0; i < n; i++) 
  {
    if(m2[v[i]]-- <= 0){
      b.pb(v[i]); 
    }
  }
  vector<pair<int,int>> c(11);
  for(auto &Z: a)
  {
    if(Z <= 10){
      c[Z].fi++;
    }
    if(Z == 1){
      continue;
    }
    int count = 0;
    while(Z){
      count++;
      Z /= 10;
    }
    c[count].se++;
  }
 
  int ans = 0;
  for(int i = 0; i < b.size(); i++){
    int k = b[i];
    if(k <= 10){
      if(c[k].se){
        c[k].se--;
        b[i] = -1;
        ans++;
      }
      else if(k == 10){
        if(c[2].fi){
          c[2].fi--;
          b[i] = -1;
          ans++;
        } 
      }
      else if(k != 1){
        if(c[1].se){
          c[1].se--;
          b[i] = -1;
          ans++;
        } 
      }
    }
    else{
      int count = 0;
      while(k){
        count++;
        k/=10;
      }
      if(c[k].fi){
        c[k].fi--;
        b[i] = -1;
        ans++;
      }
    }
  }
  vector<int> c1(11);
  for(int i = 0; i < b.size(); i++) 
  {
    if(b[i] > 1){
      if(b[i] < 10){
        ans++;
      }
      else{
        int count = 0;
        while(b[i]){
          count++;
          b[i]/=10;
        }
        c1[count]++;
      }
    }
  }
  for(int i = 1; i < 11; i++) 
  {
    // cout << i << " " << c[i].fi << " " << c[i].se << endl;
    if(c[i].se){
      if(i == 1){
        ans += c[i].se;
      }
      else{
        int x = min(c[i].se,c1[i]);
        ans += x*2;
        c[i].se -= x;
        c1[i] -= x; 
        if(c[i].se){
          ans += c[i].se*2;
        }
      }
    }
  }
  for(int i = 2; i < 11; i++) 
  {
    // cout << i << " " << c1[i] << endl;
    if(c1[i] > 0){
      ans += c1[i]*2; 
    } 
  }
  // for(auto &Z: b)
  // {
  //   cout << Z << " ";
  // }
  // cout << "\n";
  // cout << endl; 
  cout << ans << endl;
  

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
