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
  bool enable = true;
  for (int i = 0; i < 10; i++)
  {
    getline(cin, line);
    line.append("000");
    for (int j = 0; j + 10 < line.size(); j++)
    {
      if (line[j] != 'm' && line[j] != 'd')
      {
        continue;
      }
      if (line[j] == 'd')
      {
        regex pattern1("^do\\(\\)$");
        smatch matches1;
        if (regex_search(line.cbegin() + j, line.cbegin() + j + 4, matches1, pattern1))
        {
          enable = true;
        }

        regex pattern2("^don't\\(\\)$");
        smatch matches2;

        if (regex_search(line.cbegin() + j, line.cbegin() + j + 7, matches2, pattern2))
        {
          enable = false;
        }
        cout << line.substr(j, 7) << endl;
      }

      regex pattern("^mul\\((\\d+),(\\d+)\\).*");
      smatch matches;
      if (regex_search(line.cbegin() + j, line.cbegin() + j + 12, matches, pattern) && enable == true)
      {
        cout << line.substr(j, 12) << " ";
        int num1 = stoi(matches[1].str());
        int num2 = stoi(matches[2].str());
        cout << num1 << " " << num2 << endl;
        ans += num1 * num2;
      }
      else
      {
        // cout << line.substr(j, 17) << endl;
      }
    }
  }
  cout << "Answer: " << ans << endl;
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
