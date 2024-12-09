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
  string v;
  getline(cin, v);
  vector<int> s;
  vector<int> f;

  bool prev = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (i & 1)
    {
      if (prev)
      {
        prev = 0;
        f[f.size() - 1] += (int)v[i] - '0';
      }
      else
      {
        f.pb((int)v[i] - '0');
      }
    }
    else
    {
      assert(v[i] != '0');
      s.pb(v[i] - '0');
      if (s.back() == 0)
      {
        prev = 1;
      }
    }
  }

  cout << f.size() << " " << s.size() << endl;

  map<int, vector<pair<int, int>>> m;
  for (int i = s.size() - 1; i >= 0; i--)
  {
    for (int j = 0; j < f.size(); j++)
    {
      if (s[i] <= f[j] && i > j)
      {
        assert(i != 3);
        m[j].pb({i, s[i]});
        f[j] -= s[i];
        s[i] = -1 * s[i];
        break;
      }
    }
  }
  int ans = 0;
  int r = s.size() - 1;
  int l = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] < 0)
    {
      s[i] *= -1;
      for (int j = 0; j < s[i]; j++)
      {
        cout << " . ";
        l++;
      }
    }
    else
    {
      for (int j = 0; j < s[i]; j++)
      {
        cout << i << " ";
        ans += l * i;
        l++;
      }
    }
    int N = l;
    if (m.find(i) != m.end())
    {
      for (int k = 0; k < m[i].size(); k++)
      {
        for (int j = 0; j < m[i][k].se; j++)
        {
          cout << "" << m[i][k].fi << " ";
          ans += l * m[i][k].fi;
          l++;
        }
      }
    }
    for (int j = 0; j < f[i]; j++)
    {
      cout << " . ";
      l++;
    }
  }
  cout << endl;
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
