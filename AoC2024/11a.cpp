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
  getline(cin, line);
  stringstream ss(line);
  list<int> l;
  int number;
  while (ss >> number)
  {
    l.push_back(number);
  }

  for (int i = 0; i < 25; i++)
  {

    for (auto a : l)
    {
      cout << a << " ";
    }
    cout << endl;

    for (auto it = l.begin(); it != l.end(); it++)
    {
      int x = *it;
      string xs = to_string(x);
      if (x == 0)
      {
        *it = 1;
      }
      else if (xs.size() % 2 == 0)
      {
        string p = xs.substr(0, xs.size() / 2);
        string y = xs.substr(xs.size() / 2, xs.size() / 2);
        l.insert(it, stoi(p));
        l.insert(it, stoi(y));
        auto d = it;
        d--;
        l.erase(it);
        it = d;
      }
      else
      {
        *it *= 2024;
      }
    }
  }
  cout << l.size() << endl;
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
