// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1650/C
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
  int n,m;
  cin >> n >> m;
  vector<int> v(m);
  vector<vector<int>> k(m);
  for(int i = 0; i < m; i++) 
  {
    int x,w;
    cin >> x >> w;
    v[i] = w;
    k[i] = {x,w,i+1};
  }
  sort(all(v));
  sort(all(k));
  int l = 0;
  int r = m-1;
  reverse(all(v));
  multiset<int> s;
  int cmax = m-(2*n);
  for(int i = 0; i < cmax; i++) 
  {
    s.insert(v[i]);
  }
  vector<pair<int,int>> ans;
  int weight = 0;
  while(l < r){
    auto leftit= s.find(k[l][1]);
    auto rightit= s.find(k[r][1]);
    if(rightit != s.end()){
      r--;
      s.erase(rightit);
      continue;
    } 
    if(leftit != s.end()){
      l++;
      s.erase(leftit);
      continue;
    }
    weight += k[l][1]+ k[r][1];
    ans.pb({k[l][2],k[r][2]});
    l++;
    r--;
  }
  cout << weight << endl;
  for(int i = 0; i < ans.size(); i++) 
  {
    cout << ans[i].first << " " << ans[i].second << endl;
  }
  cout << endl;
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
