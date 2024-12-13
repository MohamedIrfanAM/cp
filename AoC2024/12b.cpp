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

int ans = 0;

map<pair<int, int>, bool> m;
void traverse(int x, int y, int &area, int &sides, vector<string> &v, set<pair<int, int>> &r, set<pair<int, int>> &c)
{
  auto inside = [&](int p, int q)
  {
    if (p < v.size() && q < v[0].size() && p >= 0 && q >= 0)
    {
      return true;
    }
    return false;
  };

  // Doing BFS to find same chars in the same region, DFS do not work since we calcualte the outline based on outline of the previous square
  // Use each matrix[i][j] to store columns and rows, instaed of set<pair<int,int>>, because it's faster, just like we used to use store the maze outline with mazecruizer
  queue<pair<int, int>> q;
  q.push({x, y});

  while (!q.empty())
  {
    auto [i, j] = q.front();
    q.pop();
    if (!inside(i, j) || m[{i, j}])
    {
      continue;
    }
    m[{i, j}] = true;
    area++;
    int s = 0;
    if (!inside(i + 1, j) || v[i + 1][j] != v[i][j])
    {
      r.insert({i + 1, j});
      if (r.find({i + 1, j - 1}) == r.end() && r.find({i + 1, j + 1}) == r.end())
      {
        s++;
      }
    }
    if (!inside(i, j + 1) || v[i][j + 1] != v[i][j])
    {
      c.insert({i, j + 1});
      if (c.find({i - 1, j + 1}) == c.end() && c.find({i + 1, j + 1}) == c.end())
      {
        s++;
      }
    }
    if (!inside(i, j - 1) || v[i][j - 1] != v[i][j])
    {
      c.insert({i, j});
      if (c.find({i - 1, j}) == c.end() && c.find({i + 1, j}) == c.end())
      {
        s++;
      }
    }
    if (!inside(i - 1, j) || v[i - 1][j] != v[i][j])
    {
      r.insert({i, j});
      if (r.find({i, j - 1}) == r.end() && r.find({i, j + 1}) == r.end())
      {
        s++;
      }
    }

    sides += s;

    if (inside(i + 1, j) && v[i + 1][j] == v[i][j])
    {
      q.push({i + 1, j});
    }
    if (inside(i, j + 1) && v[i][j + 1] == v[i][j])
    {
      q.push({i, j + 1});
    }
    if (inside(i, j - 1) && v[i][j - 1] == v[i][j])
    {
      q.push({i, j - 1});
    }
    if (inside(i - 1, j) && v[i - 1][j] == v[i][j])
    {
      q.push({i - 1, j});
    }
  }
}

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

  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v[0].size(); j++)
    {
      int area = 0;
      int sides = 0;
      cout << v[i][j] << endl;
      set<pair<int, int>> r;
      set<pair<int, int>> c;
      traverse(i, j, area, sides, v, r, c);
      ans += area * sides;
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
