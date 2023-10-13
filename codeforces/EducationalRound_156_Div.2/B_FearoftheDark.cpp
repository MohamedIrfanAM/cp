// time-limit: 2000
// problem-url: https://codeforces.com/contest/1886/problem/B
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
  double p1,p2,a1,a2,b1,b2;
  cin >> p1 >> p2;
  cin >> a1 >> a2;
  cin >> b1 >> b2;
  double ap = sqrt(pow(abs(p1-a1),2)+pow(p2-a2,2));
  double bp = sqrt(pow(abs(p1-b1),2)+pow(p2-b2,2));
  double ao = sqrt(pow(abs(0-a1),2)+pow(0-a2,2));
  double bo = sqrt(pow(abs(0-b1),2)+pow(0-b2,2));
  double ans;
  
  if(ap < bp){
      if(ao < bo){
        ans = max(ao,ap);
      }
      else{
        ans = max(sqrt(pow(a1-b1,2)+pow(a2-b2,2))/2.0,max(ap,bo));
      }
  }
  else{
      if(ao <= bo){
        ans = max(sqrt(pow(a1-b1,2)+pow(a2-b2,2))/2.0,max(ao,bp));
      } 
      else{
        ans = max(bo,bp);
      }
  }

  cout << setprecision(10) << ans << endl;
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
