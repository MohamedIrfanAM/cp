// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1657/C
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
  int n;cin >> n;string s;
  cin >> s;
  int ans = 0;
  int p = 0;
  int l = 0;
  char st = s[0];
  bool r = true;
  int rem  = n;
  for(int i = 0; i < n; i++){
    if(s[i] == '(') {
      p++;
    }
    else{
      p--;
    }
    l++;
    if(p == 0 && r == true){
      // bug(i);
      ans++;
      l = 0;
      if(i < n-1) st = s[i+1];
      rem = n-i-1;
      r =true;
      continue;
    }
    else if( p < 0){
      r = false;
    }

    if(s[i] == st && l >= 2){
      // bug(i);
      p = 0;
      ans++;
      l = 0;
      if(i < n-1) st = s[i+1];
      r =true;
      rem = n-i-1;
    }
  }
  cout << ans << ' ' << rem << endl;
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