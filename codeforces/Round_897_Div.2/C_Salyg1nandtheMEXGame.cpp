// time-limit: 3000
// problem-url: https://codeforces.com/contest/1867/problem/C
#include<bits/stdc++.h>

using namespace std;

#define int           long long int
#define double        long double
#define pb            push_back
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
// ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n;
  cin >> n;
  set<int> s;
  for(int i = 0; i < n; i++) 
  {
    int x;
    cin >> x;
    s.insert(x);
  }

  if(*(s.begin()) != 0){
    cout << 0 << endl;
    int x;
    cin >> x;
    continue;
  } 

  for(int i = 0; i < (2*n)+1; i++) 
  {
    if(i == (2*n))
    {
      int j = 0;
      int m = 0;
      for(auto a: s)
      {
        if(a != j++){
          m = j; 
          break;
        }
      }
      cout << m << endl;
      break;
    }
    int k = *(s.rbegin());
    s.insert(++k);
    cout << k << endl;
    int x;
    cin >> x;
    if(x == -1) break;
    else if(x == -2) cout << "WRONG ANSWER" << endl;
    else if(x == 0) {
      cout << 0 << endl;
      cin >> x;
      break;
    }
    s.erase(x);
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
