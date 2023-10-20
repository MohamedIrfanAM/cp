// time-limit: 3000
// problem-url: https://codeforces.com/problemset/problem/1510/K
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
  vector<int> v(2*n);
  for(int i = 0; i < 2*n; i++) 
  {
    cin >> v[i];
  }
  bool found = false;
  int a = 0,b = 0;
  if(is_sorted(all(v))){
    cout << 0 << endl;
    return;
  }
  auto d = v;
  for(int i = 0; i < n; i++) 
  {
    a++;
    for(int j = 0; j < 2*n; j+=2) 
    {
      swap(d[j],d[j+1]);
    } 
    if(is_sorted(all(d))){
      found = true;
      break;
    }
    a++;
    for(int j = 0; j < n; j++) 
    {
      swap(d[j],d[j+n]);
    }
    if(is_sorted(all(d))){
      found = true;
      break;
    }
  }
  d = v;
  for(int i = 0; i < n; i++) 
  {
    b++;
    for(int j = 0; j < n; j++) 
    {
      swap(d[j],d[j+n]);
    }
    if(is_sorted(all(d))){
      found = true;
      break;
    }
    b++;
    for(int j = 0; j < 2*n; j+=2) 
    {
      swap(d[j],d[j+1]);
    } 
    if(is_sorted(all(d))){
      found = true;
      break;
    }
  }
  if(found){
    cout << min(a,b) << endl;
  }
  else{
    cout << -1 << endl;
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
