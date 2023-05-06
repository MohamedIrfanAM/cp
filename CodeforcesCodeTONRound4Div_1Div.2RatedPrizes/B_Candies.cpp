// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1810/B
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

  int count = 0;
  if(n%2 == 0)
  {
    cout << "-1\n";
    continue;
  }

  vector<int> steps;

  while(n > 1 && count < 40)
  {
    if(((n-1)/2)%2 == 0)
    {
      n = (n+1)/2;
      steps.push_back(1);
    }
    else
    {
      n = (n-1)/2;
      steps.push_back(2);
    }
    count++;
  }

  if(n == 1 && count <= 40)
  {
    cout << count << "\n";
  }
  else
  {
    cout << "-1\n";
    continue;
  }

  for(int i = steps.size()-1; i >= 0; i--)
  {
    cout << steps[i] << " ";
  }
  cout << "\n";
}

return 0;
}
