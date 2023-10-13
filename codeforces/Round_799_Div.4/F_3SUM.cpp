// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1692/F
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
  int n;
  cin >> n;
  vector<int> v(n);
  map<int,int> m;
  vector<int> k;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    int x = v[i]%10;
    if(m[x] < 3){
      k.pb(x);
    }
  }

  bool found = false;
  for(int i = 0; i < k.size(); i++)
  {
    for(int j = 0; j < k.size(); j++)
    {
      for(int l = 0; l < k.size(); l++){
        if(i != j && i != l && j != l){
          int y = k[i]+k[j]+k[l];
          if(y%10 == 3) {
            found = true;
            break;
          }
        }
      } 
    }
  }
  if(found){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
  // for(auto &Z: k)
  // {
  //   cout << Z << " ";
  // }
  // cout << "\n";
  
 
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
