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
  map<int, vector<int>> m;
  map<pair<int, int>, bool> p;

  while (getline(cin, line))
  {
    if (line.empty())
      break;
    stringstream ss(line);
    vector<int> row;
    int number;
    string s;
    while (getline(ss, s, '|'))
    {
      row.push_back(stoi(s));
    }
    m[row[0]].push_back(row[1]);
    p[{row[0], row[1]}] = 1;
  }
  int ans = 0;

  while (getline(cin, line))
  {
    if (line.empty())
      break;
    map<int, int> h;
    stringstream ss(line);
    string s;

    vector<int> k;

    int l = 0;
    while (getline(ss, s, ','))
    {
      h[stoi(s)] = l;
      k.push_back(stoi(s));
      l++;
    }

    bool no = false;
    for (auto a : m)
    {
      int x = a.fi;
      vector<int> v = a.se;
      for (int i = 0; i < v.size(); i++)
      {
        if (h.find(v[i]) != h.end() && h.find(x) != h.end() && h[v[i]] < h[x])
        {
          no = true;
          break;
        }
      }
    }

    // Bubble sort with custom comparator function
    // Better approach would be to do topological sorting
    for (int i = 0; i < k.size(); i++)
    {
      for (int j = 0; j < k.size() - i - 1; j++)
      {
        if (p[{k[j + 1], k[j]}] == 1)
        {
          swap(k[j], k[j + 1]);
        }
      }
    }

    if (no)
    {
      ans += k[l / 2];
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
