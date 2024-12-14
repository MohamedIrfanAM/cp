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
  int width = 101;
  int height = 103;

  vector<vector<int>> v;
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

      v.push_back({p1, p2, m1, m2});
    }
  }

  for (int j = 100; j <= 10000; j++)
  {
    vector<vector<int>> arr(height, vector<int>(width, 0));
    for (int i = 0; i < v.size(); i++)
    {
      int p1 = v[i][0];
      int p2 = v[i][1];
      int m1 = v[i][2];
      int m2 = v[i][3];

      int y1 = p1 + m1 * j;
      int y2 = p2 + m2 * j;

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
      arr[y2][y1] = 1;
      // bug(y1, y2);
    }
    cout << "Moves: " << j << endl;
    for (auto a : arr)
    {
      for (auto b : a)
      {
        cout << (b == 1 ? 'X' : '.');
      }
      cout << endl;
    }
  }
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
