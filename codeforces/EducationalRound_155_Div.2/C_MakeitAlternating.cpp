// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1879/C
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
void __f (const char* name, Arg1&& arg1) {cout << "\033[48;5;196m\033[38;5;15m" << name << " : " << arg1 << "\033[0m"<< endl;}
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr (names + 1, ',');
  cout << "\033[48;5;196m\033[38;5;15m";cout.write (names, comma - names) << " : " << arg1 << " | " << "\033[0m"; __f (comma + 1, args...);
}
#else
#define bug(...)
#endif

vector<int> factorial(int n,int M = 10e9+7)
{
  vector<int> fact(n+1);
  fact[0] = fact[1] = 1;
  for(int i = 2 ; i <= n; i++)
  {
    fact[i] = (1LL*(i%M)*(fact[i-1]%M))%M;
  }
  return fact;
}

auto facto = factorial(20e5,998244353);
int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  string s;
  cin >> s;
  int count = 1;
  vector<int> v;
  int x = 1;
  for(int i = 1; i < s.size(); i++){
    if(s[i] == s[i-1]){
      count++;
      continue;
    }
    else{
      if(count > 1){
        v.pb(count);
      }
      count = 1;
      x++;
    }
  }
  if(count > 1){
    v.pb(count);
  }
  
  int ans = 1;
  int k = 0;

  for(auto &Z: v)
  {
    k += Z-1;
    ans *= Z; 
    ans %= 998244353;
  }
  ans *= facto[s.size()-x];
  ans %= 998244353;
  cout << k << " " << ans << endl; 
  
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
