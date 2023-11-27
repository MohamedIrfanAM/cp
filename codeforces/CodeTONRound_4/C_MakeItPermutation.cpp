// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1810/C
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
  int n,c,d;
  cin >> n >> c >> d;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int ans = 0;
  if(*min_element(all(v)) != 1){
    ans += d;
    v.pb(1);
    n++;
  }
  
  vector<int> k;
  sort(all(v));
  int l = 2;
  int m = 1;
  k.pb(ans + (n-1)*c);
  for(int i = 1; i < v.size(); i++) 
  {
    if(l != v[i]){
      if(m == v[i]){
        ans += c;
        continue;
      } 
      ans += d;
      l++;
      k.pb(ans + c*(n-i));
      ans += (v[i]-l)*d;
      m = v[i];
      l = v[i]+1;
    }
    else{
      m = l;
      l++;
    }
    k.pb(ans + c*(n-i-1));
  }
  cout << *min_element(all(k)) << endl;
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
