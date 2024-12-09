#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define endl "\n"
#define all(p) p.begin(), p.end()
#define fi first
#define se second
const int mod = 1e9 + 7;

#ifdef IRFAN_DEBUG
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
  const char *comma = strchr(names + 1, ',');
  cout.write(names, comma - names) << " : " << arg1 << " | ";
  __f(comma + 1, args...);
}
#else
#define bug(...)
#endif

void solve()
{
  string v;
  getline(cin, v);
  vector<int> s;
  vector<int> f;

  for (int i = 0; i < v.size(); i++)
  {
    if (i & 1)
    {
      f.pb((int)v[i] - '0');
    }
    else
    {
      s.pb((int)v[i] - '0');
    }
  }
  int ans = 0;
  int r = s.size() - 1;
  int l = 0;
  for (int i = 0; i < s.size(); i++)
  {
    for (int j = 0; j < s[i]; j++)
    {

      cout << i << " ";
      ans += l * i;
      l++;
      // s[i]--;
    }
    while (f[i] > 0 && i < r)
    {
      int m = min(f[i], s[r]);
      f[i] -= m;
      s[r] -= m;
      for (int j = 0; j < m; j++)
      {
        cout << "" << r << " ";
        ans += l * r;
        l++;
      }

      if (s[r] == 0)
      {
        r--;
      }
    }
  }
  cout << endl;
  cout << ans << endl;
}

int32_t main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int tst = 1;
  // cin >> tst;
  while (tst--)
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
