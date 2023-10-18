// time-limit: 2000
// problem-url: https://codeforces.com/contest/1768/problem/C
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
  int n;
  cin >> n;
  vector<int> v(n);
  map<int,int> ma;
  map<int,int> mb;
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<int> a(n); 
  vector<int> b(n); 
  vector<vector<int>> k;
  for(int i = 0; i < n; i++) 
  {
    if(ma[v[i]] == 0){
      k.pb({v[i],0,0,i});
      a[i] = v[i];
      ma[v[i]]++;
    }
    else if(mb[v[i]] == 0){
      b[i] = v[i];
      k.pb({v[i],0,1,i});
      mb[v[i]]++;
    }
    else{
      cout << "NO\n";
      return;
    }
  }
  sort(all(k));
  int ac = 1;
  int bc = 1;
  for(int i = 0; i < k.size(); i++) 
  {
    // cout << k[i][0] << ' ' << k[i][1] << " " << k[i][2]  << " " << k[i][3]<< endl;
    if(k[i][2] == 0){
      while(bc <= k[i][0]){
        if(mb[bc] == 0){
          break;
        }
        bc++;
      }      
      if(bc <= k[i][0] && mb[bc] != 1){
        k[i][1] = bc;   
        b[k[i][3]] = bc;
        mb[bc]++;
      }
      else{
        cout << "NO\n";
        return;
      }
    }
    else{
      while(ac <= k[i][0]){
        if(ma[ac] == 0){
          break;
        }
        ac++;
      }      
      if(ac <= k[i][0] && ma[ac] != 1){
        k[i][1] = ac;   
        a[k[i][3]] = ac;
        ma[ac]++;
      }
      else{
        cout << "NO\n";
        return;
      }
    }
  }

  cout << "YES\n";
  for(auto &Z: a)
  {
    cout << Z << " ";
  }
  cout << "\n";
  for(auto &Z: b)
  {
    cout << Z << " ";
  }
  cout << "\n";
  
}

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
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
