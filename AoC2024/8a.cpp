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
  map<char, vector<pair<int, int>>> h;
  int m = v.size();
  int n = v[0].size();
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (v[i][j] != '.')
      {
        h[v[i][j]].push_back({i, j});
      }
    }
  }
  set<pair<int, int>> p;

  auto inside = [&](int x, int y)
  {
    return (x >= 0 && x < m && y >= 0 && y < n);
  };

  for (auto a : h)
  {
    auto b = a.se;
    for (int i = 0; i < b.size(); i++)
    {
      for (int j = i + 1; j < b.size(); j++)
      {
        int dx = abs(b[i].fi - b[j].fi);
        int dy = abs(b[i].se - b[j].se);
        int x = b[i].fi;
        int y = b[i].se;
        int x1 = b[j].fi;
        int y1 = b[j].se;
        if (b[i].fi > b[j].fi)
        {
          x += dx;
          x1 -= dx;
        }
        else
        {

          x -= dx;
          x1 += dx;
        }
        if (b[i].se > b[j].se)
        {
          y += dy;
          y1 -= dy;
        }
        else
        {
          y -= dy;
          y1 += dy;
        }

        if (inside(x, y))
        {
          p.insert({x, y});
          v[x][y] = '#';
        }

        if (inside(x1, y1))
        {
          p.insert({x1, y1});
          v[x1][y1] = '#';
        }
      }
    }
  }

  for (auto line : v)
  {
    cout << line << endl;
  }
  cout << p.size() << endl;
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
