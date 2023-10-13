// time-limit: 2000
// problem-url: https://codeforces.com/contest/1881/problem/B
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
  int a,b,c;
  cin >> a >> b >> c;
  int m = min(a,min(b,c));
  vector<int> v;
  v.pb(a);
  v.pb(b);
  v.pb(c);
  int count = 0;
  bool found = true;
  while(count < 3){
   for(int i = 0; i < v.size(); i++){
     if(v[i] > m){
       v.pb(m);
       v[i] -= m;
       m = min(m,v[i]);
       count++;
       if(count == 3) break;
     }
   }  
    bool f = true;
    for(int i = 1; i < v.size(); i++){
      if(v[i] != v[0]){
        f = false;
      }
    }
    if(f) break;
  }

  for(int i = 1; i < v.size(); i++){
    if(v[i] != v[0]){
      found = false;
    }
  }
  if(found){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
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
