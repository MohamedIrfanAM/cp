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

  int ans = 0;
  int moves = 100;
  int width = 11;
  int height = 7;

  vector<int> q(4);

  while (getline(cin, line))
  {
    if (line.empty())
      break;

    pair<int, int> a, b, r;
    regex pattern("p=(\\d+),(\\d+) v=(-?\\d+),(-?\\d+)");
    smatch matches;
    if (regex_search(line, matches, pattern))
    {
      int p1 = stoi(matches[1]);
      int p2 = stoi(matches[2]);
      int m1 = stoi(matches[3]);
      int m2 = stoi(matches[4]);

      int y1 = p1 + m1 * moves;
      int y2 = p2 + m2 * moves;

      y1 %= width;
      y2 %= height;

      if (y1 < 0)
      {
        y1 = width - abs(y1);
      }
      if (y2 < 0)
      {
        y2 = height - abs(y2);
      }

      int midx = ((1.0 * width) / 2);
      int midy = ((1.0 * height) / 2);

      if (y1 < midx && y2 < midy)
      {
        q[0]++;
      }
      else if (y1 < midx && y2 > midy)
      {
        q[1]++;
      }
      else if (y1 > midx && y2 < midy)
      {
        q[2]++;
      }
      else if (y1 > midx && y2 > midy)
      {
        q[3]++;
      }
    }
  }
  bug(q[0], q[1], q[2], q[3]);
  cout << q[0] * q[1] * q[2] * q[3] << endl;
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
