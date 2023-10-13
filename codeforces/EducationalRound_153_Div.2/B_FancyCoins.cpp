// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1860/B
#include<bits/stdc++.h>

using namespace std;

#define int           long long int
#define double        long double
#define pb            push_back
#define endl          "\n"
#define all(p)        p.begin(), p.end()
const int mod=1e9+7;

#ifdef IRFAN_DEBUG
string to_string(char c) { return string({c}); }
// 7
template<class... Ts>
ostream& operator<<(ostream& o, tuple<Ts...> t) {
  string s = "(";
  apply([&](auto&&... r) {
    ((s += to_string(r) + ", "), ...); }, t);
  return o << s.substr(0, len(s) - 2) + ")";
}
// 3
ostream& operator<<(ostream &o, pair<auto, auto> p) {
  return o << "(" << p.fi << ", " << p.se << ")";
}
// 7
template<class C, class T = typename C::value_type,
typename std::enable_if<!std::is_same<C, std::string>
::value>::type* = nullptr>
ostream& operator<<(ostream &o, C c) {
  for (auto e : c) o << setw(7) << right << e;
  return o << endc << endl << coutc;
}
// 7
void debug(const auto &e, const auto &... r) {
  cout << coutc << e;
  ((cout << " " << r), ..., (cout << endc << endl));
}
#else
#define debug(...)
#endif

int32_t main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n,k,x,y;
  cin >> n >> k >> x >> y;

  n -= min(y,n/k)*k;
  int l = min(n%k,x);
  n -= l;
  x -= l;
  int c = 0;
  if(n != 0){
    if(x == 0){
      c += n%k;
      n -= n%k;
    }
    n -= min(n,(x/k)*k);
    c += n/k; 
    debug(c);
  }
  // cout << c << endl;
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
