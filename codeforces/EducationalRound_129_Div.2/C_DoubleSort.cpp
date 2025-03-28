// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1681/C
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
  vector<int> a(n);
  vector<int> b(n);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  
  vector<vector<int>> ans;
  int count = 0;
  for(int i = n-1; i >= 0; i--){
    for(int j = 0; j < i; j++){
      if(a[j] > a[j+1]) {
        swap(a[j],a[j+1]);
        swap(b[j],b[j+1]);
        ans.pb({j,j+1});
      }
    }
  }

  bool no = false;
  for(int i = n-1; i >= 0; i--){
    for(int j = 0; j < i; j++){
      if(b[j] > b[j+1]) {
        if(a[j] < a[j+1])
        {
          no = true;
        }
        else{
          swap(a[j],a[j+1]);
          swap(b[j],b[j+1]);
          ans.pb({j,j+1});
        }
      }
    }
  }
  if(no){
    cout << -1 << endl;
  }
  else{
    cout << ans.size() << endl;
    for(auto &Z: ans)
    {
      cout << Z[0]+1 << " " << Z[1]+1 << endl;
    }
  }
  // for(auto &Z: a)
  // {
  //   cout << Z << " ";
  // }
  // cout << "\n";
  //
  // for(auto &Z: b)
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
