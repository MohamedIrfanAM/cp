// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1695/B
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
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  if(n&1)
  {
    cout << "Mike\n";
  }
  else
  {
    vector<pair<int,int>> a;
    vector<pair<int,int>> b;
    for(int i = 0; i < n; i++) 
    {
      if(i&1)a.pb({v[i],i});
      else b.pb({v[i],i});
    }
    int m = min_element(all(b))->first;
    int j = min_element(all(a))->first;
    if(m==j)
    {
      if(min_element(all(b))->second < min_element(all(a))->second)
      {
        cout << "Joe\n";
      }
      else
      {
        cout << "Mike\n";
      }
    }
    else if(m < j)
    {
      cout << "Joe\n";
    }
    else
      cout << "Mike\n";
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
