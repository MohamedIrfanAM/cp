// time-limit: 1000
// problem-url: https://codeforces.com/contest/1780/problem/0
#include<bits/stdc++.h>

using namespace std;

#define int            long long int
#define double         long double
#define pb             push_back
#define endl           "\n"
#define mod            1e9+7
#define all(p)         p.begin(), p.end()

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
  int e = 0;
  int o = 0;
  for(int i = 0; i < n; i++) 
  {
    cin >> v[i];
    if(v[i]%2 == 0)
    {
      e++;
    }
    else
    {
      o++;
    }
  }
  
  if(o>= 3)
  {
    cout << "YES\n";
    int count = 3;
    for(int i = 0; i < n; i++)
    {
      if(v[i]%2 == 1)
      {
        cout << i+1 << " ";
        count--;
        if(count == 0)
        {
          cout << "\n";
          break;
        }
      }
    }
  }
  else if (e >= 2 &&  o >= 1)
  {
    cout << "YES\n";
    int e_count = 2;
    int o_count = 1;

    for(int i = 0; i < n; i++)
    {
      if(v[i]%2 == 1 && o_count > 0)
      {
        cout << i+1 << " ";
        o_count--;
      }
      else if(v[i]%2 == 0 && e_count > 0)
      {
        cout << i+1 << " "; 
        e_count--;
      }
      if(e_count == 0 && o_count == 0)
      {
        cout << "\n";
        break;
      }
    }
  }
  else
  {
    cout << "NO\n";
  }


  
}

return 0;
}
