// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1669/G
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

int n;
cin >> n;
vector<int> v(n);

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n,m;
  cin >> n >> m;
  vector<string> v(n+1);
  for(int i = 0; i < n; i++) 
  {
    cin >> v[i];
  }
  for(int i = 0; i < m; i++) 
  {
    v[n].pb('o');
  }

  vector<vector<int>> h(n+1,vector<int> (m,0));
  for(int i = 0; i < m; i++) 
  {
    int count = 0;
    for(int j = 0; j <= n; j++){
      if(v[j][i] == '*'){
        count++;
      }
      else if(v[j][i] == 'o'){
        // bug(j,i);
        h[j][i] = count;
        count = 0;
      }
    }
  }

  for(int i = 0; i < m; i++)
  {
    int count = 0;
    for(int j = n; j >= 0; j--)
    {
      // bug(count,j);
      if(h[j][i] > 0 && v[j][i] == 'o' && count == 0){
        count = h[j][i];
        continue;
      }
      if(count > 0){
        v[j][i] = '*';
        count--;
      }
      else if(v[j][i] == '*'){
        v[j][i] = '.';
      }
    }
  }

  for(int i = 0; i < n; i++) 
  {
    cout << v[i] << endl;
  }
  cout << endl;
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
