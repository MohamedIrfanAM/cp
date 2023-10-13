// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1679/B
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

int tst = 1;
while(tst--)
{
  int n,q;
  cin >> n >> q;
  vector<int> v(n);
  int sum = 0;
  int g = -1;
  int gv = 0;
  vector<int> h(n,0);

  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    sum += v[i];
  }

  for(int i = 0; i < q; i++) 
  {
    int c;cin >> c;
    if( c == 1){
      int j,x;
      cin >> j >> x;
      sum += x;
      if(h[j-1] > g){
        sum -= v[j-1];
      }
      else{
        sum -= gv;
      }
      v[j-1] = x;
      h[j-1] = i;
      cout << sum << endl;
    }
    else{
      int x;
      cin >> x;
      g = i;
      gv = x;
      sum = n*x;
      cout << sum << endl;
    }
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
