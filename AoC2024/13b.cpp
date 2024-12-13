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
  while (getline(cin, line))
  {
    if (line.empty())
      break;

    pair<int, int> a, b, r;
    regex pattern("Button A: X\\+(\\d+), Y\\+(\\d+)");
    smatch matches;
    if (regex_search(line.cbegin(), line.cend(), matches, pattern))
    {
      a.fi = stoi(matches[1].str());
      a.se = stoi(matches[2].str());
    }

    getline(cin, line);
    regex pattern1("Button B: X\\+(\\d+), Y\\+(\\d+)");
    smatch matches1;
    if (regex_search(line.cbegin(), line.cend(), matches1, pattern1))
    {
      b.fi = stoi(matches[1].str());
      b.se = stoi(matches[2].str());
    }

    getline(cin, line);
    regex pattern2("Prize: X=(\\d+), Y=(\\d+)");
    smatch matches2;
    if (regex_search(line.cbegin(), line.cend(), matches2, pattern2))
    {
      r.fi = stoi(matches2[1].str());
      r.se = stoi(matches2[2].str());
    }

    getline(cin, line);

    r.fi += 10000000000000;
    r.se += 10000000000000;

    // Brutforcing also works, iterate from 0-100 for both A and B and calculate the min cost
    // [ a.fi b.fi ]  [ A ] = [ r.fi ]
    // [ a.se b.se ]  [ B ]   [ r.se ]
    // Solve for A and B by finding the inverse of the first matrix

    int deter = (a.fi * b.se) - (a.se * b.fi);
    if (deter == 0)
    {
      continue;
    }

    auto ad = a;
    auto bd = b;

    // Finding adjoint
    swap(ad.fi, bd.se);
    ad.se *= -1;
    bd.fi *= -1;

    // multiplying adjoing with result
    auto rd = r;
    rd.fi = (r.fi * ad.fi) + (r.se * bd.fi);
    rd.se = (r.fi * ad.se) + (r.se * bd.se);

    // Divide with determinant
    if (rd.fi % deter == 0 && rd.se % deter == 0)
    {
      ans += (rd.fi / deter) * 3;
      ans += (rd.se / deter);
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
