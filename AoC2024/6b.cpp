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

int m, n;
bool traverse(vector<string> v, int r, int c, int dir)
{
  int pr = r;
  int pc = c;
  int dr = r;
  int dc = c;
  int count = 0;
  map<pair<int, int>, int> hs;
  do
  {
    hs[{r, c}]++;
    if (hs[{r, c}] > 4) // If it has visited more than four times then four different directiosn by pegion hole principle one of them is duplicate so it causes loop
    {
      return true;
    }
    char x = v[r][c];
    if (x == '#')
    {
      dir++;
      dir %= 4;
      r = pr;
      c = pc;
    }
    else if (x == '.')
    {
    }
    pc = c;
    pr = r;
    if (dir == 0)
    {
      r--;
    }
    else if (dir == 1)
    {
      c++;
    }
    else if (dir == 2)
    {
      r++;
    }
    else
    {
      c--;
    }
  } while (r < m && c < n && c >= 0 && r >= 0);
  return false;
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

  m = v.size();
  n = v[0].size();
  int dir = 0;
  int r, c;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (v[i][j] == '#' || v[i][j] == '.')
        continue;
      if (v[i][j] == 'V')
      {
        dir = 2;
      }
      else if (v[i][j] == '^')
      {
        dir = 0;
      }
      else if (v[i][j] == '>')
      {
        dir = 1;
      }
      else if (v[i][j] == '<')
      {
        dir = 3;
      }
      r = i;
      c = j;
      break;
    }
  }
  int ans = 0;
  int pr = r;
  int pc = c;
  map<pair<int, int>, bool> h;
  do
  {
    char x = v[r][c];
    if (x == '#')
    {
      dir++;
      dir %= 4;
      r = pr;
      c = pc;
    }
    else if (x == '^')
    {
      v[r][c] = '.';
    }
    else if (x == '.')
    {
      vector<string> ds = v;
      ds[r][c] = '#';
      if (traverse(ds, pr, pc, dir) == true && h.find({r, c}) == h.end()) // Check if [r,c] have already been considered (blocked) and found, There can multiple loops if we consider them from different directions but only one of them need to be counted (only the first directinon of approach is valid)
      {
        ans++;
      }
      h[{r, c}] = 1;
    }
    pc = c;
    pr = r;
    if (dir == 0)
    {
      r--;
    }

    else if (dir == 1)
    {
      c++;
    }
    else if (dir == 2)
    {
      r++;
    }
    else
    {
      c--;
    }
  } while (r < m && c < n && c >= 0 && r >= 0);

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
