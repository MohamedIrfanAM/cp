// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1821/C
#include <algorithm>
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
  string s;
  cin >> s;
  if(count(all(s),s[0]) == s.length()){
    cout << 0 << endl;
    return;
  }
  int ans = 1;
  while(true){
    map<char,int> ec;
    map<char,int> oc;
    string e,o;
    int emax = -1;
    int omax = -1;
    for(int i = 0; i < s.length(); i++) 
    {
      if(i&1){
        o.pb(s[i]);
        oc[s[i]]++;
        omax = max(omax,oc[s[i]]);
      } 
      else{
        e.pb(s[i]);
        ec[s[i]]++;
        emax = max(emax,ec[s[i]]);
      }
    }
    if(emax == e.length() || omax == o.length()){
      cout << ans << endl;
      break;
      return;
    }
    ans++;
    if(emax >= omax){
      s = e;
    } 
    else{
      s = o;
    }
    if(s.length() == 0) break;
  }
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
