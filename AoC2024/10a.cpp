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

void dfs(int i, int j, int &ans, vector<vector<int>> &v, set<pair<int, int>> &s)
{

  auto inside = [&](int p, int q)
  {
    if (p >= 0 && q >= 0 && p < v.size() && q < v[0].size())
    {
      return true;
    }
    return false;
  };

  if (!inside(i, j))
    return;

  if (v[i][j] == 9 && s.find({i, j}) == s.end())
  {
    ans++;
    s.insert({i, j});
    return;
  }

  if (inside(i, j + 1) && v[i][j + 1] == v[i][j] + 1)
  {
    dfs(i, j + 1, ans, v, s);
  }

  if (inside(i, j - 1) && v[i][j - 1] == v[i][j] + 1)
  {
    dfs(i, j - 1, ans, v, s);
  }

  if (inside(i + 1, j) && v[i + 1][j] == v[i][j] + 1)
  {
    dfs(i + 1, j, ans, v, s);
  }

  if (inside(i - 1, j) && v[i - 1][j] == v[i][j] + 1)
  {
    dfs(i - 1, j, ans, v, s);
  }
}

void solve()
{
  string line;
  vector<vector<int>> v;
  int ans = 0;
  while (getline(cin, line))
  {
    if (line.empty())
      break;
    vector<int> row;
    for (int i = 0; i < line.size(); i++)
    {
      row.pb(line[i] - '0');
    }
    v.push_back(row);
  }
  int m = v.size();
  int n = v[0].size();
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (v[i][j] == 0)
      {
        set<pair<int, int>> s;
        dfs(i, j, ans, v, s);
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
