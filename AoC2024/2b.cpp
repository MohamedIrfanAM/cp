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

bool check(vector<int> v)
{
  int s = 0;
  if (v[0] > v[1])
  {
    s = 1;
  }
  bool no = false;
  for (int j = 1; j < v.size(); j++)
  {
    if (s == 0)
    {
      if (v[j] <= v[j - 1] || v[j] - v[j - 1] > 3)
      {
        no = true;
        break;
      }
    }
    else
    {
      if (v[j] >= v[j - 1] || v[j - 1] - v[j] > 3)
      {
        no = true;
        break;
      }
    }
  }
  return !no;
}

void solve()
{
  string line;
  vector<vector<int>> matrix;

  while (getline(cin, line))
  {
    if (line.empty())
      break;
    stringstream ss(line);
    vector<int> row;
    int number;
    while (ss >> number)
    {
      row.push_back(number);
    }
    matrix.push_back(row);
  }
  int ans = 0;
  for (int i = 0; i < matrix.size(); i++)
  {
    for (int j = 0; j < matrix[i].size(); j++)
    {
      vector<int> m;
      for (int k = 0; k < matrix[i].size(); k++)
      {
        if (k != j)
        {
          m.push_back(matrix[i][k]);
        }
      }
      if (check(m))
      {
        ans++;
        break;
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