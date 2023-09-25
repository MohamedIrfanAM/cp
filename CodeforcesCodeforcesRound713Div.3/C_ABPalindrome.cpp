// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1512/C
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
  int a ,b;
  cin >> a >> b;
  string s;
  cin >> s;
  int one = 0;
  int zero = 0;
  bool no = false;
  int n = s.size();
  if(n%2 && s[n/2] == '?')
  {
    if(a%2) s[n/2] = '0';
    else s[n/2] = '1';
  }
  for(int i = 0; i < n;i++)
  {
    int j = n-i-1;
    if(i != j)
    {
      if(s[i] == '?' && s[j] == '1' || s[i] == '1' && s[j] == '?')
      {
        s[i] = '1';
        s[j] = '1';
      }
      else if(s[i] == '?' && s[j] == '0' || s[i] == '0' && s[j] == '?')
      {
        s[i] = '0';
        s[j] = '0';
      }
    }
  }
  for(int i = 0; i < n; i++) 
  {
    if(s[i] == '1')one++;
    else if(s[i] == '0')zero++;
  }
  for(int i = 0; i < n; i++) 
  {
    int j = n-i-1;
    if(s[i] == '?' && s[j] == '?')
    {
      if(one < b)
      {
        s[i] = '1';
        s[j] = '1';
        one+=2;
      }
      else if(zero < a)
      {
        s[i] = '0';
        s[j] = '0';
        zero += 2;
      }
    }
  }

  string k = s;
  reverse(all(k));
  if(k == s&& one == b && zero == a)
  {
    cout << s << endl;
  }
  else
    cout << -1 << endl;
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
