// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1566/D1
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n,m;
  cin >> n >> m;
  vector<int> v(m);
  vector<int> s(m);
  for(int i = 0;i < m; i++)
  {
    cin >> v[i];
    s[i]=v[i];
  }
  sort(s.begin(),s.end());
  map<int,bool> used;

  int ans = 0;

  for(int i = 0; i < m; i++)
  {
    for(int j =0; j < m ;j++)
    {
      if(s[j] == v[i] && !used[j])
      {
        used[j] = true;
        break;
      }
      else if( s[j] == v[i] && used[j])
      {
        continue;
      }
      else if(used[j])
      {
        ans++;
      }
    }
  }
  cout << ans << "\n";
}

return 0;
}
