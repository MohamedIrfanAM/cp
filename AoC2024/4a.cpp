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
  string line;
  vector<string> v;

  while (getline(cin, line))
  {
    if (line.empty())
      break;
    v.push_back(line);
  }

  int m = v.size();
  int n = v[0].size();
  int ans = 0;
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v[0].size(); j++)
    {
      if (v[i][j] != 'M')
        continue;

      if (j + 3 < n && v[i].substr(j, 4) == "XMAS")
      {
        ans++;
      }

      if (j - 3 >= 0 && v[i].substr(j - 3, 4) == "SAMX")
      {
        ans++;
      }

      if (i + 3 < m && v[i + 1][j] == 'M' && v[i + 2][j] == 'A' && v[i + 3][j] == 'S')
      {
        ans++;
      }

      if (i - 3 >= 0 && v[i - 1][j] == 'M' && v[i - 2][j] == 'A' && v[i - 3][j] == 'S')
      {
        ans++;
      }

      if (i + 3 < m && j + 3 < n && v[i + 1][j + 1] == 'M' && v[i + 2][j + 2] == 'A' && v[i + 3][j + 3] == 'S')
      {
        ans++;
      }

      if (i - 3 >= 0 && j + 3 < n && v[i - 1][j + 1] == 'M' && v[i - 2][j + 2] == 'A' && v[i - 3][j + 3] == 'S')
      {
        ans++;
      }

      if (i - 3 >= 0 && j - 3 >= 0 && v[i - 1][j - 1] == 'M' && v[i - 2][j - 2] == 'A' && v[i - 3][j - 3] == 'S')
      {
        ans++;
      }

      if (i + 3 < m && j - 3 >= 0 && v[i + 1][j - 1] == 'M' && v[i + 2][j - 2] == 'A' && v[i + 3][j - 3] == 'S')
      {
        ans++;
      }
    }
  }
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
