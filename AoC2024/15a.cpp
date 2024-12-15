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

void move(int &r, int &c, int dr, int dc, vector<string> &v)
{
  int rr = r + dr;
  int cc = c + dc;

  if (rr >= v.size() || cc >= v[0].size() || v[rr][cc] == '#')
  {
    return;
  }
  while (v[rr][cc] != '#' && v[rr][cc] != '.')
  {
    rr += dr;
    cc += dc;
  }

  if (v[rr][cc] == '#')
  {
    return;
  }

  while (rr != r || cc != c)
  {
    int nr = rr - dr;
    int nc = cc - dc;
    swap(v[rr][cc], v[nr][nc]);
    rr = nr;
    cc = nc;
  }

  r += dr;
  c += dc;
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
  vector<string> moves;
  while (getline(cin, line))
  {
    if (line.empty())
      break;
    moves.push_back(line);
  }

  int r, c;
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v[0].size(); j++)
    {
      if (v[i][j] == '@')
      {
        r = i;
        c = j;
        break;
      }
    }
  }
  for (auto a : moves)
  {
    for (auto dir : a)
    {
      int dr, dc;
      if (dir == '^')
      {
        dr = -1;
        dc = 0;
      }
      else if (dir == '>')
      {
        dr = 0;
        dc = 1;
      }
      else if (dir == '<')
      {
        dr = 0;
        dc = -1;
      }
      else if (dir == 'v')
      {
        dr = 1;
        dc = 0;
      }
      move(r, c, dr, dc, v);
    }
  }
  int ans = 0;
  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v[0].size(); j++)
    {
      if (v[i][j] == 'O')
      {
        ans += 100 * i + j;
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
