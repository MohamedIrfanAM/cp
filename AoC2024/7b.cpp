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

bool check(vector<int> &v, int i, int y, int x)
{
  if (i == v.size())
  {
    return x == y;
  }

  int y1 = y * v[i];
  int y2 = y + v[i];
  int d = v[i];
  int y3 = y;
  while (d > 0)
  {
    d /= 10;
    y3 *= 10;
  }
  y3 += v[i];

  return (check(v, i + 1, y1, x) || check(v, i + 1, y2, x) || check(v, i + 1, y3, x));
};

void solve()
{
  string line;
  int ans = 0;
  while (getline(cin, line))
  {
    if (line.empty())
      break;
    stringstream ss(line);
    string s;
    getline(ss, s, ':');
    int x = stol(s);
    getline(ss, s, ':');
    ss = stringstream(s);
    vector<int> v;
    int a;
    while (ss >> a)
    {
      v.pb(a);
    }
    if (check(v, 1, v[0], x))
    {
      ans += x;
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
