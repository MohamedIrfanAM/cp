// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1245/B
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


int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n;
  cin >> n;
  int a,b,c;
  cin >> a >> b >> c;
  string s;
  cin >> s;
  int count = 0;
  string ans = "";
  for(int i = 0; i< n; i++){
    if(s[i] == 'R'){
      if(b > 0){
        b--;
        ans.pb('P');
        count++;
      }
      else{
        ans.pb('X');
      }
    }
    else if(s[i] == 'P'){
      if(c > 0){
        c--;
        ans.pb('S');
        count++;
      }
      else{
        ans.pb('X');
      }
    }
    else if(s[i] == 'S'){
      if(a > 0){
        a--;
        ans.pb('R');
        count++;
      }
      else{
        ans.pb('X');
      }
    }
  }
  for(int i = 0; i < n; i++) 
  {
    if(ans[i] == 'X'){
      if(a > 0){
        ans[i] = 'R';
        a--;
      }
      else if(b > 0){
        ans[i] = 'P';
        b--;
      }
      else if(c > 0){
        ans[i] = 'S';
        c--;
      }
    }
  }
  if(count >= ceil(n/2.0)){
    cout << "YES\n";
    cout << ans << endl;
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
