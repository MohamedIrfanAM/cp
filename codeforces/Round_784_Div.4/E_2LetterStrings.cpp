// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1669/E
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
  vector<vector<int>> a(11,vector<int>(11,0));
  vector<vector<int>> b(11,vector<int>(11,0));
  for(int i = 0; i < n; i++) 
  {
    string s;
    cin >> s;
    a[s[0]-'a'][s[1]-'a']++;
    b[s[1]-'a'][s[0]-'a']++;
  }

  int ans = 0;
  for(int i = 0; i < 11; i++) 
  {
    int sum = 0;
    for(int j = 0; j < 11; j++) 
    {
      sum += a[i][j];
    }
    for(int j = 0; j < 11; j++) 
    {
      ans += a[i][j]*(sum-a[i][j]);
    }
  }

  for(int i = 0; i < 11; i++) 
  {
    int sum = 0;
    for(int j = 0; j < 11; j++) 
    {
      sum += b[i][j];
    }
    for(int j = 0; j < 11; j++) 
    {
      ans += b[i][j]*(sum-b[i][j]);
    }
  }
  cout << ans/2 <<  endl;
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
