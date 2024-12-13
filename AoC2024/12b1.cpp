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

map<pair<int, int>, bool> m;
int ans = 0;

// Counting columns method
void traverse(int i, int j, int &area, int &perimenter, vector<string> &v, vector<vector<int>> &rows, vector<vector<int>> &cols)
{
  auto inside = [&](int p, int q)
  {
    if (p < v.size() && q < v[0].size() && p >= 0 && q >= 0)
    {
      return true;
    }
    return false;
  };

  if (!inside(i, j) || m[{i, j}])
  {
    return;
  }
  m[{i, j}] = true;
  area++;
  int s = 0;
  if (!inside(i + 1, j) || v[i + 1][j] != v[i][j])
  {
    s++;
    rows[i + 1].push_back(j);
  }
  if (!inside(i, j + 1) || v[i][j + 1] != v[i][j])
  {
    cols[j + 1].push_back(i);
    s++;
  }
  if (!inside(i, j - 1) || v[i][j - 1] != v[i][j])
  {
    cols[j].push_back(i);
    s++;
  }
  if (!inside(i - 1, j) || v[i - 1][j] != v[i][j])
  {
    rows[i].push_back(j);
    s++;
  }
  perimenter += s;

  if (inside(i + 1, j) && v[i + 1][j] == v[i][j])
  {
    traverse(i + 1, j, area, perimenter, v, rows, cols);
  }
  if (inside(i, j + 1) && v[i][j + 1] == v[i][j])
  {
    traverse(i, j + 1, area, perimenter, v, rows, cols);
  }
  if (inside(i, j - 1) && v[i][j - 1] == v[i][j])
  {
    traverse(i, j - 1, area, perimenter, v, rows, cols);
  }
  if (inside(i - 1, j) && v[i - 1][j] == v[i][j])
  {
    traverse(i - 1, j, area, perimenter, v, rows, cols);
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
  map<char, pair<int, int>> vals; // area and sides
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v[0].size(); j++)
    {
      int area = 0;
      int sides = 0;
      vector<vector<int>> rows(v.size() + 1);
      vector<vector<int>> cols(v[0].size() + 1);
      traverse(i, j, area, sides, v, rows, cols);

      int s = 0;
      cout << v[i][j];
      for (int k = 0; k < rows.size(); k++)
      {
        sort(all(rows[k]));
        cout << k << ": ";
        for (int l = 0; l < rows[k].size(); l++)
        {
          if (l == 0 || rows[k][l] - rows[k][l - 1] > 1)
          {
            s++;
          }
          cout << rows[k][l] << " ";
        }
        cout << endl;
      }

      for (int k = 0; k < cols.size(); k++)
      {
        sort(all(cols[k]));
        for (int l = 0; l < cols[k].size(); l++)
        {
          if (l == 0 || cols[k][l] - cols[k][l - 1] > 1)
          {
            s++;
          }
        }
      }
      vals[v[i][j]].first += area;
      vals[v[i][j]].second += s;
    }
  }

  for (auto [_, val] : vals)
  {
    ans += val.fi * val.se;
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
