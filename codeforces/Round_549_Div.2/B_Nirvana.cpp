// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1143/B
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

int tst = 1;
while(tst--)
{
  int n;
  cin >> n;
  int c = 0,p = 1;
  int d = n;
  vector<int> v;
  while(d > 0){
    c++;
    p *= d%10;
    v.pb(d%10);
    d /= 10;
  }
  reverse(all(v));
  int p1 = 1;
  for(int i = 0; i < v.size(); i++) 
  {
    int r = v.size()-i-1;
    if(v[i] > 0){
      int p2 = pow(9,r)*p1;
      if(i == 0) p2 *= max(1ll,v[i]-1);
      else p2*= v[i]-1;
      p = max(p,p2);
    }
    p1 *= v[i];
    // bug(p,p1,v[i]);
    // cout << v[i];
  }
  
  // cout << endl;
  cout << p << endl;
  // bug(c,p);
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
